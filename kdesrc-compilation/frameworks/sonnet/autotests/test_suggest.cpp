// krazy:excludeall=spelling
/**
 * test.cpp
 *
 * SPDX-FileCopyrightText: 2004 Zack Rusin <zack@kde.org>
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */
#include "speller.h"

#include <QDebug>
#include <QObject>
#include <QTest>

using namespace Sonnet;

class SuggestTest : public QObject
{
    Q_OBJECT

private Q_SLOTS:
    void aspell_english_data();
    void aspell_english();
    void performance();
};

void SuggestTest::aspell_english_data()
{
    // Input
    QTest::addColumn<QString>("word");
    // Expected output
    QTest::addColumn<bool>("correct");
    QTest::addColumn<QStringList>("expectedSuggestions");

    QTest::newRow("hello") << QStringLiteral("hello") << true << QStringList();
    QTest::newRow("helo") << QStringLiteral("helo") << false << QStringList{QStringLiteral("hello"), QStringLiteral("hell"), QStringLiteral("help")};
    QTest::newRow("enviroment") << QStringLiteral("enviroment") << false << QStringList{QStringLiteral("environment")};
    QTest::newRow("guvernment") << QStringLiteral("guvernment") << false << QStringList{QStringLiteral("government")};
    QTest::newRow("dictionaies") << QStringLiteral("dictionaies") << false << QStringList{QStringLiteral("dictionaries")};
}

void SuggestTest::aspell_english()
{
    QFETCH(QString, word);
    QFETCH(bool, correct);
    QFETCH(QStringList, expectedSuggestions);

    Speller dict(QStringLiteral("en_US"));
    if (!dict.availableBackends().contains(QLatin1String("ASpell"))) {
        QSKIP("ASpell not available");
    }
    if (!dict.availableLanguages().contains(QLatin1String("en"))) {
        QSKIP("'en' not available");
    }
    dict.setDefaultClient(QStringLiteral("ASpell"));
    dict.setDefaultLanguage(QStringLiteral("en"));

    QCOMPARE(dict.isCorrect(word), correct);
    if (!correct) {
        const QStringList suggestions = dict.suggest(word);
        qDebug() << suggestions;
        // Check that each expectedSuggestions was found, make list of those that were missing
        QStringList missingSuggestions;
        std::copy_if(expectedSuggestions.begin(), expectedSuggestions.end(), std::back_inserter(missingSuggestions), [&suggestions](const QString &sugg) {
            return !suggestions.contains(sugg);
        });
        QCOMPARE(missingSuggestions.join(QLatin1Char(',')), QString()); // not using QVERIFY, to see the list in the output
    }
}

void SuggestTest::performance()
{
    Speller dict(QStringLiteral("en_US"));

    qDebug() << "Clients are " << dict.availableBackends();
    qDebug() << "Languages are " << dict.availableLanguages();

    QStringList words;
    for (int i = 0; i < 30; ++i) {
        words << QStringLiteral("hello") << QStringLiteral("helo") << QStringLiteral("enviroment") << QStringLiteral("guvernment") << QStringLiteral("farted");
    }

    QBENCHMARK {
        for (QStringList::Iterator itr = words.begin(); itr != words.end(); ++itr) {
            if (!dict.isCorrect(*itr)) {
                // qDebug()<<"Word " << *itr <<" is misspelled";
                QStringList sug = dict.suggest(*itr);
                // qDebug()<<"Suggestions : "<<sug;
            }
        }
    }
}

QTEST_GUILESS_MAIN(SuggestTest)

#include "test_suggest.moc"
