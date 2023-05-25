<?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE TS>
<TS version="2.1" language="ru">
    <extra-po-header-language>ru</extra-po-header-language>
    <extra-po-header-language_team>Russian &lt;kde-russian@lists.kde.ru&gt;</extra-po-header-language_team>
    <extra-po-header-last_translator>Alexander Potashev &lt;aspotashev@gmail.com&gt;</extra-po-header-last_translator>
    <extra-po-header-plural_forms>nplurals=3; plural=(n%10==1 &amp;&amp; n%100!=11 ? 0 : n%10&gt;=2 &amp;&amp; n%10&lt;=4 &amp;&amp; (n%100&lt;10 || n%100&gt;=20) ? 1 : 2);</extra-po-header-plural_forms>
    <extra-po-header-po_revision_date>2017-05-14 13:05+0300</extra-po-header-po_revision_date>
    <extra-po-header-pot_creation_date>2014-03-23 01:50+0000</extra-po-header-pot_creation_date>
    <extra-po-header-project_id_version>kdelibs4</extra-po-header-project_id_version>
    <extra-po-header-report_msgid_bugs_to>http://bugs.kde.org</extra-po-header-report_msgid_bugs_to>
    <extra-po-header-x_accelerator_marker>&amp;</extra-po-header-x_accelerator_marker>
    <extra-po-header-x_environment>kde</extra-po-header-x_environment>
    <extra-po-header-x_generator>Lokalize 2.0</extra-po-header-x_generator>
    <extra-po-header-x_text_markup>kde4</extra-po-header-x_text_markup>
    <extra-po-header_comment># KDE - kdelibs/kdelibs4.po Russian translation.
# Copyright (C) 2005, KDE Russian translation team.
#
# Denis Perchine &lt;dyp@perchine.com&gt;, 2000.
# Gregory Mokhin &lt;mok@kde.ru&gt;, 2000, 2004, 2005.
# Albert R. Valiev &lt;darkstar@altlinux.ru&gt;, 2002, 2008.
# Leonid Kanter &lt;leon@asplinux.ru&gt;, 2002-2004, 2005, 2008.
# Andrey Cherepanov &lt;skull@kde.ru&gt;, 2005-2007, 2008, 2009, 2011.
# Nick Shaforostoff &lt;shaforostoff@kde.ru&gt;, 2004, 2006, 2007, 2008, 2009.
# Nick Shaforostoff &lt;shafff@ukr.net&gt;, 2009.
# Alexander Potashev &lt;aspotashev@gmail.com&gt;, 2009, 2010, 2011, 2014, 2016, 2017.
# Yury G. Kudryashov &lt;urkud.urkud@gmail.com&gt;, 2011.
# Yuri Efremov &lt;yur.arh@gmail.com&gt;, 2012.
# Inga Barinova &lt;ingabarinova@gmail.com&gt;, 2012.
# Julia Dronova &lt;juliette.tux@gmail.com&gt;, 2012.
# Alexander Lakhin &lt;exclusion@gmail.com&gt;, 2013.</extra-po-header_comment>
    <extra-po-headers>Project-Id-Version,Report-Msgid-Bugs-To,POT-Creation-Date,PO-Revision-Date,Last-Translator,Language-Team,Language,MIME-Version,Content-Type,Content-Transfer-Encoding,X-Generator,Plural-Forms,X-Environment,X-Accelerator-Marker,X-Text-Markup,X-Qt-Contexts</extra-po-headers>
<context>
    <name>KAuth::DBusHelperProxy</name>
    <message>
        <location filename="backends/dbus/DBusHelperProxy.cpp" line="74"/>
        <source>DBus Backend error: service start %1 failed: %2</source>
        <translation>Внутренняя ошибка DBus: не удалось запустить службу %1: %2</translation>
    </message>
    <message>
        <location filename="backends/dbus/DBusHelperProxy.cpp" line="89"/>
        <source>DBus Backend error: connection to helper failed. %1
(application: %2 helper: %3)</source>
        <translation>Внутренняя ошибка DBus: сбой подключения к обработчику. %1
(приложение: %2; обработчик: %3)</translation>
    </message>
    <message>
        <location filename="backends/dbus/DBusHelperProxy.cpp" line="124"/>
        <source>DBus Backend error: could not contact the helper. Connection error: %1. Message error: %2</source>
        <translatorcomment>BUGME: &quot;Message error&quot; -&gt; &quot;Error message&quot;? --aspotashev</translatorcomment>
        <translation>Внутренняя ошибка DBus: не удалось подключиться к обработчику. Ошибка подключения: %1. Сообщение об ошибке: %2</translation>
    </message>
    <message>
        <source>. Message error: </source>
        <translatorcomment>BUGME: 1. message error -&gt; error message; 2. this is an ugly word puzzle. --aspotashev</translatorcomment>
        <translation type="vanished">. Сообщение об ошибке: </translation>
    </message>
</context>
<context>
    <name>KAuth::ExecuteJob</name>
    <message>
        <location filename="executejob.cpp" line="86"/>
        <source>Tried to start an invalid action</source>
        <translation>Попытка запустить некорректную задачу.</translation>
    </message>
    <message>
        <location filename="executejob.cpp" line="104"/>
        <source>Unknown execution mode chosen</source>
        <translation>Выбран неизвестный режим запуска.</translation>
    </message>
    <message>
        <location filename="executejob.cpp" line="149"/>
        <source>Unknown status for the authentication procedure</source>
        <translation>Неизвестное состояние процедуры аутентификации.</translation>
    </message>
    <message>
        <location filename="executejob.cpp" line="161"/>
        <source>The current backend only allows helper authorization, but this action does not have a helper.</source>
        <translation>Текущая реализация процедур авторизации может работать только через обработчик, но он отсутствует для данного действия.</translation>
    </message>
    <message>
        <location filename="executejob.cpp" line="169"/>
        <location filename="executejob.cpp" line="193"/>
        <source>The backend does not specify how to authorize</source>
        <translation>Для обработчика не задано ни одного способа авторизации.</translation>
    </message>
</context>
<context>
    <name></name>
    <message>
        <source>Your names</source>
        <comment>NAME OF TRANSLATORS</comment>
        <translation type="vanished">Григорий Мохин,Николай Шафоростов,Андрей Черепанов,Леонид Кантер,Альберт Валиев</translation>
    </message>
    <message>
        <source>Your emails</source>
        <comment>EMAIL OF TRANSLATORS</comment>
        <translation type="vanished">mok@kde.ru,shaforostoff@kde.ru,skull@kde.ru,leon@asplinux.ru,darkstar@altlinux.ru</translation>
    </message>
    <message>
        <source>Name</source>
        <translation type="vanished">Название</translation>
    </message>
    <message>
        <source>Host</source>
        <translation type="vanished">Узел</translation>
    </message>
    <message>
        <source>Port</source>
        <translation type="vanished">Порт</translation>
    </message>
    <message>
        <source>i18n() takes at least one argument</source>
        <translation type="vanished">Функция i18n() требует хотя бы один аргумент.</translation>
    </message>
    <message>
        <source>i18nc() takes at least two arguments</source>
        <translation type="vanished">Функция i18nc() требует хотя бы два аргумента.</translation>
    </message>
    <message>
        <source>i18np() takes at least two arguments</source>
        <translation type="vanished">Функция i18np() требует хотя бы два аргумента.</translation>
    </message>
    <message>
        <source>i18ncp() takes at least three arguments</source>
        <translation type="vanished">Функция i18ncp() требует хотя бы три аргумента.</translation>
    </message>
    <message>
        <source>System Default (currently: %1)</source>
        <translation type="vanished">Стандартный (сейчас: %1)</translation>
    </message>
    <message>
        <source>Editor Chooser</source>
        <translation type="vanished">Редактор по умолчанию</translation>
    </message>
    <message>
        <source>Please choose the default text editing component that you wish to use in this application. If you choose &lt;B&gt;System Default&lt;/B&gt;, the application will honor your changes in the System Settings. All other choices will override that setting.</source>
        <translation type="vanished">Выберите компонент редактирования текста, который вы хотите использовать с этим приложением по умолчанию. Если вы выберете &lt;B&gt;Стандартный&lt;/B&gt;, приложение будет использовать компонент, указанный вами в параметрах системы. При выборе любого другого варианта глобальные настройки будут игнорироваться.</translation>
    </message>
    <message>
        <source>The template needs information about you, which is stored in your address book.
However, the required plugin could not be loaded.

Please install the KDEPIM/Kontact package for your system.</source>
        <translation type="vanished">Для заполнения шаблона требуются данные о вас, хранящиеся в адресной книге.
Требуемое для этого расширение не найдено.

Установите пакет KDEPIM/Kontact.</translation>
    </message>
    <message>
        <source>TETest</source>
        <translation type="vanished">TETest</translation>
    </message>
    <message>
        <source>Only local files are supported.</source>
        <translation type="vanished">Поддерживаются только локальные файлы.</translation>
    </message>
    <message>
        <source>Keep output results from scripts</source>
        <translation type="vanished">Сохранять коды выхода из скриптов</translation>
    </message>
    <message>
        <source>Check whether config file itself requires updating</source>
        <translation type="vanished">Проверять, требует ли обновления сам файл конфигурации</translation>
    </message>
    <message>
        <source>File to read update instructions from</source>
        <translation type="vanished">Читать инструкции по обновлению из файла</translation>
    </message>
    <message>
        <source>KConf Update</source>
        <translation type="vanished">KConf Update</translation>
    </message>
    <message>
        <source>KDE Tool for updating user configuration files</source>
        <translation type="vanished">Утилита KDE для обновления файлов настроек пользователей</translation>
    </message>
    <message>
        <source>(c) 2001, Waldo Bastian</source>
        <translation type="vanished">© Waldo Bastian, 2001</translation>
    </message>
    <message>
        <source>Waldo Bastian</source>
        <translation type="vanished">Waldo Bastian</translation>
    </message>
    <message>
        <source>??</source>
        <translation type="vanished">??</translation>
    </message>
    <message>
        <source>&amp;About</source>
        <translation type="vanished">&amp;О программе</translation>
    </message>
    <message>
        <source>No information available.
The supplied KAboutData object does not exist.</source>
        <translation type="vanished">К сожалению, информация отсутствует.
Программа не предоставила объекта KAboutData.</translation>
    </message>
    <message>
        <source>A&amp;uthor</source>
        <translation type="vanished">А&amp;втор</translation>
    </message>
    <message>
        <source>A&amp;uthors</source>
        <translation type="vanished">&amp;Авторы</translation>
    </message>
    <message>
        <source>Please use &lt;a href=&quot;http://bugs.kde.org&quot;&gt;http://bugs.kde.org&lt;/a&gt; to report bugs.
</source>
        <translation type="vanished">Используйте &lt;a href=&quot;http://bugs.kde.org&quot;&gt;http://bugs.kde.org&lt;/a&gt; для сообщения об ошибках.
</translation>
    </message>
    <message>
        <source>Please report bugs to &lt;a href=&quot;mailto:%1&quot;&gt;%2&lt;/a&gt;.
</source>
        <translation type="vanished">Используйте &lt;a href=&quot;mailto:%1&quot;&gt;%2&lt;/a&gt; для сообщения об ошибках.
</translation>
    </message>
    <message>
        <source>&amp;Thanks To</source>
        <translation type="vanished">&amp;Благодарности</translation>
    </message>
    <message>
        <source>T&amp;ranslation</source>
        <translation type="vanished">&amp;Перевод</translation>
    </message>
    <message>
        <source>&amp;License Agreement</source>
        <translation type="vanished">&amp;Лицензия</translation>
    </message>
    <message>
        <source>Author</source>
        <translation type="vanished">Автор</translation>
    </message>
    <message>
        <source>Email</source>
        <translation type="vanished">Адрес электронной почты</translation>
    </message>
    <message>
        <source>Homepage</source>
        <translation type="vanished">Веб-сайт</translation>
    </message>
    <message>
        <source>Task</source>
        <translation type="vanished">Задача</translation>
    </message>
    <message>
        <source>&lt;html&gt;&lt;font size=&quot;5&quot;&gt;%1&lt;/font&gt;&lt;br/&gt;&lt;b&gt;version %2&lt;/b&gt;&lt;br/&gt;Using KDE %3&lt;/html&gt;</source>
        <translation type="vanished">&lt;html&gt;&lt;font size=&quot;5&quot;&gt;%1&lt;/font&gt;&lt;br/&gt;&lt;b&gt;версия %2&lt;/b&gt;&lt;br/&gt;В составе KDE %3&lt;/html&gt;</translation>
    </message>
    <message>
        <source>%1 %2, %3</source>
        <translation type="vanished">%1 %2, %3</translation>
    </message>
    <message>
        <source>Other Contributors:</source>
        <translation type="vanished">Другие участники:</translation>
    </message>
    <message>
        <source>(No logo available)</source>
        <translation type="vanished">(Логотип отсутствует)</translation>
    </message>
    <message>
        <source>About %1</source>
        <translation type="vanished">О программе %1</translation>
    </message>
    <message>
        <source>Undo: %1</source>
        <translation type="vanished">Отменить: %1</translation>
    </message>
    <message>
        <source>Redo: %1</source>
        <translation type="vanished">Повторить: %1</translation>
    </message>
    <message>
        <source>&amp;Undo</source>
        <translation type="vanished">О&amp;тменить действие</translation>
    </message>
    <message>
        <source>&amp;Redo</source>
        <translation type="vanished">&amp;Повторить отменённое действие</translation>
    </message>
    <message>
        <source>&amp;Undo: %1</source>
        <translation type="vanished">&amp;Отменить: %1</translation>
    </message>
    <message>
        <source>&amp;Redo: %1</source>
        <translation type="vanished">&amp;Повторить: %1</translation>
    </message>
    <message>
        <source>Close</source>
        <translation type="vanished">Закрыть</translation>
    </message>
    <message>
        <source>Freeze</source>
        <comment>Freeze the window geometry</comment>
        <translation type="vanished">Зафиксировать</translation>
    </message>
    <message>
        <source>Dock</source>
        <comment>Dock this window</comment>
        <translation type="vanished">Встроить</translation>
    </message>
    <message>
        <source>Detach</source>
        <translation type="vanished">Отделить</translation>
    </message>
    <message>
        <source>Hide %1</source>
        <translation type="vanished">Скрыть %1</translation>
    </message>
    <message>
        <source>Show %1</source>
        <translation type="vanished">Показать %1</translation>
    </message>
    <message>
        <source>Search Columns</source>
        <translation type="vanished">Столбцы для поиска</translation>
    </message>
    <message>
        <source>All Visible Columns</source>
        <translation type="vanished">Все показанные столбцы</translation>
    </message>
    <message>
        <source>Column No. %1</source>
        <comment>Column number %1</comment>
        <translation type="vanished">Столбец № %1</translation>
    </message>
    <message>
        <source>S&amp;earch:</source>
        <translation type="vanished">&amp;Поиск:</translation>
    </message>
    <message>
        <source>&amp;Password:</source>
        <translation type="vanished">&amp;Пароль:</translation>
    </message>
    <message>
        <source>&amp;Keep password</source>
        <translation type="vanished">Сохранить паро&amp;ль</translation>
    </message>
    <message>
        <source>&amp;Verify:</source>
        <translation type="vanished">&amp;Проверка:</translation>
    </message>
    <message>
        <source>Password strength meter:</source>
        <translation type="vanished">Датчик надёжности пароля:</translation>
    </message>
    <message>
        <source>The password strength meter gives an indication of the security of the password you have entered.  To improve the strength of the password, try:
 - using a longer password;
 - using a mixture of upper- and lower-case letters;
 - using numbers or symbols, such as #, as well as letters.</source>
        <translation type="vanished">Датчик показывает защищённость или надёжность введённого пароля. Пароль будет более надёжным, если:
 - он имеет достаточную длину;
 - в него входят как прописные, так и строчные буквы;
 - в него входят помимо букв числа и специальные символы, такие как #.</translation>
    </message>
    <message>
        <source>Passwords do not match</source>
        <translation type="vanished">Пароли не совпадают</translation>
    </message>
    <message>
        <source>You entered two different passwords. Please try again.</source>
        <translation type="vanished">Введённые пароли не совпадают. Попробуйте ещё раз.</translation>
    </message>
    <message>
        <source>The password you have entered has a low strength. To improve the strength of the password, try:
 - using a longer password;
 - using a mixture of upper- and lower-case letters;
 - using numbers or symbols as well as letters.

Would you like to use this password anyway?</source>
        <translation type="vanished">Введён слабый пароль. Пароль будет более надёжным, если:
 - он имеет достаточную длину;
 - в него входят как прописные, так и строчные буквы;
 - в него входят помимо букв числа и специальные символы.

Использовать введённый пароль?</translation>
    </message>
    <message>
        <source>Low Password Strength</source>
        <translation type="vanished">Слабый пароль</translation>
    </message>
    <message>
        <source>Password Input</source>
        <translation type="vanished">Ввод пароля</translation>
    </message>
    <message>
        <source>Password is empty</source>
        <translation type="vanished">Пустой пароль</translation>
    </message>
    <message numerus="yes">
        <source>Password must be at least 1 character long</source>
        <translation type="vanished">
            <numerusform>Пароль должен быть не короче %1 символа</numerusform>
            <numerusform>Пароль должен быть не короче %1 символов</numerusform>
            <numerusform>Пароль должен быть не короче %1 символов</numerusform>
        </translation>
        <extra-po-msgid_plural>Password must be at least %1 characters long</extra-po-msgid_plural>
    </message>
    <message>
        <source>Passwords match</source>
        <translation type="vanished">Пароли совпадают</translation>
    </message>
    <message>
        <source>Do Spellchecking</source>
        <comment>@option:check</comment>
        <translation type="vanished">Проверить орфографию</translation>
    </message>
    <message>
        <source>Create &amp;root/affix combinations not in dictionary</source>
        <comment>@option:check</comment>
        <translation type="vanished">Соз&amp;давать сочетания корней/аффиксов не в словаре</translation>
    </message>
    <message>
        <source>Consider run-together &amp;words as spelling errors</source>
        <comment>@option:check</comment>
        <translation type="vanished">С&amp;читать ошибкой написанные вместе слова</translation>
    </message>
    <message>
        <source>&amp;Dictionary:</source>
        <comment>@label:listbox</comment>
        <translation type="vanished">&amp;Словарь:</translation>
    </message>
    <message>
        <source>&amp;Encoding:</source>
        <comment>@label:listbox</comment>
        <translation type="vanished">&amp;Кодировка:</translation>
    </message>
    <message>
        <source>International &lt;application&gt;Ispell&lt;/application&gt;</source>
        <comment>@item:inlistbox Spell checker</comment>
        <translation type="vanished">Международный &lt;application&gt;Ispell&lt;/application&gt;</translation>
    </message>
    <message>
        <source>&lt;application&gt;Aspell&lt;/application&gt;</source>
        <comment>@item:inlistbox Spell checker</comment>
        <translation type="vanished">&lt;application&gt;Aspell&lt;/application&gt;</translation>
    </message>
    <message>
        <source>&lt;application&gt;Hspell&lt;/application&gt;</source>
        <comment>@item:inlistbox Spell checker</comment>
        <translation type="vanished">&lt;application&gt;Hspell&lt;/application&gt;</translation>
    </message>
    <message>
        <source>&lt;application&gt;Zemberek&lt;/application&gt;</source>
        <comment>@item:inlistbox Spell checker</comment>
        <translation type="vanished">&lt;application&gt;Zemberek&lt;/application&gt;</translation>
    </message>
    <message>
        <source>&lt;application&gt;Hunspell&lt;/application&gt;</source>
        <comment>@item:inlistbox Spell checker</comment>
        <translation type="vanished">&lt;application&gt;Hunspell&lt;/application&gt;</translation>
    </message>
    <message>
        <source>&amp;Client:</source>
        <comment>@label:listbox</comment>
        <translation type="vanished">&amp;Программа проверки:</translation>
    </message>
    <message>
        <source>Hebrew</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Иврит</translation>
    </message>
    <message>
        <source>Turkish</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Турецкий</translation>
    </message>
    <message>
        <source>English</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Английский</translation>
    </message>
    <message>
        <source>Spanish</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Испанский</translation>
    </message>
    <message>
        <source>Danish</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Датский</translation>
    </message>
    <message>
        <source>German</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Немецкий</translation>
    </message>
    <message>
        <source>German (new spelling)</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Немецкий (новая орфография)</translation>
    </message>
    <message>
        <source>Brazilian Portuguese</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Португальский (Бразилия)</translation>
    </message>
    <message>
        <source>Portuguese</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Португальский</translation>
    </message>
    <message>
        <source>Esperanto</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Эсперанто</translation>
    </message>
    <message>
        <source>Norwegian</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Норвежский</translation>
    </message>
    <message>
        <source>Polish</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Польский</translation>
    </message>
    <message>
        <source>Russian</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Русский</translation>
    </message>
    <message>
        <source>Slovenian</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Словенский</translation>
    </message>
    <message>
        <source>Slovak</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Словацкий</translation>
    </message>
    <message>
        <source>Czech</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Чешский</translation>
    </message>
    <message>
        <source>Swedish</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Шведский</translation>
    </message>
    <message>
        <source>Swiss German</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Швейцарский немецкий</translation>
    </message>
    <message>
        <source>Ukrainian</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Украинский</translation>
    </message>
    <message>
        <source>Lithuanian</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Литовский</translation>
    </message>
    <message>
        <source>French</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Французский</translation>
    </message>
    <message>
        <source>Belarusian</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Белорусский</translation>
    </message>
    <message>
        <source>Hungarian</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Венгерский</translation>
    </message>
    <message>
        <source>Unknown</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">Неизвестный</translation>
    </message>
    <message>
        <source>&lt;application&gt;ISpell&lt;/application&gt; Default</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">&lt;application&gt;ISpell&lt;/application&gt; по умолчанию</translation>
    </message>
    <message>
        <source>Default - %1 [%2]</source>
        <comment>@item Spelling dictionary: %1 dictionary name, %2 file name</comment>
        <translation type="vanished">По умолчанию: %1 [%2]</translation>
    </message>
    <message>
        <source>&lt;application&gt;ASpell&lt;/application&gt; Default</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">&lt;application&gt;ASpell&lt;/application&gt; по умолчанию</translation>
    </message>
    <message>
        <source>Default - %1</source>
        <comment>@item Spelling dictionary: %1 dictionary name</comment>
        <translation type="vanished">По умолчанию: %1</translation>
    </message>
    <message>
        <source>&lt;application&gt;Hunspell&lt;/application&gt; Default</source>
        <comment>@item Spelling dictionary</comment>
        <translation type="vanished">&lt;application&gt;Hunspell&lt;/application&gt; по умолчанию</translation>
    </message>
    <message>
        <source>You have to restart the dialog for changes to take effect</source>
        <translation type="vanished">Чтобы изменения вступили в силу, необходимо перезапустить диалог</translation>
    </message>
    <message>
        <source>Spell Checker</source>
        <translation type="vanished">Проверка орфографии</translation>
    </message>
    <message>
        <source>Check Spelling</source>
        <translation type="vanished">Проверить орфографию</translation>
    </message>
    <message>
        <source>&amp;Finished</source>
        <translation type="vanished">&amp;Готово</translation>
    </message>
    <message>
        <source>&lt;qt&gt;&lt;p&gt;This word was considered to be an &quot;unknown word&quot; because it does not match any entry in the dictionary currently in use. It may also be a word in a foreign language.&lt;/p&gt;
&lt;p&gt;If the word is not misspelled, you may add it to the dictionary by clicking &lt;b&gt;Add to Dictionary&lt;/b&gt;. If you do not want to add the unknown word to the dictionary, but you want to leave it unchanged, click &lt;b&gt;Ignore&lt;/b&gt; or &lt;b&gt;Ignore All&lt;/b&gt;.&lt;/p&gt;
&lt;p&gt;However, if the word is misspelled, you can try to find the correct replacement in the list below. If you cannot find a replacement there, you may type it in the text box below, and click &lt;b&gt;Replace&lt;/b&gt; or &lt;b&gt;Replace All&lt;/b&gt;.&lt;/p&gt;
&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;&lt;p&gt;Это слово отсутствует в текущем словаре. Возможно, это иностранное слово или неологизм.&lt;/p&gt;
&lt;p&gt;Если вы уверены, что слово не содержит ошибок, вы можете его &lt;b&gt;Добавить в словарь&lt;/b&gt;. Если вы не хотите это делать, просто нажмите &lt;b&gt;Игнорировать&lt;/b&gt; или &lt;b&gt;Игнорировать везде&lt;/b&gt;.&lt;/p&gt;
&lt;p&gt;Если слово содержит опечатку, выберите из списка подходящий вариант. Если такого не имеется, введите слово вручную и нажмите &lt;b&gt;Заменить&lt;/b&gt; или &lt;b&gt;Заменить все&lt;/b&gt;.&lt;/p&gt;
&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>Unknown word:</source>
        <translation type="vanished">Неизвестное слово:</translation>
    </message>
    <message>
        <source>Unknown word</source>
        <translation type="vanished">Неизвестное слово</translation>
    </message>
    <message>
        <source>&lt;b&gt;misspelled&lt;/b&gt;</source>
        <translation type="vanished">&lt;b&gt;ошибочно&lt;/b&gt;</translation>
    </message>
    <message>
        <source>&lt;qt&gt;
&lt;p&gt;Select the language of the document you are proofing here.&lt;/p&gt;
&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;
&lt;p&gt;Выберите язык проверяемого документа.&lt;/p&gt;
&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>&amp;Language:</source>
        <translation type="vanished">&amp;Язык:</translation>
    </message>
    <message>
        <source>Text excerpt showing the unknown word in its context.</source>
        <translation type="vanished">Отрывок текста со словом, содержащим ошибку.</translation>
    </message>
    <message>
        <source>&lt;qt&gt;
&lt;p&gt;Here you can see a text excerpt showing the unknown word in its context. If this information is not sufficient to choose the best replacement for the unknown word, you can click on the document you are proofing, read a larger part of the text and then return here to continue proofing.&lt;/p&gt;
&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;
&lt;p&gt;Здесь показывается контекст слова, содержащего ошибку. Если этого отрывка недостаточно, щёлкните на документе, прочитайте основной текст и вернитесь в диалог проверки орфографии.&lt;/p&gt;
&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>... the &lt;b&gt;misspelled&lt;/b&gt; word shown in context ...</source>
        <translation type="vanished">... &lt;b&gt;ошибочное&lt;/b&gt; слово показано в контексте ...</translation>
    </message>
    <message>
        <source>&lt;qt&gt;
&lt;p&gt;The unknown word was detected and considered unknown because it is not included in the dictionary.&lt;br&gt;
Click here if you consider the unknown word not to be misspelled, and you want to avoid wrongly detecting it again in the future. If you want to let it remain as is, but not add it to the dictionary, then click &lt;b&gt;Ignore&lt;/b&gt; or &lt;b&gt;Ignore All&lt;/b&gt; instead.&lt;/p&gt;
&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;
&lt;p&gt;Это слово отсутствует в текущем словаре. Возможно, это иностранное слово или неологизм.&lt;/p&gt;
&lt;p&gt;Если вы уверены, что слово не содержит ошибок, вы можете его &lt;b&gt;Добавить в словарь&lt;/b&gt;. Если вы не хотите это делать, просто нажмите &lt;b&gt;Игнорировать&lt;/b&gt; или &lt;b&gt;Игнорировать везде&lt;/b&gt;.&lt;/p&gt;
&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>&lt;&lt; Add to Dictionary</source>
        <translation type="vanished">&lt;&lt; Добавить в словарь</translation>
    </message>
    <message>
        <source>&lt;qt&gt;
&lt;p&gt;Click here to replace all occurrences of the unknown text with the text in the edit box above (to the left).&lt;/p&gt;
&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;
&lt;p&gt;Заменить это слово во всём документе.&lt;/p&gt;
&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>R&amp;eplace All</source>
        <translation type="vanished">Зам&amp;енить все</translation>
    </message>
    <message>
        <source>Suggestion List</source>
        <translation type="vanished">Предлагаемые варианты</translation>
    </message>
    <message>
        <source>&lt;qt&gt;
&lt;p&gt;If the unknown word is misspelled, you should check if the correction for it is available and if it is, click on it. If none of the words in this list is a good replacement you may type the correct word in the edit box above.&lt;/p&gt;
&lt;p&gt;To correct this word click &lt;b&gt;Replace&lt;/b&gt; if you want to correct only this occurrence or &lt;b&gt;Replace All&lt;/b&gt; if you want to correct all occurrences.&lt;/p&gt;
&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;
&lt;p&gt;Если слово содержит ошибку, проверьте наличие правильного варианта в предлагаемом списке. Если его там не будет, вы можете ввести правильный вариант вручную.&lt;/p&gt;
&lt;p&gt;Чтобы исправить это слово только в этом месте нажмите &lt;b&gt;Заменить&lt;/b&gt;, а чтобы исправить его во всём документе, воспользуйтесь &lt;b&gt;Заменить все&lt;/b&gt;.&lt;/p&gt;
&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>Suggested Words</source>
        <translation type="vanished">Предлагаемые слова</translation>
    </message>
    <message>
        <source>&lt;qt&gt;
&lt;p&gt;Click here to replace this occurrence of the unknown text with the text in the edit box above (to the left).&lt;/p&gt;
&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;
&lt;p&gt;Заменить слово в данном случае.&lt;/p&gt;
&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>&amp;Replace</source>
        <translation type="vanished">&amp;Заменить</translation>
    </message>
    <message>
        <source>&lt;qt&gt;
&lt;p&gt;If the unknown word is misspelled, you should type the correction for your misspelled word here or select it from the list below.&lt;/p&gt;
&lt;p&gt;You can then click &lt;b&gt;Replace&lt;/b&gt; if you want to correct only this occurrence of the word or &lt;b&gt;Replace All&lt;/b&gt; if you want to correct all occurrences.&lt;/p&gt;
&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;
&lt;p&gt;Введите здесь правильный вариант написания слова или выберите го из списка.&lt;/p&gt;
&lt;p&gt;Затем нажмите &lt;b&gt;Заменить&lt;/b&gt; либо &lt;b&gt;Заменить все&lt;/b&gt;.&lt;/p&gt;
&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>Replace &amp;with:</source>
        <translation type="vanished">Заменить &amp;на:</translation>
    </message>
    <message>
        <source>&lt;qt&gt;
&lt;p&gt;Click here to let this occurrence of the unknown word remain as is.&lt;/p&gt;
&lt;p&gt;This action is useful when the word is a name, an acronym, a foreign word or any other unknown word that you want to use but not add to the dictionary.&lt;/p&gt;
&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;
&lt;p&gt;Не проверять это слово.&lt;/p&gt;
&lt;p&gt;Это может быть полезно, если слово является именем, сокращением, иностранным словом или любым другим словом, которое вы хотите использовать, но не хотите добавлять в словарь.&lt;/p&gt;
&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>&amp;Ignore</source>
        <translation type="vanished">&amp;Игнорировать</translation>
    </message>
    <message>
        <source>&lt;qt&gt;
&lt;p&gt;Click here to let all occurrences of the unknown word remain as they are.&lt;/p&gt;
&lt;p&gt;This action is useful when the word is a name, an acronym, a foreign word or any other unknown word that you want to use but not add to the dictionary.&lt;/p&gt;
&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;
&lt;p&gt;Не проверять все вхождения этого слова в тексте.&lt;/p&gt;
&lt;p&gt;Это может быть полезно, если слово является именем, сокращением, иностранным словом или любым другим словом, которое вы хотите использовать, но не хотите добавлять в словарь.&lt;/p&gt;
&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>I&amp;gnore All</source>
        <translation type="vanished">Игнорировать вез&amp;де</translation>
    </message>
    <message>
        <source>S&amp;uggest</source>
        <translation type="vanished">В&amp;ариант</translation>
    </message>
    <message>
        <source>Language Selection</source>
        <translation type="vanished">Выбор языка</translation>
    </message>
    <message>
        <source>As-you-type spell checking enabled.</source>
        <translation type="vanished">Проверка орфографии на лету включена.</translation>
    </message>
    <message>
        <source>As-you-type spell checking disabled.</source>
        <translation type="vanished">Проверка орфографии на лету выключена.</translation>
    </message>
    <message>
        <source>Incremental Spellcheck</source>
        <translation type="vanished">Проверка орфографии на лету</translation>
    </message>
    <message>
        <source>Too many misspelled words. As-you-type spell checking disabled.</source>
        <translation type="vanished">Слишком много ошибочных слов. Проверка орфографии на лету выключена.</translation>
    </message>
    <message>
        <source>Check Spelling...</source>
        <translation type="vanished">Проверить орфографию...</translation>
    </message>
    <message>
        <source>Auto Spell Check</source>
        <translation type="vanished">Автоматическая проверка орфографии</translation>
    </message>
    <message>
        <source>Allow Tabulations</source>
        <translation type="vanished">Разрешить табуляцию</translation>
    </message>
    <message>
        <source>Spell Checking</source>
        <translation type="vanished">Проверка орфографии</translation>
    </message>
    <message>
        <source>&amp;Back</source>
        <translation type="vanished">&amp;Назад</translation>
    </message>
    <message>
        <source>&amp;Next</source>
        <comment>Opposite to Back</comment>
        <translation type="vanished">&amp;Вперёд</translation>
    </message>
    <message>
        <source>Unknown View</source>
        <translation type="vanished">Неизвестный вид</translation>
    </message>
    <message>
        <source>A command-line application that can be used to run KUnitTest modules.</source>
        <translation type="vanished">Утилита командной строки для запуска модулей KUnitTest.</translation>
    </message>
    <message>
        <source>Only run modules whose filenames match the regexp.</source>
        <translation type="vanished">Запустить только модули, совпадающие с регулярным выражением.</translation>
    </message>
    <message>
        <source>Only run tests modules which are found in the folder. Use the query option to select modules.</source>
        <translation type="vanished">Запустить модули тестов из папки. Измените параметры запроса для выбора модулей.</translation>
    </message>
    <message>
        <source>Disables debug capturing. You typically use this option when you use the GUI.</source>
        <translation type="vanished">Отключить отладку захвата. Обычно применяется при использовании графического интерфейса.</translation>
    </message>
    <message>
        <source>KUnitTest ModRunner</source>
        <translation type="vanished">KUnitTest ModRunner</translation>
    </message>
    <message>
        <source>(C) 2005 Jeroen Wijnhout</source>
        <translation type="vanished">© Jeroen Wijnhout, 2005</translation>
    </message>
    <message>
        <source>DBus Backend error: received corrupt data from helper %1 %2</source>
        <translatorcomment>BUGME: absolutely no information on what &quot;%1&quot; is</translatorcomment>
        <translation type="vanished">Внутренняя ошибка DBus: получены повреждённые данные от обработчика. %1 %2</translation>
    </message>
    <message>
        <source>Please contact your system administrator.</source>
        <translation type="vanished">Свяжитесь с вашим системным администратором.</translation>
    </message>
    <message>
        <source>Configuration file &quot;%1&quot; not writable.
</source>
        <translation type="vanished">Файл конфигурации «%1» защищён от записи.
</translation>
    </message>
    <message>
        <source>am</source>
        <translation type="vanished">am</translation>
    </message>
    <message>
        <source>pm</source>
        <translation type="vanished">pm</translation>
    </message>
    <message>
        <source>No target filename has been given.</source>
        <translation type="vanished">Не указан целевой файл.</translation>
    </message>
    <message>
        <source>Already opened.</source>
        <translation type="vanished">Файл уже открыт.</translation>
    </message>
    <message>
        <source>Insufficient permissions in target directory.</source>
        <translation type="vanished">Недостаточно прав для записи в целевую папку.</translation>
    </message>
    <message>
        <source>Unable to open temporary file. Error was: %1.</source>
        <translation type="vanished">Не удалось открыть временный файл. Произошла ошибка: %1</translation>
    </message>
    <message>
        <source>Synchronization to disk failed</source>
        <translation type="vanished">Ошибка синхронизации с диском</translation>
    </message>
    <message>
        <source>Error during rename.</source>
        <translation type="vanished">Ошибка при попытке переименования.</translation>
    </message>
    <message>
        <source>kde4-config</source>
        <translation type="vanished">kde4-config</translation>
    </message>
    <message>
        <source>A little program to output installation paths</source>
        <translation type="vanished">Программа, выводящая пути каталогов KDE</translation>
    </message>
    <message>
        <source>(C) 2000 Stephan Kulow</source>
        <translation type="vanished">© Stephan Kulow, 2000</translation>
    </message>
    <message>
        <source>Left for legacy support</source>
        <translation type="vanished">Зарезервировано для устаревших приложений</translation>
    </message>
    <message>
        <source>Compiled in prefix for KDE libraries</source>
        <translation type="vanished">Встроенный prefix для библиотек KDE</translation>
    </message>
    <message>
        <source>Compiled in exec_prefix for KDE libraries</source>
        <translation type="vanished">Встроенный exec_prefix для библиотек KDE</translation>
    </message>
    <message>
        <source>Compiled in library path suffix</source>
        <translation type="vanished">Встроенный путь к библиотекам</translation>
    </message>
    <message>
        <source>Prefix in $HOME used to write files</source>
        <translation type="vanished">Путь в $HOME для записи файлов</translation>
    </message>
    <message>
        <source>Compiled in version string for KDE libraries</source>
        <translation type="vanished">Встроенная строка - версия библиотек KDE</translation>
    </message>
    <message>
        <source>Available KDE resource types</source>
        <translation type="vanished">Доступные типы ресурсов KDE</translation>
    </message>
    <message>
        <source>Search path for resource type</source>
        <translation type="vanished">Путь поиска типов ресурсов</translation>
    </message>
    <message>
        <source>Find filename inside the resource type given to --path</source>
        <translation type="vanished">Поиск имени файла для типа ресурса, указанного в --path</translation>
    </message>
    <message>
        <source>User path: desktop|autostart|document</source>
        <translation type="vanished">Пользовательский путь: desktop|autostart|document</translation>
    </message>
    <message>
        <source>Prefix to install resource files to</source>
        <translation type="vanished">Путь для установки файлов ресурсов</translation>
    </message>
    <message>
        <source>Installation prefix for Qt</source>
        <translation type="vanished">Путь к установленной библиотеке Qt</translation>
    </message>
    <message>
        <source>Location of installed Qt binaries</source>
        <translation type="vanished">Расположение установленных бинарных файлов Qt</translation>
    </message>
    <message>
        <source>Location of installed Qt libraries</source>
        <translation type="vanished">Расположение установленных библиотек Qt</translation>
    </message>
    <message>
        <source>Location of installed Qt plugins</source>
        <translation type="vanished">Расположение установленных расширений Qt</translation>
    </message>
    <message>
        <source>Applications menu (.desktop files)</source>
        <translation type="vanished">Меню приложений (файлы .desktop)</translation>
    </message>
    <message>
        <source>Autostart directories</source>
        <translation type="vanished">Папки автозапуска</translation>
    </message>
    <message>
        <source>Cached information (e.g. favicons, web-pages)</source>
        <translation type="vanished">Кэшированная информация (например, значки сайтов, веб-страницы)</translation>
    </message>
    <message>
        <source>CGIs to run from kdehelp</source>
        <translation type="vanished">CGI, вызываемые из kdehelp</translation>
    </message>
    <message>
        <source>Configuration files</source>
        <translation type="vanished">Конфигурационные файле</translation>
    </message>
    <message>
        <source>Where applications store data</source>
        <translation type="vanished">Хранилище данных приложений</translation>
    </message>
    <message>
        <source>Emoticons</source>
        <translation type="vanished">Смайлики</translation>
    </message>
    <message>
        <source>Executables in $prefix/bin</source>
        <translation type="vanished">Исполняемые файлы из $prefix/bin</translation>
    </message>
    <message>
        <source>HTML documentation</source>
        <translation type="vanished">Документация HTML</translation>
    </message>
    <message>
        <source>Icons</source>
        <translation type="vanished">Значки</translation>
    </message>
    <message>
        <source>Configuration description files</source>
        <translation type="vanished">Файлы описания конфигурации</translation>
    </message>
    <message>
        <source>Libraries</source>
        <translation type="vanished">Библиотеки</translation>
    </message>
    <message>
        <source>Includes/Headers</source>
        <translation type="vanished">Заголовки</translation>
    </message>
    <message>
        <source>Translation files for KLocale</source>
        <translation type="vanished">Файлы перевода для KLocale</translation>
    </message>
    <message>
        <source>Mime types</source>
        <translation type="vanished">Типы MIME</translation>
    </message>
    <message>
        <source>Loadable modules</source>
        <translation type="vanished">Загружаемые расширения</translation>
    </message>
    <message>
        <source>Legacy pixmaps</source>
        <translation type="vanished">Устаревшие значки</translation>
    </message>
    <message>
        <source>Qt plugins</source>
        <translation type="vanished">Расширения Qt</translation>
    </message>
    <message>
        <source>Services</source>
        <translation type="vanished">Службы</translation>
    </message>
    <message>
        <source>Service types</source>
        <translation type="vanished">Типы служб</translation>
    </message>
    <message>
        <source>Application sounds</source>
        <translation type="vanished">Звуковые файлы приложений</translation>
    </message>
    <message>
        <source>Templates</source>
        <translation type="vanished">Шаблоны</translation>
    </message>
    <message>
        <source>Wallpapers</source>
        <translation type="vanished">Обои</translation>
    </message>
    <message>
        <source>XDG Application menu (.desktop files)</source>
        <translation type="vanished">Меню приложений XDG (файлы .desktop)</translation>
    </message>
    <message>
        <source>XDG Menu descriptions (.directory files)</source>
        <translation type="vanished">Описание меню XDG (файлы .directory)</translation>
    </message>
    <message>
        <source>XDG Icons</source>
        <translation type="vanished">Значки XDG</translation>
    </message>
    <message>
        <source>XDG Mime Types</source>
        <translation type="vanished">Типы MIME XDG</translation>
    </message>
    <message>
        <source>XDG Menu layout (.menu files)</source>
        <translation type="vanished">Меню XDG (файлы .menu)</translation>
    </message>
    <message>
        <source>XDG autostart directory</source>
        <translation type="vanished">Папки автозапуска XDG</translation>
    </message>
    <message>
        <source>Temporary files (specific for both current host and current user)</source>
        <translation type="vanished">Временные файлы (для конкретного компьютера и текущего пользователя)</translation>
    </message>
    <message>
        <source>UNIX Sockets (specific for both current host and current user)</source>
        <translation type="vanished">Сокеты UNIX (для конкретного компьютера и текущего пользователя)</translation>
    </message>
    <message>
        <source>%1 - unknown type
</source>
        <translation type="vanished">%1 - неизвестный тип
</translation>
    </message>
    <message>
        <source>%1 - unknown type of userpath
</source>
        <translation type="vanished">%1 - неизвестный тип или путь
</translation>
    </message>
    <message>
        <source>No licensing terms for this program have been specified.
Please check the documentation or the source for any
licensing terms.
</source>
        <translation type="vanished">Лицензия в данной программе не указана.
Возможно, она указана в документации или в исходных текстах этой программы.
</translation>
    </message>
    <message>
        <source>This program is distributed under the terms of the %1.</source>
        <translation type="vanished">Программа распространяется на условиях %1.</translation>
    </message>
    <message>
        <source>GPL v2</source>
        <comment>@item license (short name)</comment>
        <translation type="vanished">GPL v2</translation>
    </message>
    <message>
        <source>GNU General Public License Version 2</source>
        <comment>@item license</comment>
        <translation type="vanished">GNU General Public License, версия 2</translation>
    </message>
    <message>
        <source>LGPL v2</source>
        <comment>@item license (short name)</comment>
        <translation type="vanished">LGPL v2</translation>
    </message>
    <message>
        <source>GNU Lesser General Public License Version 2</source>
        <comment>@item license</comment>
        <translation type="vanished">GNU Lesser General Public License, версия 2</translation>
    </message>
    <message>
        <source>BSD License</source>
        <comment>@item license (short name)</comment>
        <translation type="vanished">Лицензия BSD</translation>
    </message>
    <message>
        <source>BSD License</source>
        <comment>@item license</comment>
        <translation type="vanished">Лицензия BSD</translation>
    </message>
    <message>
        <source>Artistic License</source>
        <comment>@item license (short name)</comment>
        <translation type="vanished">Artistic License</translation>
    </message>
    <message>
        <source>Artistic License</source>
        <comment>@item license</comment>
        <translation type="vanished">Artistic License</translation>
    </message>
    <message>
        <source>QPL v1.0</source>
        <comment>@item license (short name)</comment>
        <translation type="vanished">QPL v1.0</translation>
    </message>
    <message>
        <source>Q Public License</source>
        <comment>@item license</comment>
        <translation type="vanished">Q Public License</translation>
    </message>
    <message>
        <source>GPL v3</source>
        <comment>@item license (short name)</comment>
        <translation type="vanished">GPL v3</translation>
    </message>
    <message>
        <source>GNU General Public License Version 3</source>
        <comment>@item license</comment>
        <translation type="vanished">GNU General Public License, версия 3</translation>
    </message>
    <message>
        <source>LGPL v3</source>
        <comment>@item license (short name)</comment>
        <translation type="vanished">LGPL v3</translation>
    </message>
    <message>
        <source>GNU Lesser General Public License Version 3</source>
        <comment>@item license</comment>
        <translation type="vanished">GNU Lesser General Public License, версия 3</translation>
    </message>
    <message>
        <source>Custom</source>
        <comment>@item license</comment>
        <translation type="vanished">Другая лицензия</translation>
    </message>
    <message>
        <source>Not specified</source>
        <comment>@item license</comment>
        <translation type="vanished">Лицензия не указана</translation>
    </message>
    <message>
        <source>Use the X-server display &apos;displayname&apos;</source>
        <translation type="vanished">Использовать дисплей X-сервера «displayname»</translation>
    </message>
    <message>
        <source>Use the QWS display &apos;displayname&apos;</source>
        <translation type="vanished">Использовать QWS дисплей «displayname»</translation>
    </message>
    <message>
        <source>Restore the application for the given &apos;sessionId&apos;</source>
        <translation type="vanished">Восстановить сеанс приложения по ключу «sessionId»</translation>
    </message>
    <message>
        <source>Causes the application to install a private color
map on an 8-bit display</source>
        <translation type="vanished">В случае 8-битного дисплея приложение
будет использовать собственную таблицу
цветов</translation>
    </message>
    <message>
        <source>Limits the number of colors allocated in the color
cube on an 8-bit display, if the application is
using the QApplication::ManyColor color
specification</source>
        <translation type="vanished">Ограничить количество используемых 
цветов на 8-битном дисплее. Этот параметр 
работает только для приложений, 
использующих режим
QApplication::ManyColor.</translation>
    </message>
    <message>
        <source>tells Qt to never grab the mouse or the keyboard</source>
        <translation type="vanished">Запрещает Qt перехватывать мышь или клавиатуру</translation>
    </message>
    <message>
        <source>running under a debugger can cause an implicit
-nograb, use -dograb to override</source>
        <translation type="vanished">при запуске в отладчике применять
-nograb. Используйте -dograb, чтобы явно включить этот режим</translation>
    </message>
    <message>
        <source>switches to synchronous mode for debugging</source>
        <translation type="vanished">включает синхронный режим для отладки</translation>
    </message>
    <message>
        <source>defines the application font</source>
        <translation type="vanished">определяет шрифт приложения</translation>
    </message>
    <message>
        <source>sets the default background color and an
application palette (light and dark shades are
calculated)</source>
        <translation type="vanished">задаёт цвет фона по умолчанию и палитру
приложения (светлые и тёмные тени
вычисляются).</translation>
    </message>
    <message>
        <source>sets the default foreground color</source>
        <translation type="vanished">определяет цвет текста по умолчанию</translation>
    </message>
    <message>
        <source>sets the default button color</source>
        <translation type="vanished">определяет цвет кнопок по умолчанию</translation>
    </message>
    <message>
        <source>sets the application name</source>
        <translation type="vanished">определяет имя приложения</translation>
    </message>
    <message>
        <source>sets the application title (caption)</source>
        <translation type="vanished">устанавливает заголовок приложения</translation>
    </message>
    <message>
        <source>load the testability framework</source>
        <translation type="vanished">загрузить тестовое окружение</translation>
    </message>
    <message>
        <source>forces the application to use a TrueColor visual on
an 8-bit display</source>
        <translation type="vanished">Приложение будет работать с 8-битным
дисплеем как с полноцветным устройством.</translation>
    </message>
    <message>
        <source>sets XIM (X Input Method) input style. Possible
values are onthespot, overthespot, offthespot and
root</source>
        <translation type="vanished">Устанавливает тип ввода XIM (X Input Method).
Возможные значения: onthespot, overthespot, offthespot и 
root.</translation>
    </message>
    <message>
        <source>set XIM server</source>
        <translation type="vanished">устанавливает сервер XIM</translation>
    </message>
    <message>
        <source>disable XIM</source>
        <translation type="vanished">запретить XIM</translation>
    </message>
    <message>
        <source>forces the application to run as QWS Server</source>
        <translation type="vanished">Заставляет приложение работать как QWS сервер</translation>
    </message>
    <message>
        <source>mirrors the whole layout of widgets</source>
        <translation type="vanished">отразить расположение виджетов</translation>
    </message>
    <message>
        <source>applies the Qt stylesheet to the application widgets</source>
        <translation type="vanished">применяет стиль Qt к графическим элементам приложения</translation>
    </message>
    <message>
        <source>use a different graphics system instead of the default one, options are raster and opengl (experimental)</source>
        <translation type="vanished">использовать указанную графическую подсистему для эффектов: raster или opengl</translation>
    </message>
    <message>
        <source>QML JS debugger information. Application must be
built with -DQT_DECLARATIVE_DEBUG for the debugger to be
enabled</source>
        <translation type="vanished">Отладочная информация QML JS. Для включения
отладчика приложение должно быть собрано с ключом
-DQT_DECLARATIVE_DEBUG</translation>
    </message>
    <message>
        <source>Use &apos;caption&apos; as name in the titlebar</source>
        <translation type="vanished">Использовать имя «caption» в заголовке</translation>
    </message>
    <message>
        <source>Use &apos;icon&apos; as the application icon</source>
        <translation type="vanished">Использовать «icon» как значок приложения</translation>
    </message>
    <message>
        <source>Use alternative configuration file</source>
        <translation type="vanished">Использовать альтернативный файл конфигурации</translation>
    </message>
    <message>
        <source>Disable crash handler, to get core dumps</source>
        <translation type="vanished">Отключить обработчик сбоев. Это позволит в случае сбоя получить core dump.</translation>
    </message>
    <message>
        <source>Waits for a WM_NET compatible windowmanager</source>
        <translation type="vanished">Ожидать инициализации WM_NET-совместимого оконного менеджера</translation>
    </message>
    <message>
        <source>sets the application GUI style</source>
        <translation type="vanished">устанавливает стиль графического интерфейса приложения</translation>
    </message>
    <message>
        <source>sets the client geometry of the main widget - see man X for the argument format (usually WidthxHeight+XPos+YPos)</source>
        <translation type="vanished">устанавливает положение и размер главного окна приложения - формат аргумента см. в man X (обычно это ШИРИНА×ВЫСОТА+X+Y)</translation>
    </message>
    <message>
        <source>KDE Application</source>
        <translation type="vanished">Приложение KDE</translation>
    </message>
    <message>
        <source>Qt</source>
        <translation type="vanished">Qt</translation>
    </message>
    <message>
        <source>KDE</source>
        <translation type="vanished">KDE</translation>
    </message>
    <message>
        <source>Unknown option &apos;%1&apos;.</source>
        <translation type="vanished">Неизвестный параметр %1.</translation>
    </message>
    <message>
        <source>&apos;%1&apos; missing.</source>
        <comment>@info:shell %1 is cmdoption name</comment>
        <translation type="vanished">Отсутствует %1.</translation>
    </message>
    <message>
        <source>Qt: %1
KDE Development Platform: %2
%3: %4
</source>
        <comment>@info:shell message on appcmd --version; do not translate &apos;Development Platform&apos;%3 application name, other %n version strings</comment>
        <translation type="vanished">Qt: %1
KDE: %2
%3: %4
</translation>
    </message>
    <message>
        <source>%1 was written by
%2</source>
        <comment>the 2nd argument is a list of name+address, one on each line</comment>
        <translation type="vanished">%1 написали:
%2</translation>
    </message>
    <message>
        <source>This application was written by somebody who wants to remain anonymous.</source>
        <translation type="vanished">Автор программы пожелал остаться неизвестным.</translation>
    </message>
    <message>
        <source>Please use http://bugs.kde.org to report bugs.
</source>
        <translation type="vanished">Используйте http://bugs.kde.org для сообщений об ошибках.
</translation>
    </message>
    <message>
        <source>Please report bugs to %1.
</source>
        <translation type="vanished">Используйте %1 для сообщений об ошибках.
</translation>
    </message>
    <message>
        <source>Unexpected argument &apos;%1&apos;.</source>
        <translation type="vanished">Недопустимый аргумент %1.</translation>
    </message>
    <message>
        <source>Use --help to get a list of available command line options.</source>
        <translation type="vanished">Используйте --help для вывода списка доступных параметров.</translation>
    </message>
    <message>
        <source>[options] </source>
        <translation type="vanished">[параметры] </translation>
    </message>
    <message>
        <source>[%1-options]</source>
        <translation type="vanished">[параметры %1]</translation>
    </message>
    <message>
        <source>Usage: %1 %2
</source>
        <translation type="vanished">Использование: %1 %2
</translation>
    </message>
    <message>
        <source>
Generic options:
</source>
        <translation type="vanished">
Общие параметры:
</translation>
    </message>
    <message>
        <source>Show help about options</source>
        <translation type="vanished">Показать справку о параметрах</translation>
    </message>
    <message>
        <source>Show %1 specific options</source>
        <translation type="vanished">Показать специфические параметры %1</translation>
    </message>
    <message>
        <source>Show all options</source>
        <translation type="vanished">Показать список всех параметров</translation>
    </message>
    <message>
        <source>Show author information</source>
        <translation type="vanished">Показать сведения об авторе</translation>
    </message>
    <message>
        <source>Show version information</source>
        <translation type="vanished">Показать сведения о версии</translation>
    </message>
    <message>
        <source>Show license information</source>
        <translation type="vanished">Показать сведения о лицензии</translation>
    </message>
    <message>
        <source>End of options</source>
        <translation type="vanished">Конец параметров</translation>
    </message>
    <message>
        <source>
%1 options:
</source>
        <translation type="vanished">
Параметры %1:
</translation>
    </message>
    <message>
        <source>
Options:
</source>
        <translation type="vanished">
Параметры:
</translation>
    </message>
    <message>
        <source>
Arguments:
</source>
        <translation type="vanished">
Аргументы:
</translation>
    </message>
    <message>
        <source>The files/URLs opened by the application will be deleted after use</source>
        <translation type="vanished">Файлы или ссылки, открытые приложением, будут удалены после использования</translation>
    </message>
    <message>
        <source>KDE-tempfile</source>
        <translation type="vanished">KDE-tempfile</translation>
    </message>
    <message>
        <source>Function must be called from the main thread.</source>
        <translation type="vanished">Функция должна быть вызвана из основного потока процесса.</translation>
    </message>
    <message>
        <source>Error launching %1. Either KLauncher is not running anymore, or it failed to start the application.</source>
        <translation type="vanished">Не удалось запустить «%1». KLauncher либо не запущен, либо не смог запустить приложение.</translation>
    </message>
    <message>
        <source>KLauncher could not be reached via D-Bus. Error when calling %1:
%2
</source>
        <translation type="vanished">KLauncher недоступен через D-Bus, ошибка вызова %1:
%2
</translation>
    </message>
    <message>
        <source>Could not launch the KDE Help Center:

%1</source>
        <translation type="vanished">Не удалось запустить Центр справки KDE:

%1</translation>
    </message>
    <message>
        <source>Could not Launch Help Center</source>
        <translation type="vanished">Не удалось запустить Центр справки KDE</translation>
    </message>
    <message>
        <source>Could not launch the mail client:

%1</source>
        <translation type="vanished">Не удалось запустить почтовый клиент:

%1</translation>
    </message>
    <message>
        <source>Could not launch Mail Client</source>
        <translation type="vanished">Не удалось запустить почтовый клиент</translation>
    </message>
    <message>
        <source>Could not launch the browser:

%1</source>
        <translation type="vanished">Не удалось запустить веб-браузер:

%1</translation>
    </message>
    <message>
        <source>Could not launch Browser</source>
        <translation type="vanished">Не удалось запустить веб-браузер</translation>
    </message>
    <message>
        <source>Could not launch the terminal client:

%1</source>
        <translation type="vanished">Не удалось запустить эмулятор терминала:

%1</translation>
    </message>
    <message>
        <source>Could not launch Terminal Client</source>
        <translation type="vanished">Не удалось запустить эмулятор терминала</translation>
    </message>
    <message>
        <source>Western European</source>
        <comment>@item Text character set</comment>
        <translation type="vanished">Западная Европа</translation>
    </message>
    <message>
        <source>Central European</source>
        <comment>@item Text character set</comment>
        <translation type="vanished">Центральная Европа</translation>
    </message>
    <message>
        <source>Baltic</source>
        <comment>@item Text character set</comment>
        <translation type="vanished">Прибалтийское письмо</translation>
    </message>
    <message>
        <source>South-Eastern Europe</source>
        <comment>@item Text character set</comment>
        <translation type="vanished">Юго-восточная Европа</translation>
    </message>
    <message>
        <source>Turkish</source>
        <comment>@item Text character set</comment>
        <translation type="vanished">Турецкое письмо</translation>
    </message>
    <message>
        <source>Cyrillic</source>
        <comment>@item Text character set</comment>
        <translation type="vanished">Кириллица</translation>
    </message>
    <message>
        <source>Chinese Traditional</source>
        <comment>@item Text character set</comment>
        <translatorcomment>Здесь речь идёт не о локали, а о наборе символов. В случае локали перевод &quot;Китайский (Тайвань)&quot;, т.к. локаль zh_TW.</translatorcomment>
        <translation type="vanished">Китайское письмо (традиционное)</translation>
    </message>
    <message>
        <source>Chinese Simplified</source>
        <comment>@item Text character set</comment>
        <translation type="vanished">Китайское письмо (упрощённое)</translation>
    </message>
    <message>
        <source>Korean</source>
        <comment>@item Text character set</comment>
        <translation type="vanished">Корейское письмо</translation>
    </message>
    <message>
        <source>Japanese</source>
        <comment>@item Text character set</comment>
        <translation type="vanished">Японское письмо</translation>
    </message>
    <message>
        <source>Greek</source>
        <comment>@item Text character set</comment>
        <translation type="vanished">Греческое письмо</translation>
    </message>
    <message>
        <source>Arabic</source>
        <comment>@item Text character set</comment>
        <translation type="vanished">Арабское письмо</translation>
    </message>
    <message>
        <source>Hebrew</source>
        <comment>@item Text character set</comment>
        <translation type="vanished">Иврит</translation>
    </message>
    <message>
        <source>Thai</source>
        <comment>@item Text character set</comment>
        <translation type="vanished">Тайское письмо</translation>
    </message>
    <message>
        <source>Unicode</source>
        <comment>@item Text character set</comment>
        <translation type="vanished">Юникод</translation>
    </message>
    <message>
        <source>Northern Saami</source>
        <comment>@item Text character set</comment>
        <translation type="vanished">Северносаамский</translation>
    </message>
    <message>
        <source>Other</source>
        <comment>@item Text character set</comment>
        <translation type="vanished">Другие</translation>
    </message>
    <message>
        <source>%1 ( %2 )</source>
        <comment>@item %1 character set, %2 encoding</comment>
        <translation type="vanished">%1 (%2)</translation>
    </message>
    <message>
        <source>Other encoding (%1)</source>
        <comment>@item</comment>
        <translation type="vanished">Другая кодировка (%1)</translation>
    </message>
    <message>
        <source>%1 ( %2 )</source>
        <comment>@item Text encoding: %1 character set, %2 encoding</comment>
        <translation type="vanished">%1 (%2)</translation>
    </message>
    <message>
        <source>Disabled</source>
        <comment>@item Text character set</comment>
        <translation type="vanished">Отключена</translation>
    </message>
    <message>
        <source>Universal</source>
        <comment>@item Text character set</comment>
        <translation type="vanished">Универсальная</translation>
    </message>
    <message>
        <source>Arabic-Indic</source>
        <comment>digit set</comment>
        <translation type="vanished">Арабские цифры, используемые в арабских странах</translation>
    </message>
    <message>
        <source>Bengali</source>
        <comment>digit set</comment>
        <translation type="vanished">Бенгальские цифры</translation>
    </message>
    <message>
        <source>Devanagari</source>
        <comment>digit set</comment>
        <translation type="vanished">Деванагари</translation>
    </message>
    <message>
        <source>Eastern Arabic-Indic</source>
        <comment>digit set</comment>
        <translation type="vanished">Персидские цифры</translation>
    </message>
    <message>
        <source>Gujarati</source>
        <comment>digit set</comment>
        <translation type="vanished">Цифры гуджарати</translation>
    </message>
    <message>
        <source>Gurmukhi</source>
        <comment>digit set</comment>
        <translation type="vanished">Цифры гурмукхи</translation>
    </message>
    <message>
        <source>Kannada</source>
        <comment>digit set</comment>
        <translation type="vanished">Цифры каннада</translation>
    </message>
    <message>
        <source>Khmer</source>
        <comment>digit set</comment>
        <translation type="vanished">Кхмерские цифры</translation>
    </message>
    <message>
        <source>Malayalam</source>
        <comment>digit set</comment>
        <translation type="vanished">Цифры малаялам</translation>
    </message>
    <message>
        <source>Oriya</source>
        <comment>digit set</comment>
        <translation type="vanished">Цифры ория</translation>
    </message>
    <message>
        <source>Tamil</source>
        <comment>digit set</comment>
        <translation type="vanished">Тамильские цифры</translation>
    </message>
    <message>
        <source>Telugu</source>
        <comment>digit set</comment>
        <translation type="vanished">Цифры телугу</translation>
    </message>
    <message>
        <source>Thai</source>
        <comment>digit set</comment>
        <translation type="vanished">Тайские цифры</translation>
    </message>
    <message>
        <source>Arabic</source>
        <comment>digit set</comment>
        <translation type="vanished">Арабские цифры</translation>
    </message>
    <message>
        <source>%1 (%2)</source>
        <comment>name of digit set with digit string, e.g. &apos;Arabic (0123456789)&apos;</comment>
        <translation type="vanished">%1 (%2)</translation>
    </message>
    <message>
        <source>%1 B</source>
        <comment>size in bytes</comment>
        <translation type="vanished">%1 Б</translation>
    </message>
    <message>
        <source>%1 kB</source>
        <comment>size in 1000 bytes</comment>
        <translation type="vanished">%1 КБ</translation>
    </message>
    <message>
        <source>%1 MB</source>
        <comment>size in 10^6 bytes</comment>
        <translation type="vanished">%1 МБ</translation>
    </message>
    <message>
        <source>%1 GB</source>
        <comment>size in 10^9 bytes</comment>
        <translation type="vanished">%1 ГБ</translation>
    </message>
    <message>
        <source>%1 TB</source>
        <comment>size in 10^12 bytes</comment>
        <translation type="vanished">%1 ТБ</translation>
    </message>
    <message>
        <source>%1 PB</source>
        <comment>size in 10^15 bytes</comment>
        <translation type="vanished">%1 ПБ</translation>
    </message>
    <message>
        <source>%1 EB</source>
        <comment>size in 10^18 bytes</comment>
        <translation type="vanished">%1 ЭБ</translation>
    </message>
    <message>
        <source>%1 ZB</source>
        <comment>size in 10^21 bytes</comment>
        <translation type="vanished">%1 ЗБ</translation>
    </message>
    <message>
        <source>%1 YB</source>
        <comment>size in 10^24 bytes</comment>
        <translation type="vanished">%1 ЙБ</translation>
    </message>
    <message>
        <source>%1 KB</source>
        <comment>memory size in 1024 bytes</comment>
        <translation type="vanished">%1 КБ</translation>
    </message>
    <message>
        <source>%1 MB</source>
        <comment>memory size in 2^20 bytes</comment>
        <translation type="vanished">%1 МБ</translation>
    </message>
    <message>
        <source>%1 GB</source>
        <comment>memory size in 2^30 bytes</comment>
        <translation type="vanished">%1 ГБ</translation>
    </message>
    <message>
        <source>%1 TB</source>
        <comment>memory size in 2^40 bytes</comment>
        <translation type="vanished">%1 ТБ</translation>
    </message>
    <message>
        <source>%1 PB</source>
        <comment>memory size in 2^50 bytes</comment>
        <translation type="vanished">%1 ПБ</translation>
    </message>
    <message>
        <source>%1 EB</source>
        <comment>memory size in 2^60 bytes</comment>
        <translation type="vanished">%1 ЭБ</translation>
    </message>
    <message>
        <source>%1 ZB</source>
        <comment>memory size in 2^70 bytes</comment>
        <translation type="vanished">%1 ЗБ</translation>
    </message>
    <message>
        <source>%1 YB</source>
        <comment>memory size in 2^80 bytes</comment>
        <translation type="vanished">%1 ЙБ</translation>
    </message>
    <message>
        <source>%1 KiB</source>
        <comment>size in 1024 bytes</comment>
        <translation type="vanished">%1 КиБ</translation>
    </message>
    <message>
        <source>%1 MiB</source>
        <comment>size in 2^20 bytes</comment>
        <translation type="vanished">%1 МиБ</translation>
    </message>
    <message>
        <source>%1 GiB</source>
        <comment>size in 2^30 bytes</comment>
        <translation type="vanished">%1 ГиБ</translation>
    </message>
    <message>
        <source>%1 TiB</source>
        <comment>size in 2^40 bytes</comment>
        <translation type="vanished">%1 ТиБ</translation>
    </message>
    <message>
        <source>%1 PiB</source>
        <comment>size in 2^50 bytes</comment>
        <translation type="vanished">%1 ПиБ</translation>
    </message>
    <message>
        <source>%1 EiB</source>
        <comment>size in 2^60 bytes</comment>
        <translation type="vanished">%1 ЭиБ</translation>
    </message>
    <message>
        <source>%1 ZiB</source>
        <comment>size in 2^70 bytes</comment>
        <translation type="vanished">%1 ЗиБ</translation>
    </message>
    <message>
        <source>%1 YiB</source>
        <comment>size in 2^80 bytes</comment>
        <translation type="vanished">%1 ЙиБ</translation>
    </message>
    <message>
        <source>%1 days</source>
        <comment>@item:intext %1 is a real number, e.g. 1.23 days</comment>
        <translation type="vanished">%1 дня</translation>
    </message>
    <message>
        <source>%1 hours</source>
        <comment>@item:intext %1 is a real number, e.g. 1.23 hours</comment>
        <translation type="vanished">%1 часа</translation>
    </message>
    <message>
        <source>%1 minutes</source>
        <comment>@item:intext %1 is a real number, e.g. 1.23 minutes</comment>
        <translation type="vanished">%1 минуты</translation>
    </message>
    <message>
        <source>%1 seconds</source>
        <comment>@item:intext %1 is a real number, e.g. 1.23 seconds</comment>
        <translation type="vanished">%1 секунды</translation>
    </message>
    <message numerus="yes">
        <source>%1 millisecond</source>
        <comment>@item:intext</comment>
        <translation type="vanished">
            <numerusform>%1 миллисекунда</numerusform>
            <numerusform>%1 миллисекунды</numerusform>
            <numerusform>%1 миллисекунд</numerusform>
        </translation>
        <extra-po-msgid_plural>%1 milliseconds</extra-po-msgid_plural>
    </message>
    <message numerus="yes">
        <source>1 day</source>
        <comment>@item:intext</comment>
        <translation type="vanished">
            <numerusform>%1 день</numerusform>
            <numerusform>%1 дня</numerusform>
            <numerusform>%1 дней</numerusform>
        </translation>
        <extra-po-msgid_plural>%1 days</extra-po-msgid_plural>
    </message>
    <message numerus="yes">
        <source>1 hour</source>
        <comment>@item:intext</comment>
        <translation type="vanished">
            <numerusform>%1 час</numerusform>
            <numerusform>%1 часа</numerusform>
            <numerusform>%1 часов</numerusform>
        </translation>
        <extra-po-msgid_plural>%1 hours</extra-po-msgid_plural>
    </message>
    <message numerus="yes">
        <source>1 minute</source>
        <comment>@item:intext</comment>
        <translation type="vanished">
            <numerusform>%1 минута</numerusform>
            <numerusform>%1 минуты</numerusform>
            <numerusform>%1 минут</numerusform>
        </translation>
        <extra-po-msgid_plural>%1 minutes</extra-po-msgid_plural>
    </message>
    <message numerus="yes">
        <source>1 second</source>
        <comment>@item:intext</comment>
        <translation type="vanished">
            <numerusform>%1 секунда</numerusform>
            <numerusform>%1 секунды</numerusform>
            <numerusform>%1 секунд</numerusform>
        </translation>
        <extra-po-msgid_plural>%1 seconds</extra-po-msgid_plural>
    </message>
    <message>
        <source>%1 and %2</source>
        <comment>@item:intext days and hours. This uses the previous item:intext messages. If this does not fit the grammar of your language please contact the i18n team to solve the problem</comment>
        <translation type="vanished">%1 %2</translation>
    </message>
    <message>
        <source>%1 and %2</source>
        <comment>@item:intext hours and minutes. This uses the previous item:intext messages. If this does not fit the grammar of your language please contact the i18n team to solve the problem</comment>
        <translation type="vanished">%1 %2</translation>
    </message>
    <message>
        <source>%1 and %2</source>
        <comment>@item:intext minutes and seconds. This uses the previous item:intext messages. If this does not fit the grammar of your language please contact the i18n team to solve the problem</comment>
        <translation type="vanished">%1 %2</translation>
    </message>
    <message>
        <source>Ante Meridiem</source>
        <comment>Before Noon KLocale::LongName</comment>
        <translation type="vanished">до полудня</translation>
    </message>
    <message>
        <source>AM</source>
        <comment>Before Noon KLocale::ShortName</comment>
        <translation type="vanished">AM</translation>
    </message>
    <message>
        <source>A</source>
        <comment>Before Noon KLocale::NarrowName</comment>
        <translation type="vanished">A</translation>
    </message>
    <message>
        <source>Post Meridiem</source>
        <comment>After Noon KLocale::LongName</comment>
        <translation type="vanished">после полудня</translation>
    </message>
    <message>
        <source>PM</source>
        <comment>After Noon KLocale::ShortName</comment>
        <translation type="vanished">PM</translation>
    </message>
    <message>
        <source>P</source>
        <comment>After Noon KLocale::NarrowName</comment>
        <translation type="vanished">P</translation>
    </message>
    <message>
        <source>Today</source>
        <translation type="vanished">Сегодня</translation>
    </message>
    <message>
        <source>Yesterday</source>
        <translation type="vanished">Вчера</translation>
    </message>
    <message>
        <source>%1 %2</source>
        <comment>concatenation of dates and time</comment>
        <translation type="vanished">%1 %2</translation>
    </message>
    <message>
        <source>%1 %2</source>
        <comment>concatenation of date/time and time zone</comment>
        <translation type="vanished">%1 %2</translation>
    </message>
    <message>
        <source>== %1 ==</source>
        <comment>@title/plain</comment>
        <translation type="vanished">== %1 ==</translation>
    </message>
    <message>
        <source>&lt;h2&gt;%1&lt;/h2&gt;</source>
        <comment>@title/rich</comment>
        <translation type="vanished">&lt;h2&gt;%1&lt;/h2&gt;</translation>
    </message>
    <message>
        <source>~ %1 ~</source>
        <comment>@subtitle/plain</comment>
        <translation type="vanished">~ %1 ~</translation>
    </message>
    <message>
        <source>&lt;h3&gt;%1&lt;/h3&gt;</source>
        <comment>@subtitle/rich</comment>
        <translation type="vanished">&lt;h3&gt;%1&lt;/h3&gt;</translation>
    </message>
    <message>
        <source>  * %1</source>
        <comment>@item/plain</comment>
        <translation type="vanished">  * %1</translation>
    </message>
    <message>
        <source>&lt;li&gt;%1&lt;/li&gt;</source>
        <comment>@item/rich</comment>
        <translation type="vanished">&lt;li&gt;%1&lt;/li&gt;</translation>
    </message>
    <message>
        <source>Note: %1</source>
        <comment>@note/plain</comment>
        <translation type="vanished">Примечание: %1</translation>
    </message>
    <message>
        <source>&lt;i&gt;Note&lt;/i&gt;: %1</source>
        <comment>@note/rich</comment>
        <translation type="vanished">&lt;i&gt;Примечание&lt;/i&gt;: %1</translation>
    </message>
    <message>
        <source>%1: %2</source>
        <comment>@note-with-label/plain
%1 is the note label, %2 is the text</comment>
        <translation type="vanished">%1: %2</translation>
    </message>
    <message>
        <source>&lt;i&gt;%1&lt;/i&gt;: %2</source>
        <comment>@note-with-label/rich
%1 is the note label, %2 is the text</comment>
        <translation type="vanished">&lt;i&gt;%1&lt;/i&gt;: %2</translation>
    </message>
    <message>
        <source>WARNING: %1</source>
        <comment>@warning/plain</comment>
        <translation type="vanished">Внимание: %1</translation>
    </message>
    <message>
        <source>&lt;b&gt;Warning&lt;/b&gt;: %1</source>
        <comment>@warning/rich</comment>
        <translation type="vanished">&lt;b&gt;Внимание&lt;/b&gt;: %1</translation>
    </message>
    <message>
        <source>%1: %2</source>
        <comment>@warning-with-label/plain
%1 is the warning label, %2 is the text</comment>
        <translation type="vanished">%1: %2</translation>
    </message>
    <message>
        <source>&lt;b&gt;%1&lt;/b&gt;: %2</source>
        <comment>@warning-with-label/rich
%1 is the warning label, %2 is the text</comment>
        <translation type="vanished">&lt;b&gt;%1&lt;/b&gt;: %2</translation>
    </message>
    <message>
        <source>%2 (%1)</source>
        <comment>@link-with-description/plain
%1 is the URL, %2 is the descriptive text</comment>
        <translation type="vanished">%2 (%1)</translation>
    </message>
    <message>
        <source>&lt;a href=&quot;%1&quot;&gt;%2&lt;/a&gt;</source>
        <comment>@link-with-description/rich
%1 is the URL, %2 is the descriptive text</comment>
        <translation type="vanished">&lt;a href=&quot;%1&quot;&gt;%2&lt;/a&gt;</translation>
    </message>
    <message>
        <source>‘%1’</source>
        <comment>@filename/plain</comment>
        <translation type="vanished">«%1»</translation>
    </message>
    <message>
        <source>&lt;tt&gt;%1&lt;/tt&gt;</source>
        <comment>@filename/rich</comment>
        <translation type="vanished">&lt;tt&gt;%1&lt;/tt&gt;</translation>
    </message>
    <message>
        <source>%1</source>
        <comment>@application/plain</comment>
        <translation type="vanished">%1</translation>
    </message>
    <message>
        <source>%1</source>
        <comment>@application/rich</comment>
        <translation type="vanished">%1</translation>
    </message>
    <message>
        <source>%1</source>
        <comment>@command/plain</comment>
        <translation type="vanished">%1</translation>
    </message>
    <message>
        <source>&lt;tt&gt;%1&lt;/tt&gt;</source>
        <comment>@command/rich</comment>
        <translation type="vanished">&lt;tt&gt;%1&lt;/tt&gt;</translation>
    </message>
    <message>
        <source>%1(%2)</source>
        <comment>@command-with-section/plain
%1 is the command name, %2 is its man section</comment>
        <translation type="vanished">%1(%2)</translation>
    </message>
    <message>
        <source>&lt;tt&gt;%1(%2)&lt;/tt&gt;</source>
        <comment>@command-with-section/rich
%1 is the command name, %2 is its man section</comment>
        <translation type="vanished">&lt;tt&gt;%1(%2)&lt;/tt&gt;</translation>
    </message>
    <message>
        <source>“%1”</source>
        <comment>@resource/plain</comment>
        <translation type="vanished">«%1»</translation>
    </message>
    <message>
        <source>“%1”</source>
        <comment>@resource/rich</comment>
        <translation type="vanished">«%1»</translation>
    </message>
    <message>
        <source>“%1”</source>
        <comment>@icode/plain</comment>
        <translation type="vanished">«%1»</translation>
    </message>
    <message>
        <source>&lt;tt&gt;%1&lt;/tt&gt;</source>
        <comment>@icode/rich</comment>
        <translation type="vanished">&lt;tt&gt;%1&lt;/tt&gt;</translation>
    </message>
    <message>
        <source>%1</source>
        <comment>@shortcut/plain</comment>
        <translation type="vanished">%1</translation>
    </message>
    <message>
        <source>&lt;b&gt;%1&lt;/b&gt;</source>
        <comment>@shortcut/rich</comment>
        <translation type="vanished">&lt;b&gt;%1&lt;/b&gt;</translation>
    </message>
    <message>
        <source>|%1|</source>
        <comment>@interface/plain</comment>
        <translation type="vanished">|%1|</translation>
    </message>
    <message>
        <source>&lt;i&gt;%1&lt;/i&gt;</source>
        <comment>@interface/rich</comment>
        <translation type="vanished">&lt;i&gt;%1&lt;/i&gt;</translation>
    </message>
    <message>
        <source>*%1*</source>
        <comment>@emphasis/plain</comment>
        <translation type="vanished">*%1*</translation>
    </message>
    <message>
        <source>&lt;i&gt;%1&lt;/i&gt;</source>
        <comment>@emphasis/rich</comment>
        <translation type="vanished">&lt;i&gt;%1&lt;/i&gt;</translation>
    </message>
    <message>
        <source>**%1**</source>
        <comment>@emphasis-strong/plain</comment>
        <translation type="vanished">**%1**</translation>
    </message>
    <message>
        <source>&lt;b&gt;%1&lt;/b&gt;</source>
        <comment>@emphasis-strong/rich</comment>
        <translation type="vanished">&lt;b&gt;%1&lt;/b&gt;</translation>
    </message>
    <message>
        <source>&amp;lt;%1&amp;gt;</source>
        <comment>@placeholder/plain</comment>
        <translation type="vanished">&amp;lt;%1&amp;gt;</translation>
    </message>
    <message>
        <source>&amp;lt;&lt;i&gt;%1&lt;/i&gt;&amp;gt;</source>
        <comment>@placeholder/rich</comment>
        <translation type="vanished">&amp;lt;&lt;i&gt;%1&lt;/i&gt;&amp;gt;</translation>
    </message>
    <message>
        <source>&amp;lt;%1&amp;gt;</source>
        <comment>@email/plain</comment>
        <translation type="vanished">&amp;lt;%1&amp;gt;</translation>
    </message>
    <message>
        <source>&amp;lt;&lt;a href=&quot;mailto:%1&quot;&gt;%1&lt;/a&gt;&amp;gt;</source>
        <comment>@email/rich</comment>
        <translation type="vanished">&amp;lt;&lt;a href=&quot;mailto:%1&quot;&gt;%1&lt;/a&gt;&amp;gt;</translation>
    </message>
    <message>
        <source>%1 &amp;lt;%2&amp;gt;</source>
        <comment>@email-with-name/plain
%1 is name, %2 is address</comment>
        <translation type="vanished">%1 &amp;lt;%2&amp;gt;</translation>
    </message>
    <message>
        <source>&lt;a href=&quot;mailto:%2&quot;&gt;%1&lt;/a&gt;</source>
        <comment>@email-with-name/rich
%1 is name, %2 is address</comment>
        <translation type="vanished">&lt;a href=&quot;mailto:%2&quot;&gt;%1&lt;/a&gt;</translation>
    </message>
    <message>
        <source>$%1</source>
        <comment>@envar/plain</comment>
        <translation type="vanished">$%1</translation>
    </message>
    <message>
        <source>&lt;tt&gt;$%1&lt;/tt&gt;</source>
        <comment>@envar/rich</comment>
        <translation type="vanished">&lt;tt&gt;$%1&lt;/tt&gt;</translation>
    </message>
    <message>
        <source>/%1/</source>
        <comment>@message/plain</comment>
        <translation type="vanished">/%1/</translation>
    </message>
    <message>
        <source>&lt;i&gt;%1&lt;/i&gt;</source>
        <comment>@message/rich</comment>
        <translation type="vanished">&lt;i&gt;%1&lt;/i&gt;</translation>
    </message>
    <message>
        <source>+</source>
        <comment>shortcut-key-delimiter/plain</comment>
        <translation type="vanished">+</translation>
    </message>
    <message>
        <source>+</source>
        <comment>shortcut-key-delimiter/rich</comment>
        <translation type="vanished">+</translation>
    </message>
    <message>
        <source>→</source>
        <comment>gui-path-delimiter/plain</comment>
        <translation type="vanished">➤</translation>
    </message>
    <message>
        <source>→</source>
        <comment>gui-path-delimiter/rich</comment>
        <translation type="vanished">➤</translation>
    </message>
    <message>
        <source>Alt</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Alt</translation>
    </message>
    <message>
        <source>AltGr</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">AltGr</translation>
    </message>
    <message>
        <source>Backspace</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Backspace</translation>
    </message>
    <message>
        <source>CapsLock</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">CapsLock</translation>
    </message>
    <message>
        <source>Control</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Control</translation>
    </message>
    <message>
        <source>Ctrl</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Ctrl</translation>
    </message>
    <message>
        <source>Del</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Del</translation>
    </message>
    <message>
        <source>Delete</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Delete</translation>
    </message>
    <message>
        <source>Down</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Стрелка вниз</translation>
    </message>
    <message>
        <source>End</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">End</translation>
    </message>
    <message>
        <source>Enter</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Enter</translation>
    </message>
    <message>
        <source>Esc</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Esc</translation>
    </message>
    <message>
        <source>Escape</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Escape</translation>
    </message>
    <message>
        <source>Home</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Home</translation>
    </message>
    <message>
        <source>Hyper</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Hyper</translation>
    </message>
    <message>
        <source>Ins</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Ins</translation>
    </message>
    <message>
        <source>Insert</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Insert</translation>
    </message>
    <message>
        <source>Left</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Стрелка влево</translation>
    </message>
    <message>
        <source>Menu</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Menu</translation>
    </message>
    <message>
        <source>Meta</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Meta</translation>
    </message>
    <message>
        <source>NumLock</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">NumLock</translation>
    </message>
    <message>
        <source>PageDown</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">PageDown</translation>
    </message>
    <message>
        <source>PageUp</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">PageUp</translation>
    </message>
    <message>
        <source>PgDown</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">PgDown</translation>
    </message>
    <message>
        <source>PgUp</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">PgUp</translation>
    </message>
    <message>
        <source>PauseBreak</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">PauseBreak</translation>
    </message>
    <message>
        <source>PrintScreen</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">PrintScreen</translation>
    </message>
    <message>
        <source>PrtScr</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">PrtScr</translation>
    </message>
    <message>
        <source>Return</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Return</translation>
    </message>
    <message>
        <source>Right</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Стрелка вправо</translation>
    </message>
    <message>
        <source>ScrollLock</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">ScrollLock</translation>
    </message>
    <message>
        <source>Shift</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Shift</translation>
    </message>
    <message>
        <source>Space</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Пробел</translation>
    </message>
    <message>
        <source>Super</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Super</translation>
    </message>
    <message>
        <source>SysReq</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">SysReq</translation>
    </message>
    <message>
        <source>Tab</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Tab</translation>
    </message>
    <message>
        <source>Up</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Стрелка вверх</translation>
    </message>
    <message>
        <source>Win</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">Win</translation>
    </message>
    <message>
        <source>F%1</source>
        <comment>keyboard-key-name</comment>
        <translation type="vanished">F%1</translation>
    </message>
    <message>
        <source>no error</source>
        <translation type="vanished">нет ошибки</translation>
    </message>
    <message>
        <source>requested family not supported for this host name</source>
        <translation type="vanished">Для указанного имени сервера требуемое семейство не поддерживается</translation>
    </message>
    <message>
        <source>temporary failure in name resolution</source>
        <translation type="vanished">временный сбой разрешения имён</translation>
    </message>
    <message>
        <source>non-recoverable failure in name resolution</source>
        <translation type="vanished">фатальный сбой разрешения имён</translation>
    </message>
    <message>
        <source>invalid flags</source>
        <translation type="vanished">неверные флаги</translation>
    </message>
    <message>
        <source>memory allocation failure</source>
        <translation type="vanished">ошибка выделения памяти</translation>
    </message>
    <message>
        <source>name or service not known</source>
        <translation type="vanished">неизвестное имя или сервис</translation>
    </message>
    <message>
        <source>requested family not supported</source>
        <translation type="vanished">запрошенное семейство не поддерживается</translation>
    </message>
    <message>
        <source>requested service not supported for this socket type</source>
        <translation type="vanished">запрошенный сервис не поддерживается этим типом сокета</translation>
    </message>
    <message>
        <source>requested socket type not supported</source>
        <translation type="vanished">запрошенный тип сокета не поддерживается</translation>
    </message>
    <message>
        <source>unknown error</source>
        <translation type="vanished">неизвестная ошибка</translation>
    </message>
    <message>
        <source>request was canceled</source>
        <translation type="vanished">запрос отменён</translation>
    </message>
    <message>
        <source>Unknown family %1</source>
        <comment>1: the unknown socket address family number</comment>
        <translation type="vanished">Неизвестная гарнитура %1</translation>
    </message>
    <message>
        <source>no error</source>
        <comment>Socket error code NoError</comment>
        <translation type="vanished">нет ошибки</translation>
    </message>
    <message>
        <source>name lookup has failed</source>
        <comment>Socket error code LookupFailure</comment>
        <translation type="vanished">ошибка разрешения имени</translation>
    </message>
    <message>
        <source>address already in use</source>
        <comment>Socket error code AddressInUse</comment>
        <translation type="vanished">адрес уже используется</translation>
    </message>
    <message>
        <source>socket is already bound</source>
        <comment>Socket error code AlreadyBound</comment>
        <translation type="vanished">сокет уже связан с адресом и портом</translation>
    </message>
    <message>
        <source>socket is already created</source>
        <comment>Socket error code AlreadyCreated</comment>
        <translation type="vanished">сокет уже создан</translation>
    </message>
    <message>
        <source>socket is not bound</source>
        <comment>Socket error code NotBound</comment>
        <translation type="vanished">сокет свободен</translation>
    </message>
    <message>
        <source>socket has not been created</source>
        <comment>Socket error code NotCreated</comment>
        <translation type="vanished">сокет не создан</translation>
    </message>
    <message>
        <source>operation would block</source>
        <comment>Socket error code WouldBlock</comment>
        <translation type="vanished">операция привела бы к блокировке</translation>
    </message>
    <message>
        <source>connection actively refused</source>
        <comment>Socket error code ConnectionRefused</comment>
        <translation type="vanished">соединение отвергнуто</translation>
    </message>
    <message>
        <source>connection timed out</source>
        <comment>Socket error code ConnectionTimedOut</comment>
        <translation type="vanished">время ожидания соединения истекло</translation>
    </message>
    <message>
        <source>operation is already in progress</source>
        <comment>Socket error code InProgress</comment>
        <translation type="vanished">операция уже выполняется</translation>
    </message>
    <message>
        <source>network failure occurred</source>
        <comment>Socket error code NetFailure</comment>
        <translation type="vanished">сбой сети</translation>
    </message>
    <message>
        <source>operation is not supported</source>
        <comment>Socket error code NotSupported</comment>
        <translation type="vanished">операция не поддерживается</translation>
    </message>
    <message>
        <source>timed operation timed out</source>
        <comment>Socket error code Timeout</comment>
        <translation type="vanished">истекло время ожидания операции</translation>
    </message>
    <message>
        <source>an unknown/unexpected error has happened</source>
        <comment>Socket error code UnknownError</comment>
        <translation type="vanished">неизвестная или непредвиденная ошибка</translation>
    </message>
    <message>
        <source>remote host closed connection</source>
        <comment>Socket error code RemotelyDisconnected</comment>
        <translation type="vanished">Удалённый узел закрыл соединение</translation>
    </message>
    <message>
        <source>NEC SOCKS client</source>
        <translation type="vanished">Клиент NEC SOCKS</translation>
    </message>
    <message>
        <source>Dante SOCKS client</source>
        <translation type="vanished">Клиент Dante SOCKS</translation>
    </message>
    <message>
        <source>Specified socket path is invalid</source>
        <translation type="vanished">Указан неверный путь к сокету</translation>
    </message>
    <message>
        <source>The socket operation is not supported</source>
        <translation type="vanished">Операция с сокетом не поддерживается</translation>
    </message>
    <message>
        <source>Connection refused</source>
        <translation type="vanished">Соединение отвергнуто</translation>
    </message>
    <message>
        <source>Permission denied</source>
        <translation type="vanished">Нет доступа</translation>
    </message>
    <message>
        <source>Connection timed out</source>
        <translation type="vanished">Время ожидания соединения истекло</translation>
    </message>
    <message>
        <source>Unknown error</source>
        <translation type="vanished">Неизвестная ошибка</translation>
    </message>
    <message>
        <source>Could not set non-blocking mode</source>
        <translation type="vanished">Не удалось установить неблокирующий режим</translation>
    </message>
    <message>
        <source>Address is already in use</source>
        <translation type="vanished">Адрес уже используется</translation>
    </message>
    <message>
        <source>Path cannot be used</source>
        <translation type="vanished">Невозможно использовать путь</translation>
    </message>
    <message>
        <source>No such file or directory</source>
        <translation type="vanished">Файл или папка не найдены</translation>
    </message>
    <message>
        <source>Not a directory</source>
        <translation type="vanished">Не папка</translation>
    </message>
    <message>
        <source>Read-only filesystem</source>
        <translation type="vanished">Файловая система доступна только для чтения</translation>
    </message>
    <message>
        <source>Unknown socket error</source>
        <translation type="vanished">Неизвестная ошибка сокета</translation>
    </message>
    <message>
        <source>Operation not supported</source>
        <translation type="vanished">Операция не поддерживается</translation>
    </message>
    <message>
        <source>Timed out trying to connect to remote host</source>
        <translation type="vanished">Истекло время ожидания ответа от удалённого узла</translation>
    </message>
    <message>
        <source>No error</source>
        <comment>SSL error</comment>
        <translation type="vanished">Нет ошибки</translation>
    </message>
    <message>
        <source>The certificate authority&apos;s certificate is invalid</source>
        <comment>SSL error</comment>
        <translation type="vanished">Неверный сертификат у удостоверяющего центра.</translation>
    </message>
    <message>
        <source>The certificate has expired</source>
        <comment>SSL error</comment>
        <translation type="vanished">Срок действия сертификата истёк.</translation>
    </message>
    <message>
        <source>The certificate is invalid</source>
        <comment>SSL error</comment>
        <translation type="vanished">Сертификат недействителен</translation>
    </message>
    <message>
        <source>The certificate is not signed by any trusted certificate authority</source>
        <comment>SSL error</comment>
        <translation type="vanished">Сертификат не подписан ни одним из доверенных удостоверяющих центров</translation>
    </message>
    <message>
        <source>The certificate has been revoked</source>
        <comment>SSL error</comment>
        <translation type="vanished">Сертификат был отозван</translation>
    </message>
    <message>
        <source>The certificate is unsuitable for this purpose</source>
        <comment>SSL error</comment>
        <translation type="vanished">Сертификат не подходит для выбранной области применения</translation>
    </message>
    <message>
        <source>The root certificate authority&apos;s certificate is not trusted for this purpose</source>
        <comment>SSL error</comment>
        <translation type="vanished">Сертификат корневого удостоверяющего центра не может быть доверенным для этого применения</translation>
    </message>
    <message>
        <source>The certificate authority&apos;s certificate is marked to reject this certificate&apos;s purpose</source>
        <comment>SSL error</comment>
        <translation type="vanished">Сертификат корневого удостоверяющего центра недействителен для этого применения</translation>
    </message>
    <message>
        <source>The peer did not present any certificate</source>
        <comment>SSL error</comment>
        <translation type="vanished">Подключение без сертификата</translation>
    </message>
    <message>
        <source>The certificate does not apply to the given host</source>
        <comment>SSL error</comment>
        <translation type="vanished">Сертификат не применим к этому узлу</translation>
    </message>
    <message>
        <source>The certificate cannot be verified for internal reasons</source>
        <comment>SSL error</comment>
        <translation type="vanished">Сертификат не может быть проверен по внутренним причинам</translation>
    </message>
    <message>
        <source>The certificate chain is too long</source>
        <comment>SSL error</comment>
        <translation type="vanished">Цепочка сертификатов слишком длинная</translation>
    </message>
    <message>
        <source>Unknown error</source>
        <comment>SSL error</comment>
        <translation type="vanished">Неизвестная ошибка</translation>
    </message>
    <message>
        <source>address family for nodename not supported</source>
        <translation type="vanished">семейство адресов для не поддерживается для данного nodename</translation>
    </message>
    <message>
        <source>invalid value for &apos;ai_flags&apos;</source>
        <translation type="vanished">неверное значение для «ai_flags»</translation>
    </message>
    <message>
        <source>&apos;ai_family&apos; not supported</source>
        <translation type="vanished">семейство «ai_family» не поддерживается</translation>
    </message>
    <message>
        <source>no address associated with nodename</source>
        <translation type="vanished">с данным узлом (nodename) не связан никакой адрес</translation>
    </message>
    <message>
        <source>servname not supported for ai_socktype</source>
        <translation type="vanished">servname не поддерживается для типа ai_socktype</translation>
    </message>
    <message>
        <source>&apos;ai_socktype&apos; not supported</source>
        <translation type="vanished">тип «ai_socktype» не поддерживается</translation>
    </message>
    <message>
        <source>system error</source>
        <translation type="vanished">системная ошибка</translation>
    </message>
    <message numerus="yes">
        <source>Could not find mime type &lt;resource&gt;%2&lt;/resource&gt;</source>
        <translation type="vanished">
            <numerusform>Не удалось найти типы MIME &lt;resource&gt;%2&lt;/resource&gt;</numerusform>
            <numerusform>Не удалось найти типы MIME &lt;resource&gt;%2&lt;/resource&gt;</numerusform>
            <numerusform>Не удалось найти типы MIME &lt;resource&gt;%2&lt;/resource&gt;</numerusform>
        </translation>
        <extra-po-msgid_plural>Could not find mime types:
&lt;resource&gt;%2&lt;/resource&gt;</extra-po-msgid_plural>
    </message>
    <message>
        <source>No mime types installed. Check that shared-mime-info is installed, and that XDG_DATA_DIRS is not set, or includes /usr/share.</source>
        <translation type="vanished">Не установлены типы MIME. Проверьте установку пакета shared-mime-info и состояние переменной окружения XDG_DATA_DIRS. Она должна быть либо не установлена, либо должна включать /usr/share.</translation>
    </message>
    <message>
        <source>No service matching the requirements was found</source>
        <translation type="vanished">Служба, соответствующая требованиям, не найдена</translation>
    </message>
    <message>
        <source>The service &apos;%1&apos; does not provide an interface &apos;%2&apos; with keyword &apos;%3&apos;</source>
        <translatorcomment>BUGME: &quot;. &quot; at the end is necessary, otherwise the next sentence goes without space or full stop. --aspotashev</translatorcomment>
        <translation type="vanished">Служба «%1» не предоставляет интерфейс «%2» с ключевыми словами «%3». </translation>
    </message>
    <message>
        <source>40</source>
        <comment>dictionary variant</comment>
        <translation type="vanished">40</translation>
    </message>
    <message>
        <source>60</source>
        <comment>dictionary variant</comment>
        <translation type="vanished">60</translation>
    </message>
    <message>
        <source>80</source>
        <comment>dictionary variant</comment>
        <translation type="vanished">80</translation>
    </message>
    <message>
        <source>-ise suffixes</source>
        <comment>dictionary variant</comment>
        <translation type="vanished">суффиксы -ise</translation>
    </message>
    <message>
        <source>-ize suffixes</source>
        <comment>dictionary variant</comment>
        <translation type="vanished">суффиксы -ize</translation>
    </message>
    <message>
        <source>-ise suffixes and with accents</source>
        <comment>dictionary variant</comment>
        <translation type="vanished">суффиксы -ise и буквы с акцентом</translation>
    </message>
    <message>
        <source>-ise suffixes and without accents</source>
        <comment>dictionary variant</comment>
        <translation type="vanished">суффиксы -ise и буквы без акцента</translation>
    </message>
    <message>
        <source>-ize suffixes and with accents</source>
        <comment>dictionary variant</comment>
        <translation type="vanished">суффиксы -ize и буквы с акцентом</translation>
    </message>
    <message>
        <source>-ize suffixes and without accents</source>
        <comment>dictionary variant</comment>
        <translation type="vanished">суффиксы -ize и буквы без акцента</translation>
    </message>
    <message>
        <source>large</source>
        <comment>dictionary variant</comment>
        <translation type="vanished">большой</translation>
    </message>
    <message>
        <source>medium</source>
        <comment>dictionary variant</comment>
        <translation type="vanished">средний</translation>
    </message>
    <message>
        <source>small</source>
        <comment>dictionary variant</comment>
        <translation type="vanished">малый</translation>
    </message>
    <message>
        <source>variant 0</source>
        <comment>dictionary variant</comment>
        <translation type="vanished">вариант 0</translation>
    </message>
    <message>
        <source>variant 1</source>
        <comment>dictionary variant</comment>
        <translation type="vanished">вариант 1</translation>
    </message>
    <message>
        <source>variant 2</source>
        <comment>dictionary variant</comment>
        <translation type="vanished">вариант 2</translation>
    </message>
    <message>
        <source>without accents</source>
        <comment>dictionary variant</comment>
        <translation type="vanished">буквы без акцента</translation>
    </message>
    <message>
        <source>with accents</source>
        <comment>dictionary variant</comment>
        <translation type="vanished">буквы с акцентом</translation>
    </message>
    <message>
        <source>with ye</source>
        <comment>dictionary variant</comment>
        <translation type="vanished">только с вариантами написания через «е»</translation>
    </message>
    <message>
        <source>with yeyo</source>
        <comment>dictionary variant</comment>
        <translation type="vanished">с вариантами написания через «е» и «ё»</translation>
    </message>
    <message>
        <source>with yo</source>
        <comment>dictionary variant</comment>
        <translation type="vanished">только с вариантами написания через «ё»</translation>
    </message>
    <message>
        <source>extended</source>
        <comment>dictionary variant</comment>
        <translation type="vanished">расширенный</translation>
    </message>
    <message>
        <source>%1 (%2) [%3]</source>
        <comment>dictionary name. %1-language, %2-country and %3 variant name</comment>
        <translation type="vanished">%1 (%2) [%3]</translation>
    </message>
    <message>
        <source>%1 (%2)</source>
        <comment>dictionary name. %1-language and %2-country name</comment>
        <translation type="vanished">%1 (%2)</translation>
    </message>
    <message>
        <source>%1 [%2]</source>
        <comment>dictionary name. %1-language and %2-variant name</comment>
        <translation type="vanished">%1 [%2]</translation>
    </message>
    <message>
        <source>File %1 does not exist</source>
        <translation type="vanished">Файл %1 не существует</translation>
    </message>
    <message>
        <source>Cannot open %1 for reading</source>
        <translation type="vanished">Не удалось открыть %1 для чтения</translation>
    </message>
    <message>
        <source>Cannot create memory segment for file %1</source>
        <translation type="vanished">Не удалось выделить область памяти для файла %1</translation>
    </message>
    <message>
        <source>Could not read data from %1 into shm</source>
        <translation type="vanished">Не удалось прочитать данные из %1 в shm</translation>
    </message>
    <message>
        <source>Only &apos;ReadOnly&apos; allowed</source>
        <translation type="vanished">Допускается только для чтения (ReadOnly)</translation>
    </message>
    <message>
        <source>Cannot seek past eof</source>
        <translation type="vanished">Сдвиг после конца файла невозможен</translation>
    </message>
    <message>
        <source>Library &quot;%1&quot; not found</source>
        <translation type="vanished">Библиотека «%1» не найдена</translation>
    </message>
    <message>
        <source>No service matching the requirements was found.</source>
        <translation type="vanished">Нет службы, соответствующей требованиям.</translation>
    </message>
    <message>
        <source>The service provides no library, the Library key is missing in the .desktop file.</source>
        <translation type="vanished">Служба не предоставляет библиотеку, нет записи «Library» в файле .desktop.</translation>
    </message>
    <message>
        <source>The library does not export a factory for creating components.</source>
        <translation type="vanished">Библиотека не предоставляет механизм создания компонентов.</translation>
    </message>
    <message>
        <source>The factory does not support creating components of the specified type.</source>
        <translation type="vanished">Фабрика не поддерживает создание компонентов указанного типа.</translation>
    </message>
    <message>
        <source>KLibLoader: Unknown error</source>
        <translation type="vanished">Неизвестная ошибка KLibLoader</translation>
    </message>
    <message>
        <source>Could not find plugin &apos;%1&apos; for application &apos;%2&apos;</source>
        <translation type="vanished">Не удалось найти модуль «%1» для приложения «%2».</translation>
    </message>
    <message>
        <source>The provided service is not valid</source>
        <translation type="vanished">Указана недопустимая служба</translation>
    </message>
    <message>
        <source>The service &apos;%1&apos; provides no library or the Library key is missing</source>
        <translation type="vanished">Служба «%1» не предоставляет библиотеку или нет записи «Library»</translation>
    </message>
    <message>
        <source>The library %1 does not offer a KDE 4 compatible factory.</source>
        <translation type="vanished">Библиотека %1 не предоставляет механизм создания компонентов, совместимый с KDE 4.</translation>
    </message>
    <message>
        <source>The plugin &apos;%1&apos; uses an incompatible KDE library (%2).</source>
        <translation type="vanished">Расширение «%1» использует несовместимую библиотеку KDE (%2).</translation>
    </message>
    <message>
        <source>KDE Test Program</source>
        <translation type="vanished">Тестовая программа KDE</translation>
    </message>
    <message>
        <source>KBuildSycoca</source>
        <translation type="vanished">KBuildSycoca</translation>
    </message>
    <message>
        <source>Rebuilds the system configuration cache.</source>
        <translation type="vanished">Повторное создание кэша системной конфигурации.</translation>
    </message>
    <message>
        <source>(c) 1999-2002 KDE Developers</source>
        <translation type="vanished">© Разработчики KDE, 1999-2002</translation>
    </message>
    <message>
        <source>David Faure</source>
        <translation type="vanished">David Faure</translation>
    </message>
    <message>
        <source>Do not signal applications to update</source>
        <translation type="vanished">Не посылать сигнал приложениям для обновления</translation>
    </message>
    <message>
        <source>Disable incremental update, re-read everything</source>
        <translation type="vanished">Отключить инкрементное обновление, перечитать все</translation>
    </message>
    <message>
        <source>Check file timestamps</source>
        <translation type="vanished">Проверять время изменения файлов</translation>
    </message>
    <message>
        <source>Disable checking files (dangerous)</source>
        <translation type="vanished">Отключить проверку файлов (опасно)</translation>
    </message>
    <message>
        <source>Create global database</source>
        <translation type="vanished">Создать глобальную базу</translation>
    </message>
    <message>
        <source>Perform menu generation test run only</source>
        <translation type="vanished">Выполнить только тест генерации меню</translation>
    </message>
    <message>
        <source>Track menu id for debug purposes</source>
        <translation type="vanished">Отслеживать идентификатор меню для отладки</translation>
    </message>
    <message>
        <source>KDE Daemon</source>
        <translation type="vanished">Служба KDE</translation>
    </message>
    <message>
        <source>KDE Daemon - triggers Sycoca database updates when needed</source>
        <translation type="vanished">Служба KDE - запускает обновление базы данных Sycoca по необходимости</translation>
    </message>
    <message>
        <source>Check Sycoca database only once</source>
        <translation type="vanished">Проверять базу данных Sycoca только один раз</translation>
    </message>
    <message>
        <source>The key sequence &apos;%1&apos; is ambiguous. Use &apos;Configure Shortcuts&apos;
from the &apos;Settings&apos; menu to solve the ambiguity.
No action will be triggered.</source>
        <translation type="vanished">Конфликт действий на комбинации клавиш «%1». Используйте пункт 
«Комбинации клавиш» меню «Настройка» чтобы исправить конфликт.
Не выполнено ни одно из конфликтующих действий.</translation>
    </message>
    <message>
        <source>Ambiguous shortcut detected</source>
        <translation type="vanished">Конфликт действий</translation>
    </message>
    <message>
        <source>Default</source>
        <comment>Encodings menu</comment>
        <translation type="vanished">По умолчанию</translation>
    </message>
    <message>
        <source>Autodetect</source>
        <comment>Encodings menu</comment>
        <translation type="vanished">Автоматическое определение</translation>
    </message>
    <message>
        <source>No Entries</source>
        <translation type="vanished">Нет записей</translation>
    </message>
    <message>
        <source>Clear List</source>
        <translation type="vanished">Очистить список</translation>
    </message>
    <message>
        <source>&amp;Back</source>
        <comment>go back</comment>
        <translation type="vanished">&amp;Назад</translation>
    </message>
    <message>
        <source>&amp;Forward</source>
        <comment>go forward</comment>
        <translation type="vanished">&amp;Вперёд</translation>
    </message>
    <message>
        <source>&amp;Home</source>
        <comment>home page</comment>
        <translation type="vanished">&amp;Домой</translation>
    </message>
    <message>
        <source>&amp;Help</source>
        <comment>show help</comment>
        <translation type="vanished">&amp;Справка</translation>
    </message>
    <message>
        <source>Show &amp;Menubar</source>
        <translation type="vanished">Показать &amp;меню</translation>
    </message>
    <message>
        <source>Show Menubar&lt;p&gt;Shows the menubar again after it has been hidden&lt;/p&gt;</source>
        <translation type="vanished">Показать меню&lt;p&gt;Показать меню снова после того, как оно было скрыто&lt;/p&gt;</translation>
    </message>
    <message>
        <source>Show St&amp;atusbar</source>
        <translation type="vanished">Показать строку &amp;состояния</translation>
    </message>
    <message>
        <source>Show Statusbar&lt;p&gt;Shows the statusbar, which is the bar at the bottom of the window used for status information.&lt;/p&gt;</source>
        <translatorcomment>BUGME: whatsthis on &quot;Hide Statusbar&quot; should be about &quot;Hide Statusbar&quot;, not &quot;Show Statusbar&quot;</translatorcomment>
        <translation type="vanished">Показать строку состояния&lt;p&gt;Строка состояния — это полоса в нижней части окна, в которой выводится информация о состоянии приложения.&lt;/p&gt;</translation>
    </message>
    <message>
        <source>&amp;New</source>
        <translation type="vanished">Созд&amp;ать</translation>
    </message>
    <message>
        <source>Create new document</source>
        <translation type="vanished">Создать новый документ</translation>
    </message>
    <message>
        <source>&amp;Open...</source>
        <translation type="vanished">&amp;Открыть...</translation>
    </message>
    <message>
        <source>Open an existing document</source>
        <translation type="vanished">Открыть существующий документ</translation>
    </message>
    <message>
        <source>Open &amp;Recent</source>
        <translation type="vanished">По&amp;следние файлы</translation>
    </message>
    <message>
        <source>Open a document which was recently opened</source>
        <translation type="vanished">Открыть документ, который уже был недавно открыт</translation>
    </message>
    <message>
        <source>&amp;Save</source>
        <translation type="vanished">&amp;Сохранить</translation>
    </message>
    <message>
        <source>Save document</source>
        <translation type="vanished">Сохранить документ</translation>
    </message>
    <message>
        <source>Save &amp;As...</source>
        <translation type="vanished">Сохранить &amp;как...</translation>
    </message>
    <message>
        <source>Save document under a new name</source>
        <translation type="vanished">Сохранить документ под новым именем</translation>
    </message>
    <message>
        <source>Re&amp;vert</source>
        <translation type="vanished">&amp;Восстановить</translation>
    </message>
    <message>
        <source>Revert unsaved changes made to document</source>
        <translation type="vanished">Восстановить несохранённые изменения, внесённые в документ</translation>
    </message>
    <message>
        <source>&amp;Close</source>
        <translation type="vanished">&amp;Закрыть</translation>
    </message>
    <message>
        <source>Close document</source>
        <translation type="vanished">Закрыть документ</translation>
    </message>
    <message>
        <source>&amp;Print...</source>
        <translation type="vanished">Пе&amp;чать...</translation>
    </message>
    <message>
        <source>Print document</source>
        <translation type="vanished">Печать документа</translation>
    </message>
    <message>
        <source>Print Previe&amp;w</source>
        <translation type="vanished">Пред&amp;варительный просмотр</translation>
    </message>
    <message>
        <source>Show a print preview of document</source>
        <translation type="vanished">Показать предварительный просмотр документа</translation>
    </message>
    <message>
        <source>&amp;Mail...</source>
        <translation type="vanished">Отправить по &amp;почте...</translation>
    </message>
    <message>
        <source>Send document by mail</source>
        <translation type="vanished">Отправить документ по электронной почте</translation>
    </message>
    <message>
        <source>&amp;Quit</source>
        <translation type="vanished">В&amp;ыход</translation>
    </message>
    <message>
        <source>Quit application</source>
        <translation type="vanished">Выйти из приложения</translation>
    </message>
    <message>
        <source>Undo last action</source>
        <translation type="vanished">Отменить последнее действие</translation>
    </message>
    <message>
        <source>Re&amp;do</source>
        <translation type="vanished">&amp;Повторить</translation>
    </message>
    <message>
        <source>Redo last undone action</source>
        <translation type="vanished">Повторить последнее отменённое действие</translation>
    </message>
    <message>
        <source>Cu&amp;t</source>
        <translation type="vanished">Вы&amp;резать</translation>
    </message>
    <message>
        <source>Cut selection to clipboard</source>
        <translation type="vanished">Вырезать выбранное в буфер обмена</translation>
    </message>
    <message>
        <source>&amp;Copy</source>
        <translation type="vanished">&amp;Копировать</translation>
    </message>
    <message>
        <source>Copy selection to clipboard</source>
        <translation type="vanished">Скопировать выбранное в буфер обмена</translation>
    </message>
    <message>
        <source>&amp;Paste</source>
        <translation type="vanished">&amp;Вставить</translation>
    </message>
    <message>
        <source>Paste clipboard content</source>
        <translation type="vanished">Вставить содержимое буфера обмена</translation>
    </message>
    <message>
        <source>C&amp;lear</source>
        <translation type="vanished">О&amp;чистить</translation>
    </message>
    <message>
        <source>Select &amp;All</source>
        <translation type="vanished">Вы&amp;делить все</translation>
    </message>
    <message>
        <source>Dese&amp;lect</source>
        <translation type="vanished">С&amp;нять выделение</translation>
    </message>
    <message>
        <source>&amp;Find...</source>
        <translation type="vanished">&amp;Найти...</translation>
    </message>
    <message>
        <source>Find &amp;Next</source>
        <translation type="vanished">П&amp;родолжить поиск</translation>
    </message>
    <message>
        <source>Find Pre&amp;vious</source>
        <translation type="vanished">Найти пред&amp;ыдущее</translation>
    </message>
    <message>
        <source>&amp;Replace...</source>
        <translation type="vanished">&amp;Заменить...</translation>
    </message>
    <message>
        <source>&amp;Actual Size</source>
        <translation type="vanished">&amp;Фактический размер</translation>
    </message>
    <message>
        <source>View document at its actual size</source>
        <translation type="vanished">Просмотр документа в его фактическом размере</translation>
    </message>
    <message>
        <source>&amp;Fit to Page</source>
        <translation type="vanished">&amp;Вместить страницу целиком</translation>
    </message>
    <message>
        <source>Zoom to fit page in window</source>
        <translation type="vanished">Изменить масштаб, чтобы вместить страницу целиком в окно</translation>
    </message>
    <message>
        <source>Fit to Page &amp;Width</source>
        <translation type="vanished">По &amp;ширине страницы</translation>
    </message>
    <message>
        <source>Zoom to fit page width in window</source>
        <translation type="vanished">Изменить масштаб, чтобы вместить всю ширину страницы</translation>
    </message>
    <message>
        <source>Fit to Page &amp;Height</source>
        <translation type="vanished">По &amp;высоте страницы</translation>
    </message>
    <message>
        <source>Zoom to fit page height in window</source>
        <translation type="vanished">Изменить масштаб, чтобы вместить всю высоту страницы</translation>
    </message>
    <message>
        <source>Zoom &amp;In</source>
        <translation type="vanished">У&amp;величить</translation>
    </message>
    <message>
        <source>Zoom &amp;Out</source>
        <translation type="vanished">У&amp;меньшить</translation>
    </message>
    <message>
        <source>&amp;Zoom...</source>
        <translation type="vanished">&amp;Масштаб...</translation>
    </message>
    <message>
        <source>Select zoom level</source>
        <translation type="vanished">Выбор масштаба</translation>
    </message>
    <message>
        <source>&amp;Redisplay</source>
        <translation type="vanished">Обно&amp;вить изображение</translation>
    </message>
    <message>
        <source>Redisplay document</source>
        <translation type="vanished">Обновить документ</translation>
    </message>
    <message>
        <source>&amp;Up</source>
        <translation type="vanished">Ввер&amp;х</translation>
    </message>
    <message>
        <source>Go up</source>
        <translation type="vanished">Перейти вверх</translation>
    </message>
    <message>
        <source>&amp;Previous Page</source>
        <translation type="vanished">&amp;Предыдущая страница</translation>
    </message>
    <message>
        <source>Go to previous page</source>
        <translation type="vanished">Перейти на предыдущую страницу</translation>
    </message>
    <message>
        <source>&amp;Next Page</source>
        <translation type="vanished">&amp;Следующая страница</translation>
    </message>
    <message>
        <source>Go to next page</source>
        <translation type="vanished">Перейти на следующую страницу</translation>
    </message>
    <message>
        <source>&amp;Go To...</source>
        <translation type="vanished">&amp;Перейти...</translation>
    </message>
    <message>
        <source>&amp;Go to Page...</source>
        <translation type="vanished">Перейти на ст&amp;раницу...</translation>
    </message>
    <message>
        <source>&amp;Go to Line...</source>
        <translation type="vanished">&amp;Перейти на строку...</translation>
    </message>
    <message>
        <source>&amp;First Page</source>
        <translation type="vanished">Перв&amp;ая страница</translation>
    </message>
    <message>
        <source>Go to first page</source>
        <translation type="vanished">Перейти на первую страницу</translation>
    </message>
    <message>
        <source>&amp;Last Page</source>
        <translation type="vanished">Последня&amp;я страница</translation>
    </message>
    <message>
        <source>Go to last page</source>
        <translation type="vanished">Перейти на последнюю страницу</translation>
    </message>
    <message>
        <source>Go back in document</source>
        <translation type="vanished">Назад по документу</translation>
    </message>
    <message>
        <source>&amp;Forward</source>
        <translation type="vanished">&amp;Вперёд</translation>
    </message>
    <message>
        <source>Go forward in document</source>
        <translation type="vanished">Вперёд по документу</translation>
    </message>
    <message>
        <source>&amp;Add Bookmark</source>
        <translation type="vanished">Добавить &amp;закладку</translation>
    </message>
    <message>
        <source>&amp;Edit Bookmarks...</source>
        <translation type="vanished">&amp;Изменить закладки...</translation>
    </message>
    <message>
        <source>&amp;Spelling...</source>
        <translation type="vanished">&amp;Проверка орфографии...</translation>
    </message>
    <message>
        <source>Check spelling in document</source>
        <translation type="vanished">Проверить орфографию в документе</translation>
    </message>
    <message>
        <source>Show or hide menubar</source>
        <translation type="vanished">Показать или скрыть меню</translation>
    </message>
    <message>
        <source>Show &amp;Toolbar</source>
        <translation type="vanished">Показать панель &amp;инструментов</translation>
    </message>
    <message>
        <source>Show or hide toolbar</source>
        <translation type="vanished">Показать или скрыть панель инструментов</translation>
    </message>
    <message>
        <source>Show or hide statusbar</source>
        <translation type="vanished">Показать или скрыть строку состояния</translation>
    </message>
    <message>
        <source>F&amp;ull Screen Mode</source>
        <translation type="vanished">&amp;Полноэкранный режим</translation>
    </message>
    <message>
        <source>&amp;Save Settings</source>
        <translation type="vanished">&amp;Сохранить параметры</translation>
    </message>
    <message>
        <source>Configure S&amp;hortcuts...</source>
        <translation type="vanished">&amp;Комбинации клавиш...</translation>
    </message>
    <message>
        <source>&amp;Configure %1...</source>
        <translation type="vanished">&amp;Настроить %1...</translation>
    </message>
    <message>
        <source>Configure Tool&amp;bars...</source>
        <translation type="vanished">Панели &amp;инструментов...</translation>
    </message>
    <message>
        <source>Configure &amp;Notifications...</source>
        <translation type="vanished">Настроить &amp;уведомления...</translation>
    </message>
    <message>
        <source>%1 &amp;Handbook</source>
        <translation type="vanished">&amp;Руководство пользователя %1</translation>
    </message>
    <message>
        <source>What&apos;s &amp;This?</source>
        <translation type="vanished">Что &amp;это?</translation>
    </message>
    <message>
        <source>Tip of the &amp;Day</source>
        <translation type="vanished">Совет &amp;дня</translation>
    </message>
    <message>
        <source>&amp;Report Bug...</source>
        <translation type="vanished">Сооб&amp;щить об ошибке...</translation>
    </message>
    <message>
        <source>Switch Application &amp;Language...</source>
        <translation type="vanished">Сменить &amp;язык интерфейса приложения...</translation>
    </message>
    <message>
        <source>&amp;About %1</source>
        <translation type="vanished">&amp;О программе %1</translation>
    </message>
    <message>
        <source>About &amp;KDE</source>
        <translation type="vanished">О &amp;KDE</translation>
    </message>
    <message>
        <source>Exit F&amp;ull Screen Mode</source>
        <comment>@action:inmenu</comment>
        <translation type="vanished">&amp;Выйти из полноэкранного режима</translation>
    </message>
    <message>
        <source>Exit Full Screen</source>
        <comment>@action:intoolbar</comment>
        <translation type="vanished">Выйти из полноэкранного режима</translation>
    </message>
    <message>
        <source>Exit full screen mode</source>
        <comment>@info:tooltip</comment>
        <translation type="vanished">Выйти из полноэкранного режима</translation>
    </message>
    <message>
        <source>F&amp;ull Screen Mode</source>
        <comment>@action:inmenu</comment>
        <translation type="vanished">&amp;Полноэкранный режим</translation>
    </message>
    <message>
        <source>Full Screen</source>
        <comment>@action:intoolbar</comment>
        <translation type="vanished">Полноэкранный режим</translation>
    </message>
    <message>
        <source>Display the window in full screen</source>
        <comment>@info:tooltip</comment>
        <translation type="vanished">Разворачивает окно на полный экран</translation>
    </message>
    <message>
        <source>Custom...</source>
        <comment>Custom color</comment>
        <translation type="vanished">Указать собственный...</translation>
    </message>
    <message>
        <source>* Recent Colors *</source>
        <comment>palette name</comment>
        <translation type="vanished">* Последние цвета *</translation>
    </message>
    <message>
        <source>* Custom Colors *</source>
        <comment>palette name</comment>
        <translation type="vanished">* Собственные цвета *</translation>
    </message>
    <message>
        <source>Forty Colors</source>
        <comment>palette name</comment>
        <translation type="vanished">Сорок основных цветов</translation>
    </message>
    <message>
        <source>Oxygen Colors</source>
        <comment>palette name</comment>
        <translation type="vanished">Цвета Oxygen</translation>
    </message>
    <message>
        <source>Rainbow Colors</source>
        <comment>palette name</comment>
        <translation type="vanished">Радужные цвета</translation>
    </message>
    <message>
        <source>Royal Colors</source>
        <comment>palette name</comment>
        <translation type="vanished">Королевские цвета</translation>
    </message>
    <message>
        <source>Web Colors</source>
        <comment>palette name</comment>
        <translation type="vanished">Цвета веб</translation>
    </message>
    <message>
        <source>Named Colors</source>
        <translation type="vanished">Именованные цвета</translation>
    </message>
    <message numerus="yes">
        <source>Unable to read X11 RGB color strings. The following file location was examined:
%2</source>
        <comment>%1 is the number of paths, %2 is the list of paths (with newlines between them)</comment>
        <translation type="vanished">
            <numerusform>Не удалось получить определения цветов X11 ни из одного из следующих расположений:
%2</numerusform>
            <numerusform>Не удалось получить определения цветов X11 ни из одного из следующих расположений:
%2</numerusform>
            <numerusform>Не удалось получить определения цветов X11 ни из одного из следующих расположений:
%2</numerusform>
        </translation>
        <extra-po-msgid_plural>Unable to read X11 RGB color strings. The following file locations were examined:
%2</extra-po-msgid_plural>
    </message>
    <message>
        <source>Select Color</source>
        <translation type="vanished">Выбор цвета</translation>
    </message>
    <message>
        <source>Hue:</source>
        <translation type="vanished">Оттенок:</translation>
    </message>
    <message>
        <source>°</source>
        <comment>The angular degree unit (for hue)</comment>
        <translation type="vanished">°</translation>
    </message>
    <message>
        <source>Saturation:</source>
        <translation type="vanished">Насыщенность:</translation>
    </message>
    <message>
        <source>Value:</source>
        <comment>This is the V of HSV</comment>
        <translation type="vanished">Яркость:</translation>
    </message>
    <message>
        <source>Red:</source>
        <translation type="vanished">Красный:</translation>
    </message>
    <message>
        <source>Green:</source>
        <translation type="vanished">Зелёный:</translation>
    </message>
    <message>
        <source>Blue:</source>
        <translation type="vanished">Синий:</translation>
    </message>
    <message>
        <source>Alpha:</source>
        <translation type="vanished">Альфа-канал:</translation>
    </message>
    <message>
        <source>&amp;Add to Custom Colors</source>
        <translation type="vanished">&amp;Добавить в собственные цвета</translation>
    </message>
    <message>
        <source>Name:</source>
        <translation type="vanished">Название:</translation>
    </message>
    <message>
        <source>HTML:</source>
        <translation type="vanished">HTML:</translation>
    </message>
    <message>
        <source>Default color</source>
        <translation type="vanished">Цвет по умолчанию</translation>
    </message>
    <message>
        <source>-default-</source>
        <translation type="vanished">-по умолчанию-</translation>
    </message>
    <message>
        <source>-unnamed-</source>
        <translation type="vanished">-безымянный-</translation>
    </message>
    <message>
        <source>&lt;qt&gt;No information available.&lt;br /&gt;The supplied KAboutData object does not exist.&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;К сожалению, информация отсутствует.&lt;br /&gt;Программа не предоставила объект KAboutData.&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>&lt;html&gt;&lt;font size=&quot;5&quot;&gt;%1&lt;/font&gt;&lt;br /&gt;&lt;b&gt;Version %2&lt;/b&gt;&lt;br /&gt;&amp;nbsp;&lt;/html&gt;</source>
        <translation type="vanished">&lt;html&gt;&lt;font size=&quot;5&quot;&gt;%1&lt;/font&gt;&lt;br /&gt;&lt;b&gt;Версия %2&lt;/b&gt;&lt;br /&gt;&amp;nbsp;&lt;/html&gt;</translation>
    </message>
    <message>
        <source>&lt;html&gt;&lt;font size=&quot;5&quot;&gt;%1&lt;/font&gt;&lt;br /&gt;&lt;b&gt;Version %2&lt;/b&gt;&lt;br /&gt;Using KDE Development Platform %3&lt;/html&gt;</source>
        <comment>Program name, version and KDE platform version; do not translate &apos;Development Platform&apos;</comment>
        <translation type="vanished">&lt;html&gt;&lt;font size=&quot;5&quot;&gt;%1&lt;/font&gt;&lt;br /&gt;&lt;b&gt;Версия %2&lt;/b&gt;&lt;br /&gt;Использует KDE %3&lt;/html&gt;</translation>
    </message>
    <message>
        <source>License: %1</source>
        <translation type="vanished">Лицензия: %1</translation>
    </message>
    <message>
        <source>License Agreement</source>
        <translation type="vanished">Лицензионное соглашение</translation>
    </message>
    <message>
        <source>Email contributor</source>
        <comment>Action to send an email to a contributor</comment>
        <translation type="vanished">Написать участнику по электронной почте</translation>
    </message>
    <message>
        <source>Visit contributor&apos;s homepage</source>
        <translation type="vanished">Посетить домашнюю страницу участника</translation>
    </message>
    <message>
        <source>Email contributor
%1</source>
        <comment>Action to send an email to a contributor</comment>
        <translation type="vanished">Написать участнику по электронной почте:
%1</translation>
    </message>
    <message>
        <source>Visit contributor&apos;s homepage
%1</source>
        <translation type="vanished">Посетить домашнюю страницу участника:
%1</translation>
    </message>
    <message>
        <source>Visit contributor&apos;s profile on %1
%2</source>
        <translation type="vanished">Посетить страницу профиля помощника на %1
%2</translation>
    </message>
    <message>
        <source>Visit contributor&apos;s page
%1</source>
        <translation type="vanished">Посетить страницу помощника
%1</translation>
    </message>
    <message>
        <source>Visit contributor&apos;s blog
%1</source>
        <translation type="vanished">Посетить блог участника:
%1</translation>
    </message>
    <message>
        <source>%1</source>
        <comment>@item Contributor name in about dialog.</comment>
        <translation type="vanished">%1</translation>
    </message>
    <message>
        <source>%1, %2</source>
        <comment>City, Country</comment>
        <translation type="vanished">%1, %2</translation>
    </message>
    <message>
        <source>Other</source>
        <comment>A generic social network or homepage link of an unlisted type.</comment>
        <translation type="vanished">Другое</translation>
    </message>
    <message>
        <source>Blog</source>
        <comment>A type of link.</comment>
        <translation type="vanished">Блог</translation>
    </message>
    <message>
        <source>Homepage</source>
        <comment>A type of link.</comment>
        <translation type="vanished">Домашняя страница</translation>
    </message>
    <message>
        <source>About KDE</source>
        <translation type="vanished">О KDE</translation>
    </message>
    <message>
        <source>&lt;html&gt;&lt;font size=&quot;5&quot;&gt;KDE - Be Free!&lt;/font&gt;&lt;br /&gt;&lt;b&gt;Platform Version %1&lt;/b&gt;&lt;/html&gt;</source>
        <translation type="vanished">&lt;html&gt;&lt;font size=&quot;5&quot;&gt;KDE — будьте свободными!&lt;/font&gt;&lt;br /&gt;&lt;b&gt;Версия платформы — %1&lt;/b&gt;&lt;/html&gt;</translation>
    </message>
    <message>
        <source>&lt;html&gt;&lt;b&gt;KDE&lt;/b&gt; is a world-wide network of software engineers, artists, writers, translators and facilitators who are committed to &lt;a href=&quot;%1&quot;&gt;Free Software&lt;/a&gt; development. This community has created hundreds of Free Software applications as part of the KDE Development Platform and KDE Software Distribution.&lt;br /&gt;&lt;br /&gt;KDE is a cooperative enterprise in which no single entity controls the efforts or products of KDE to the exclusion of others. Everyone is welcome to join and contribute to KDE, including you.&lt;br /&gt;&lt;br /&gt;Visit &lt;a href=&quot;%2&quot;&gt;%2&lt;/a&gt; for more information about the KDE community and the software we produce.&lt;/html&gt;</source>
        <translation type="vanished">&lt;html&gt;&lt;b&gt;KDE&lt;/b&gt; — международное сообщество программистов, дизайнеров, переводчиков и других людей, так или иначе, посвящающих себя разработке &lt;a href=&quot;%1&quot;&gt;свободного программного обеспечения&lt;/a&gt;. Это сообщество поддерживает Платформу KDE (KDE Development Platform) и Набор прикладного ПО KDE (KDE Software Distribution).&lt;br /&gt;&lt;br /&gt;Не существует группы или организации, держащей под исключительным контролем действия или продукты KDE. Мы будем рады каждому, кто захочет внести свой вклад в развитие KDE.&lt;br /&gt;&lt;br /&gt;Для того чтобы больше узнать о проекте, зайдите на сайт &lt;a href=&quot;%2&quot;&gt;%2&lt;/a&gt;.&lt;/html&gt;</translation>
    </message>
    <message>
        <source>&lt;html&gt;You do not have to be a software developer to be a member of the KDE team. You can join the national teams that translate program interfaces. You can provide graphics, themes, sounds, and improved documentation. You decide!&lt;br /&gt;&lt;br /&gt;Visit &lt;a href=&quot;%1&quot;&gt;%1&lt;/a&gt; for information on some projects in which you can participate.&lt;br /&gt;&lt;br /&gt;If you need more information or documentation, then a visit to &lt;a href=&quot;%2&quot;&gt;%2&lt;/a&gt; will provide you with what you need.&lt;/html&gt;</source>
        <translation type="vanished">&lt;html&gt;Для того чтобы включиться в разработку KDE, не обязательно быть программистом. Вы можете помочь в переводе KDE на родной язык, создавать графику, стили, звуки, улучшать документацию — то есть тем, чем вы сами хотите заниматься.&lt;br /&gt;&lt;br /&gt;Список проектов, в которых вы могли бы принять участие, приведён на сайте &lt;a href=&quot;%1&quot;&gt;%1&lt;/a&gt;. Вполне возможно, какой-то из них вас заинтересует.&lt;br /&gt;&lt;br /&gt;Более подробные сведения и документацию можно найти на сайте &lt;a href=&quot;%2&quot;&gt;%2&lt;/a&gt;.&lt;/html&gt;</translation>
    </message>
    <message>
        <source>&lt;html&gt;KDE software is and will always be available free of charge, however creating it is not free.&lt;br /&gt;&lt;br /&gt;To support development the KDE community has formed the KDE e.V., a non-profit organization legally founded in Germany. KDE e.V. represents the KDE community in legal and financial matters. See &lt;a href=&quot;%1&quot;&gt;%1&lt;/a&gt; for information on KDE e.V.&lt;br /&gt;&lt;br /&gt;KDE benefits from many kinds of contributions, including financial. We use the funds to reimburse members and others for expenses they incur when contributing. Further funds are used for legal support and organizing conferences and meetings. &lt;br /&gt; &lt;br /&gt;We would like to encourage you to support our efforts with a financial donation, using one of the ways described at &lt;a href=&quot;%2&quot;&gt;%2&lt;/a&gt;.&lt;br /&gt;&lt;br /&gt;Thank you very much in advance for your support.&lt;/html&gt;</source>
        <translation type="vanished">&lt;html&gt;Среда KDE распространяется бесплатно, но её создание требует затрат.&lt;br /&gt;&lt;br /&gt;Поэтому команда KDE основала Ассоциацию KDE, некоммерческую организацию, которая зарегистрирована в Германии. Ассоциация KDE представляет проект KDE в правовом и финансовом аспектах. Посетите &lt;a href=&quot;%1&quot;&gt;%1&lt;/a&gt; для получения более подробной информации об Ассоциации KDE.&lt;br /&gt;&lt;br /&gt;Финансовая поддержка идёт на благо KDE. Большая часть средств используется для возмещения расходов участников проекта, которые они несут при разработке KDE. Остальные средства используются для юридической поддержки и организации конференций и встреч. Вы можете поддержать KDE финансовым пожертвованием, которое может быть внесено одним из способов, описанных на странице &lt;a href=&quot;%2&quot;&gt;%2&lt;/a&gt;. &lt;br /&gt;&lt;br /&gt;Заранее благодарим за поддержку!&lt;/html&gt;</translation>
    </message>
    <message>
        <source>&amp;About</source>
        <comment>About KDE</comment>
        <translation type="vanished">О &amp;среде KDE</translation>
    </message>
    <message>
        <source>&amp;Report Bugs or Wishes</source>
        <translation type="vanished">&amp;Сообщить об ошибках или пожеланиях</translation>
    </message>
    <message>
        <source>&amp;Join KDE</source>
        <translation type="vanished">&amp;Присоединиться к сообществу KDE</translation>
    </message>
    <message>
        <source>&amp;Support KDE</source>
        <translation type="vanished">&amp;Поддержать KDE</translation>
    </message>
    <message>
        <source>Next</source>
        <comment>Opposite to Back</comment>
        <translation type="vanished">Далее</translation>
    </message>
    <message>
        <source>Finish</source>
        <translation type="vanished">Готово</translation>
    </message>
    <message>
        <source>Submit Bug Report</source>
        <translation type="vanished">Отправить отчёт об ошибке</translation>
    </message>
    <message>
        <source>Your email address. If incorrect, use the Configure Email button to change it</source>
        <translation type="vanished">Ваш электронный адрес. Если он неверен, нажмите кнопку «Настройка электронной почты» и измените его.</translation>
    </message>
    <message>
        <source>From:</source>
        <comment>Email sender address</comment>
        <translation type="vanished">Отправитель: </translation>
    </message>
    <message>
        <source>Configure Email...</source>
        <translation type="vanished">Параметры электронной почты...</translation>
    </message>
    <message>
        <source>The email address this bug report is sent to.</source>
        <translation type="vanished">Почтовый адрес для отправления сообщения об ошибке.</translation>
    </message>
    <message>
        <source>To:</source>
        <comment>Email receiver address</comment>
        <translation type="vanished">Получатель:</translation>
    </message>
    <message>
        <source>&amp;Send</source>
        <translation type="vanished">&amp;Отправить</translation>
    </message>
    <message>
        <source>Send bug report.</source>
        <translation type="vanished">Отправить сообщение об ошибке.</translation>
    </message>
    <message>
        <source>Send this bug report to %1.</source>
        <translation type="vanished">Отправить это сообщение об ошибке на %1.</translation>
    </message>
    <message>
        <source>The application for which you wish to submit a bug report - if incorrect, please use the Report Bug menu item of the correct application</source>
        <translation type="vanished">Приложение, содержащее описываемую ошибку. Если здесь указано не то приложение, используйте пункт меню «Отправить сообщение об ошибке» нужного приложения</translation>
    </message>
    <message>
        <source>Application: </source>
        <translation type="vanished">Приложение: </translation>
    </message>
    <message>
        <source>The version of this application - please make sure that no newer version is available before sending a bug report</source>
        <translation type="vanished">Версия программы. Прежде чем отправлять сообщение об ошибке, проверьте, не вышла ли более свежая версия.</translation>
    </message>
    <message>
        <source>Version:</source>
        <translation type="vanished">Версия:</translation>
    </message>
    <message>
        <source>no version set (programmer error)</source>
        <translation type="vanished">нет данных о версии (ошибка программиста!)</translation>
    </message>
    <message>
        <source>OS:</source>
        <translation type="vanished">Операционная система:</translation>
    </message>
    <message>
        <source>Compiler:</source>
        <translation type="vanished">Компилятор:</translation>
    </message>
    <message>
        <source>Se&amp;verity</source>
        <translation type="vanished">Степень &amp;важности</translation>
    </message>
    <message>
        <source>Critical</source>
        <translation type="vanished">Критическая ошибка</translation>
    </message>
    <message>
        <source>Grave</source>
        <translation type="vanished">Опасная ошибка</translation>
    </message>
    <message>
        <source>Normal</source>
        <comment>normal severity</comment>
        <translation type="vanished">Обычная ошибка</translation>
    </message>
    <message>
        <source>Wishlist</source>
        <translation type="vanished">Пожелание</translation>
    </message>
    <message>
        <source>Translation</source>
        <translation type="vanished">Ошибка в переводе</translation>
    </message>
    <message>
        <source>S&amp;ubject: </source>
        <translation type="vanished">&amp;Тема: </translation>
    </message>
    <message>
        <source>Enter the text (in English if possible) that you wish to submit for the bug report.
If you press &quot;Send&quot;, a mail message will be sent to the maintainer of this program.
</source>
        <translation type="vanished">Введите текст (желательно по-английски), который описывает ошибку.
Если вы нажмёте кнопку «Отправить», сообщение будет отправлено к ответственному за разработку этой программы.
</translation>
    </message>
    <message>
        <source>&lt;qt&gt;To submit a bug report, click on the button below. This will open a web browser window on &lt;a href=&quot;http://bugs.kde.org&quot;&gt;http://bugs.kde.org&lt;/a&gt; where you will find a form to fill in. The information displayed above will be transferred to that server.&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Для того, чтобы отправить сообщение об ошибке, нажмите на кнопку внизу. Откроется окно с адресом &lt;a href=&quot;http://bugs.kde.org&quot;&gt;http://bugs.kde.org&lt;/a&gt;, где можно будет заполнить форму. Информация будет отправлена на сервер учёта ошибок.&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>&amp;Launch Bug Report Wizard</source>
        <translation type="vanished">&amp;Запустить мастер сообщения об ошибке</translation>
    </message>
    <message>
        <source>unknown</source>
        <comment>unknown program name</comment>
        <translation type="vanished">неизвестная</translation>
    </message>
    <message>
        <source>You must specify both a subject and a description before the report can be sent.</source>
        <translation type="vanished">Перед отправкой отчёта необходимо указать тему и описание ошибки.</translation>
    </message>
    <message>
        <source>&lt;p&gt;You chose the severity &lt;b&gt;Critical&lt;/b&gt;. Please note that this severity is intended only for bugs that:&lt;/p&gt;&lt;ul&gt;&lt;li&gt;break unrelated software on the system (or the whole system)&lt;/li&gt;&lt;li&gt;cause serious data loss&lt;/li&gt;&lt;li&gt;introduce a security hole on the system where the affected package is installed&lt;/li&gt;&lt;/ul&gt;
&lt;p&gt;Does the bug you are reporting cause any of the above damage? If it does not, please select a lower severity. Thank you.&lt;/p&gt;</source>
        <translation type="vanished">&lt;p&gt;Выбран уровень ошибки &lt;b&gt;Критическая&lt;/b&gt;. Этот уровень подразумевает, что ошибка:&lt;/p&gt;&lt;ul&gt;&lt;li&gt;может вызвать сбой в работе других программ или системы в целом&lt;/li&gt;&lt;li&gt;привести к порче и утрате данных&lt;/li&gt;&lt;li&gt;нарушить безопасность системы, если установлен данный пакет&lt;/li&gt;&lt;/ul&gt;
&lt;p&gt;Является ли ошибка, о которой вы хотите сообщить, настолько серьёзной? Если нет, выберите другой, менее высокий уровень ошибки.&lt;/p&gt;</translation>
    </message>
    <message>
        <source>&lt;p&gt;You chose the severity &lt;b&gt;Grave&lt;/b&gt;. Please note that this severity is intended only for bugs that:&lt;/p&gt;&lt;ul&gt;&lt;li&gt;make the package in question unusable or mostly so&lt;/li&gt;&lt;li&gt;cause data loss&lt;/li&gt;&lt;li&gt;introduce a security hole allowing access to the accounts of users who use the affected package&lt;/li&gt;&lt;/ul&gt;
&lt;p&gt;Does the bug you are reporting cause any of the above damage? If it does not, please select a lower severity. Thank you.&lt;/p&gt;</source>
        <translation type="vanished">&lt;p&gt;Вы выбрали уровень ошибки &lt;b&gt;Опасная&lt;/b&gt;. Этот уровень подразумевает, что ошибка:&lt;/p&gt;&lt;ul&gt;&lt;li&gt;может вызвать неисправимый сбой в работе данного пакета&lt;/li&gt;&lt;li&gt;привести к утрате данных&lt;/li&gt;&lt;li&gt;нарушить безопасность системы и открыть доступ к файлам пользователей, установивших данный пакет&lt;/li&gt;&lt;/ul&gt;
&lt;p&gt;Является ли ошибка, о которой вы хотите сообщить, настолько серьёзной? Если нет, выберите другой, менее высокий уровень ошибки.&lt;/p&gt;</translation>
    </message>
    <message>
        <source>Unable to send the bug report.
Please submit a bug report manually....
See http://bugs.kde.org/ for instructions.</source>
        <translation type="vanished">Не удалось отправить сообщение об ошибке.
Попробуйте отправить его вручную на сайте http://bugs.kde.org/</translation>
    </message>
    <message>
        <source>Bug report sent, thank you for your input.</source>
        <translation type="vanished">Сообщение об ошибке отправлено, спасибо.</translation>
    </message>
    <message>
        <source>Close and discard
edited message?</source>
        <translation type="vanished">Закрыть и отменить
введённое сообщение?</translation>
    </message>
    <message>
        <source>Close Message</source>
        <translation type="vanished">Закрыть сообщение</translation>
    </message>
    <message>
        <source>Configure</source>
        <translation type="vanished">Настройка</translation>
    </message>
    <message>
        <source>Job</source>
        <translation type="vanished">Задание</translation>
    </message>
    <message>
        <source>Job Control</source>
        <translation type="vanished">Управление заданиями</translation>
    </message>
    <message>
        <source>Scheduled printing:</source>
        <translation type="vanished">Отложенная печать:</translation>
    </message>
    <message>
        <source>Billing information:</source>
        <translation type="vanished">Стоимость печати:</translation>
    </message>
    <message>
        <source>Job priority:</source>
        <translation type="vanished">Приоритет:</translation>
    </message>
    <message>
        <source>Job Options</source>
        <translation type="vanished">Параметры задания</translation>
    </message>
    <message>
        <source>Option</source>
        <translation type="vanished">Параметр</translation>
    </message>
    <message>
        <source>Value</source>
        <translation type="vanished">Значение</translation>
    </message>
    <message>
        <source>Print Immediately</source>
        <translation type="vanished">Печатать немедленно</translation>
    </message>
    <message>
        <source>Hold Indefinitely</source>
        <translation type="vanished">Удерживать до следующих распоряжений</translation>
    </message>
    <message>
        <source>Day (06:00 to 17:59)</source>
        <translation type="vanished">Днём (06:00 — 17:59)</translation>
    </message>
    <message>
        <source>Night (18:00 to 05:59)</source>
        <translation type="vanished">Ночью (18:00 — 05:59)</translation>
    </message>
    <message>
        <source>Second Shift (16:00 to 23:59)</source>
        <translation type="vanished">Во вторую смену (16:00 - 23:59)</translation>
    </message>
    <message>
        <source>Third Shift (00:00 to 07:59)</source>
        <translation type="vanished">В третью смену (00:00 - 07:59)</translation>
    </message>
    <message>
        <source>Weekend (Saturday to Sunday)</source>
        <translation type="vanished">В выходные (суббота, воскресенье)</translation>
    </message>
    <message>
        <source>Specific Time</source>
        <translation type="vanished">В указанное время</translation>
    </message>
    <message>
        <source>Pages</source>
        <translation type="vanished">Страницы</translation>
    </message>
    <message>
        <source>Pages Per Sheet</source>
        <translation type="vanished">Страниц на лист</translation>
    </message>
    <message>
        <source>1</source>
        <translation type="vanished">1</translation>
    </message>
    <message>
        <source>6</source>
        <translation type="vanished">6</translation>
    </message>
    <message>
        <source>2</source>
        <translation type="vanished">2</translation>
    </message>
    <message>
        <source>9</source>
        <translation type="vanished">9</translation>
    </message>
    <message>
        <source>4</source>
        <translation type="vanished">4</translation>
    </message>
    <message>
        <source>16</source>
        <translation type="vanished">16</translation>
    </message>
    <message>
        <source>Banner Pages</source>
        <translation type="vanished">Печатать страницы-разделители</translation>
    </message>
    <message>
        <source>Start</source>
        <comment>Banner page at start</comment>
        <translation type="vanished">В начале</translation>
    </message>
    <message>
        <source>End</source>
        <comment>Banner page at end</comment>
        <translation type="vanished">В конце</translation>
    </message>
    <message>
        <source>Page Label</source>
        <translation type="vanished">Название страницы</translation>
    </message>
    <message>
        <source>Page Border</source>
        <translation type="vanished">Рамка</translation>
    </message>
    <message>
        <source>Mirror Pages</source>
        <translation type="vanished">Зеркальное отражение</translation>
    </message>
    <message>
        <source>Mirror pages along vertical axis</source>
        <translation type="vanished">Зеркально отражать по вертикали</translation>
    </message>
    <message>
        <source>Left to Right, Top to Bottom</source>
        <translation type="vanished">Слева направо, сверху вниз</translation>
    </message>
    <message>
        <source>Left to Right, Bottom to Top</source>
        <translation type="vanished">Слева направо, снизу вверх</translation>
    </message>
    <message>
        <source>Right to Left, Bottom to Top</source>
        <translation type="vanished">Справа налево, снизу вверх</translation>
    </message>
    <message>
        <source>Right to Left, Top to Bottom</source>
        <translation type="vanished">Справа налево, сверху вниз</translation>
    </message>
    <message>
        <source>Bottom to Top, Left to Right</source>
        <translation type="vanished">Снизу вверх, слева направо</translation>
    </message>
    <message>
        <source>Bottom to Top, Right to Left</source>
        <translation type="vanished">Снизу вверх, справа налево</translation>
    </message>
    <message>
        <source>Top to Bottom, Left to Right</source>
        <translation type="vanished">Сверху вниз, слева направо</translation>
    </message>
    <message>
        <source>Top to Bottom, Right to Left</source>
        <translation type="vanished">Сверху вниз, справа налево</translation>
    </message>
    <message>
        <source>None</source>
        <comment>No border line</comment>
        <translation type="vanished">Без рамки</translation>
    </message>
    <message>
        <source>Single Line</source>
        <translation type="vanished">Одна линия</translation>
    </message>
    <message>
        <source>Single Thick Line</source>
        <translation type="vanished">Одна толстая линия</translation>
    </message>
    <message>
        <source>Double Line</source>
        <translation type="vanished">Двойная линия</translation>
    </message>
    <message>
        <source>Double Thick Line</source>
        <translation type="vanished">Двойная толстая линия</translation>
    </message>
    <message>
        <source>None</source>
        <comment>Banner page</comment>
        <translation type="vanished">Нет</translation>
    </message>
    <message>
        <source>Standard</source>
        <comment>Banner page</comment>
        <translation type="vanished">Стандартная</translation>
    </message>
    <message>
        <source>Unclassified</source>
        <comment>Banner page</comment>
        <translation type="vanished">Не классифицируется</translation>
    </message>
    <message>
        <source>Confidential</source>
        <comment>Banner page</comment>
        <translation type="vanished">Конфиденциально</translation>
    </message>
    <message>
        <source>Classified</source>
        <comment>Banner page</comment>
        <translation type="vanished">Классифицируется</translation>
    </message>
    <message>
        <source>Secret</source>
        <comment>Banner page</comment>
        <translation type="vanished">Секретно</translation>
    </message>
    <message>
        <source>Top Secret</source>
        <comment>Banner page</comment>
        <translation type="vanished">Особо секретно</translation>
    </message>
    <message>
        <source>All Pages</source>
        <translation type="vanished">Все страницы</translation>
    </message>
    <message>
        <source>Odd Pages</source>
        <translation type="vanished">Нечётные страницы</translation>
    </message>
    <message>
        <source>Even Pages</source>
        <translation type="vanished">Чётные страницы</translation>
    </message>
    <message>
        <source>Page Set</source>
        <translation type="vanished">Набор страниц</translation>
    </message>
    <message>
        <source>Print</source>
        <comment>@title:window</comment>
        <translation type="vanished">Печать</translation>
    </message>
    <message>
        <source>&amp;Try</source>
        <translation type="vanished">&amp;Попробовать</translation>
    </message>
    <message>
        <source>modified</source>
        <translation type="vanished">изменён</translation>
    </message>
    <message>
        <source> – </source>
        <comment>Document/application separator in titlebar</comment>
        <translation type="vanished"> — </translation>
    </message>
    <message>
        <source>&amp;Details</source>
        <translation type="vanished">&amp;Подробности</translation>
    </message>
    <message>
        <source>Get help...</source>
        <translation type="vanished">Справка...</translation>
    </message>
    <message>
        <source>--- separator ---</source>
        <translation type="vanished">--- разделитель ---</translation>
    </message>
    <message>
        <source>Change Text</source>
        <translation type="vanished">Изменить текст</translation>
    </message>
    <message>
        <source>Icon te&amp;xt:</source>
        <translation type="vanished">&amp;Текст кнопки:</translation>
    </message>
    <message>
        <source>&amp;Hide text when toolbar shows text alongside icons</source>
        <translation type="vanished">&amp;Скрывать текст при показе подписей сбоку от значков</translation>
    </message>
    <message>
        <source>Configure Toolbars</source>
        <translation type="vanished">Настройка панелей инструментов</translation>
    </message>
    <message>
        <source>Do you really want to reset all toolbars of this application to their default? The changes will be applied immediately.</source>
        <translation type="vanished">Восстановить панели инструментов по умолчанию? Изменения вступят в силу немедленно.</translation>
    </message>
    <message>
        <source>Reset Toolbars</source>
        <translation type="vanished">Восстановить панели инструментов</translation>
    </message>
    <message>
        <source>Reset</source>
        <translation type="vanished">Восстановить</translation>
    </message>
    <message>
        <source>&amp;Toolbar:</source>
        <translation type="vanished">&amp;Панель инструментов:</translation>
    </message>
    <message>
        <source>A&amp;vailable actions:</source>
        <translation type="vanished">&amp;Доступные действия:</translation>
    </message>
    <message>
        <source>Filter</source>
        <translation type="vanished">Фильтр</translation>
    </message>
    <message>
        <source>Curr&amp;ent actions:</source>
        <translation type="vanished">&amp;Текущие действия:</translation>
    </message>
    <message>
        <source>Change &amp;Icon...</source>
        <translation type="vanished">Изменить &amp;значок...</translation>
    </message>
    <message>
        <source>Change Te&amp;xt...</source>
        <translation type="vanished">Изменить текст...</translation>
    </message>
    <message>
        <source>%1</source>
        <comment>@item:intable Action name in toolbar editor</comment>
        <translation type="vanished">%1</translation>
    </message>
    <message>
        <source>This element will be replaced with all the elements of an embedded component.</source>
        <translation type="vanished">Данный элемент будет полностью замещён элементами встроенного компонента.</translation>
    </message>
    <message>
        <source>&lt;Merge&gt;</source>
        <translation type="vanished">&lt;Точка вставки&gt;</translation>
    </message>
    <message>
        <source>&lt;Merge %1&gt;</source>
        <translation type="vanished">&lt;Точка вставки %1&gt;</translation>
    </message>
    <message>
        <source>This is a dynamic list of actions. You can move it, but if you remove it you will not be able to re-add it.</source>
        <translation type="vanished">Это список действий. Вы можете перемещать его, однако при удалении восстановить его будет невозможно.</translation>
    </message>
    <message>
        <source>ActionList: %1</source>
        <translation type="vanished">Список действий: %1</translation>
    </message>
    <message>
        <source>%1</source>
        <comment>@label Action tooltip in toolbar editor, below the action list</comment>
        <translation type="vanished">%1</translation>
    </message>
    <message>
        <source>Change Icon</source>
        <translation type="vanished">Изменить значок</translation>
    </message>
    <message>
        <source>Manage Link</source>
        <translation type="vanished">Ссылка</translation>
    </message>
    <message>
        <source>Link Text:</source>
        <translation type="vanished">Текст ссылки:</translation>
    </message>
    <message>
        <source>Link URL:</source>
        <translation type="vanished">URL ссылки:</translation>
    </message>
    <message>
        <source>%1</source>
        <comment>@action:button filter-yes</comment>
        <translation type="vanished">%1</translation>
    </message>
    <message>
        <source>%1</source>
        <comment>@action:button filter-no</comment>
        <translation type="vanished">%1</translation>
    </message>
    <message>
        <source>%1</source>
        <comment>@action:button filter-continue</comment>
        <translation type="vanished">%1</translation>
    </message>
    <message>
        <source>%1</source>
        <comment>@action:button filter-cancel</comment>
        <translation type="vanished">%1</translation>
    </message>
    <message>
        <source>.</source>
        <comment>@action:button post-filter</comment>
        <translation type="vanished">.</translation>
    </message>
    <message>
        <source>Details</source>
        <translation type="vanished">Сведения</translation>
    </message>
    <message>
        <source>Question</source>
        <translation type="vanished">Вопрос</translation>
    </message>
    <message>
        <source>Do not ask again</source>
        <translation type="vanished">Не задавать больше этот вопрос</translation>
    </message>
    <message>
        <source>Warning</source>
        <translation type="vanished">Предупреждение</translation>
    </message>
    <message>
        <source>Error</source>
        <translation type="vanished">Ошибка</translation>
    </message>
    <message>
        <source>Sorry</source>
        <translation type="vanished">Ошибка</translation>
    </message>
    <message>
        <source>Information</source>
        <translation type="vanished">Сведения</translation>
    </message>
    <message>
        <source>Do not show this message again</source>
        <translation type="vanished">Не показывать больше это сообщение</translation>
    </message>
    <message>
        <source>Password:</source>
        <translation type="vanished">Пароль:</translation>
    </message>
    <message>
        <source>Password</source>
        <translation type="vanished">Пароль</translation>
    </message>
    <message>
        <source>Supply a username and password below.</source>
        <translation type="vanished">Введите имя пользователя и пароль.</translation>
    </message>
    <message>
        <source>No password, use anonymous (or guest) login</source>
        <translation type="vanished">Без пароля, анонимный или гостевой вход</translation>
    </message>
    <message>
        <source>Use this password:</source>
        <translation type="vanished">Указать пароль:</translation>
    </message>
    <message>
        <source>Username:</source>
        <translation type="vanished">Имя пользователя:</translation>
    </message>
    <message>
        <source>Domain:</source>
        <translation type="vanished">Домен:</translation>
    </message>
    <message>
        <source>Remember password</source>
        <translation type="vanished">Сохранить пароль</translation>
    </message>
    <message>
        <source>Select Region of Image</source>
        <translation type="vanished">Выбор области изображения</translation>
    </message>
    <message>
        <source>Please click and drag on the image to select the region of interest:</source>
        <translation type="vanished">Нажмите кнопку мыши и перемещайте указатель, чтобы выбрать интересующую область:</translation>
    </message>
    <message>
        <source>Default:</source>
        <translation type="vanished">По умолчанию:</translation>
    </message>
    <message>
        <source>None</source>
        <comment>No shortcut defined</comment>
        <translation type="vanished">Не определена</translation>
    </message>
    <message>
        <source>Custom:</source>
        <translation type="vanished">Другая:</translation>
    </message>
    <message>
        <source>Shortcut Schemes</source>
        <translation type="vanished">Схемы привязок</translation>
    </message>
    <message>
        <source>Current scheme:</source>
        <translation type="vanished">Текущая схема:</translation>
    </message>
    <message>
        <source>New...</source>
        <translation type="vanished">Создать...</translation>
    </message>
    <message>
        <source>Delete</source>
        <translation type="vanished">Удалить</translation>
    </message>
    <message>
        <source>More Actions</source>
        <translation type="vanished">Дополнительно</translation>
    </message>
    <message>
        <source>Save as Scheme Defaults</source>
        <translation type="vanished">Сохранить как схему по умолчанию</translation>
    </message>
    <message>
        <source>Export Scheme...</source>
        <translation type="vanished">Экспорт схемы...</translation>
    </message>
    <message>
        <source>Name for New Scheme</source>
        <translation type="vanished">Название новой схемы</translation>
    </message>
    <message>
        <source>Name for new scheme:</source>
        <translation type="vanished">Название новой схемы:</translation>
    </message>
    <message>
        <source>New Scheme</source>
        <translation type="vanished">Новая схема</translation>
    </message>
    <message>
        <source>A scheme with this name already exists.</source>
        <translation type="vanished">Схема с таким названием уже существует</translation>
    </message>
    <message>
        <source>Do you really want to delete the scheme %1?
Note that this will not remove any system wide shortcut schemes.</source>
        <translation type="vanished">Удалить схему «%1»?</translation>
    </message>
    <message>
        <source>Export to Location</source>
        <translation type="vanished">Экспорт в папку</translation>
    </message>
    <message>
        <source>Could not export shortcuts scheme because the location is invalid.</source>
        <translation type="vanished">Невозможно экспортировать схему в неправильно заданную папку.</translation>
    </message>
    <message>
        <source>The current shortcut scheme is modified. Save before switching to the new one?</source>
        <translation type="vanished">Текущая схема привязок была изменена. Сохранить изменения перед переключением на другую схему.</translation>
    </message>
    <message>
        <source>Configure Shortcuts</source>
        <translation type="vanished">Настройка комбинаций клавиш</translation>
    </message>
    <message>
        <source>Print</source>
        <translation type="vanished">Печать</translation>
    </message>
    <message>
        <source>Reset to Defaults</source>
        <translation type="vanished">По умолчанию</translation>
    </message>
    <message>
        <source>Search interactively for shortcut names (e.g. Copy) or combination of keys (e.g. Ctrl+C) by typing them here.</source>
        <translation type="vanished">Поиск по мере набора по именам комбинаций клавиш (например, Копировать) или по самим комбинациям (например, Ctrl+C).</translation>
    </message>
    <message>
        <source>Here you can see a list of key bindings, i.e. associations between actions (e.g. &apos;Copy&apos;) shown in the left column and keys or combination of keys (e.g. Ctrl+V) shown in the right column.</source>
        <translation type="vanished">Здесь показан список привязок &lt;i&gt;комбинаций клавиш&lt;/i&gt;, то есть действий (например, Копировать) из левого столбца, вызываемых при нажатии клавиш или их сочетаний (например, Ctrl+V), указанных в правом столбце.</translation>
    </message>
    <message>
        <source>Action</source>
        <translation type="vanished">Действие</translation>
    </message>
    <message>
        <source>Shortcut</source>
        <translation type="vanished">Комбинация клавиш</translation>
    </message>
    <message>
        <source>Alternate</source>
        <translation type="vanished">Дополнительная</translation>
    </message>
    <message>
        <source>Global</source>
        <translation type="vanished">Глобальная</translation>
    </message>
    <message>
        <source>Global Alternate</source>
        <translation type="vanished">Дополнительная глобальная</translation>
    </message>
    <message>
        <source>Mouse Button Gesture</source>
        <translation type="vanished">Кнопка росчерка мышью</translation>
    </message>
    <message>
        <source>Mouse Shape Gesture</source>
        <translation type="vanished">Фигура росчерка мышью</translation>
    </message>
    <message>
        <source>Unknown</source>
        <translation type="vanished">неизвестный</translation>
    </message>
    <message>
        <source>Key Conflict</source>
        <translation type="vanished">Конфликт клавиш</translation>
    </message>
    <message>
        <source>The &apos;%1&apos; shape gesture has already been allocated to the &quot;%2&quot; action.
Do you want to reassign it from that action to the current one?</source>
        <translation type="vanished">Фигура росчерка %1 уже связана с действием «%2».
Связать росчерк с текущим действием?</translation>
    </message>
    <message>
        <source>Reassign</source>
        <translation type="vanished">Связать с новым</translation>
    </message>
    <message>
        <source>The &apos;%1&apos; rocker gesture has already been allocated to the &quot;%2&quot; action.
Do you want to reassign it from that action to the current one?</source>
        <translation type="vanished">Зачёркивающий росчерк %1 уже связан с действием «%2».
Связать росчерк с текущим действием?</translation>
    </message>
    <message>
        <source>Shortcuts for %1</source>
        <comment>header for an applications shortcut list</comment>
        <translation type="vanished">Комбинации клавиш для %1</translation>
    </message>
    <message>
        <source>Main:</source>
        <translation type="vanished">Основная:</translation>
    </message>
    <message>
        <source>Alternate:</source>
        <translation type="vanished">Дополнительная:</translation>
    </message>
    <message>
        <source>Global:</source>
        <translation type="vanished">Глобальная:</translation>
    </message>
    <message>
        <source>Action Name</source>
        <translation type="vanished">Название действия</translation>
    </message>
    <message>
        <source>Shortcuts</source>
        <translation type="vanished">Комбинации клавиш</translation>
    </message>
    <message>
        <source>Description</source>
        <translation type="vanished">Описание</translation>
    </message>
    <message>
        <source>%1</source>
        <comment>@item:intable Action name in shortcuts configuration</comment>
        <translation type="vanished">%1</translation>
    </message>
    <message>
        <source>Switch Application Language</source>
        <translation type="vanished">Смена языка приложения</translation>
    </message>
    <message>
        <source>Please choose the language which should be used for this application:</source>
        <translation type="vanished">Выберите язык интерфейса, который должен использоваться в этом приложении:</translation>
    </message>
    <message>
        <source>Add Fallback Language</source>
        <translation type="vanished">Добавить резервный язык</translation>
    </message>
    <message>
        <source>Adds one more language which will be used if other translations do not contain a proper translation.</source>
        <translation type="vanished">Установить один или несколько языков, которые будут использоваться, если нет перевода на основной язык.</translation>
    </message>
    <message>
        <source>The language for this application has been changed. The change will take effect the next time the application is started.</source>
        <translation type="vanished">Язык интерфейса приложения изменён. Это изменение вступит в силу при следующем запуске приложения.</translation>
    </message>
    <message>
        <source>Application Language Changed</source>
        <translation type="vanished">Изменён язык приложения</translation>
    </message>
    <message>
        <source>Primary language:</source>
        <translation type="vanished">Основной язык:</translation>
    </message>
    <message>
        <source>Fallback language:</source>
        <translation type="vanished">Резервный язык:</translation>
    </message>
    <message>
        <source>Remove</source>
        <translation type="vanished">Удалить</translation>
    </message>
    <message>
        <source>This is the main application language which will be used first, before any other languages.</source>
        <translation type="vanished">Это основной язык интерфейса приложения, который будет использоваться первым, перед всеми остальными языками.</translation>
    </message>
    <message>
        <source>This is the language which will be used if any previous languages do not contain a proper translation.</source>
        <translation type="vanished">Это язык, который будет использоваться, если перевод на основной язык отсутствует.</translation>
    </message>
    <message>
        <source>Tip of the Day</source>
        <translation type="vanished">Совет дня</translation>
    </message>
    <message>
        <source>Did you know...?
</source>
        <translation type="vanished">Знаете ли вы...?
</translation>
    </message>
    <message>
        <source>&amp;Show tips on startup</source>
        <translation type="vanished">&amp;Показывать советы при запуске</translation>
    </message>
    <message>
        <source>&amp;Previous</source>
        <translation type="vanished">&amp;Предыдущее</translation>
    </message>
    <message>
        <source>&amp;Next</source>
        <comment>Opposite to Previous</comment>
        <translation type="vanished">&amp;Далее</translation>
    </message>
    <message>
        <source>Find Next</source>
        <translation type="vanished">Найти далее</translation>
    </message>
    <message>
        <source>&lt;qt&gt;Find next occurrence of &apos;&lt;b&gt;%1&lt;/b&gt;&apos;?&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Найти следующее вхождение «&lt;b&gt;%1&lt;/b&gt;»?&lt;/qt&gt;</translation>
    </message>
    <message numerus="yes">
        <source>1 match found.</source>
        <translation type="vanished">
            <numerusform>Найдено %1 совпадение.</numerusform>
            <numerusform>Найдено %1 совпадения.</numerusform>
            <numerusform>Найдено %1 совпадений.</numerusform>
        </translation>
        <extra-po-msgid_plural>%1 matches found.</extra-po-msgid_plural>
    </message>
    <message>
        <source>&lt;qt&gt;No matches found for &apos;&lt;b&gt;%1&lt;/b&gt;&apos;.&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Не найдено совпадений для «&lt;b&gt;%1&lt;/b&gt;».&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>No matches found for &apos;&lt;b&gt;%1&lt;/b&gt;&apos;.</source>
        <translation type="vanished">Нет совпадений для «&lt;b&gt;%1&lt;/b&gt;».</translation>
    </message>
    <message>
        <source>Beginning of document reached.</source>
        <translation type="vanished">Достигнуто начало документа.</translation>
    </message>
    <message>
        <source>End of document reached.</source>
        <translation type="vanished">Достигнут конец документа.</translation>
    </message>
    <message>
        <source>Continue from the end?</source>
        <translation type="vanished">Продолжить с конца?</translation>
    </message>
    <message>
        <source>Continue from the beginning?</source>
        <translation type="vanished">Продолжить с начала?</translation>
    </message>
    <message>
        <source>Find Text</source>
        <translation type="vanished">Найти текст</translation>
    </message>
    <message>
        <source>Find</source>
        <comment>@title:group</comment>
        <translation type="vanished">Поиск</translation>
    </message>
    <message>
        <source>&amp;Text to find:</source>
        <translation type="vanished">Искать &amp;текст:</translation>
    </message>
    <message>
        <source>Regular e&amp;xpression</source>
        <translation type="vanished">&amp;Регулярное выражение</translation>
    </message>
    <message>
        <source>&amp;Edit...</source>
        <translation type="vanished">&amp;Изменить...</translation>
    </message>
    <message>
        <source>Replace With</source>
        <translation type="vanished">Заменить на</translation>
    </message>
    <message>
        <source>Replace&amp;ment text:</source>
        <translation type="vanished">Текст для за&amp;мены:</translation>
    </message>
    <message>
        <source>Use p&amp;laceholders</source>
        <translation type="vanished">&amp;Использовать заполнители</translation>
    </message>
    <message>
        <source>Insert Place&amp;holder</source>
        <translation type="vanished">Вставить &amp;заполнитель</translation>
    </message>
    <message>
        <source>Options</source>
        <translation type="vanished">Параметры</translation>
    </message>
    <message>
        <source>C&amp;ase sensitive</source>
        <translation type="vanished">С &amp;учётом регистра</translation>
    </message>
    <message>
        <source>&amp;Whole words only</source>
        <translation type="vanished">&amp;Только полные слова</translation>
    </message>
    <message>
        <source>From c&amp;ursor</source>
        <translation type="vanished">От к&amp;урсора</translation>
    </message>
    <message>
        <source>Find &amp;backwards</source>
        <translation type="vanished">Ис&amp;кать назад</translation>
    </message>
    <message>
        <source>&amp;Selected text</source>
        <translation type="vanished">&amp;Выделенный текст</translation>
    </message>
    <message>
        <source>&amp;Prompt on replace</source>
        <translation type="vanished">&amp;Спрашивать при замене</translation>
    </message>
    <message>
        <source>Start replace</source>
        <translation type="vanished">Начать замену</translation>
    </message>
    <message>
        <source>&lt;qt&gt;If you press the &lt;b&gt;Replace&lt;/b&gt; button, the text you entered above is searched for within the document and any occurrence is replaced with the replacement text.&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Если вы нажмёте копку &lt;b&gt;Заменить&lt;/b&gt;, будет произведён поиск введённого вами выражения, а затем замена каждого из найденных совпадений на текст замены &lt;/qt&gt;</translation>
    </message>
    <message>
        <source>&amp;Find</source>
        <translation type="vanished">&amp;Поиск</translation>
    </message>
    <message>
        <source>Start searching</source>
        <translation type="vanished">Начать поиск</translation>
    </message>
    <message>
        <source>&lt;qt&gt;If you press the &lt;b&gt;Find&lt;/b&gt; button, the text you entered above is searched for within the document.&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Если вы нажмёте кнопку &lt;b&gt;Найти&lt;/b&gt;, будет выполнен поиск введённого вами текста по всему документу.&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>Enter a pattern to search for, or select a previous pattern from the list.</source>
        <translation type="vanished">Введите шаблон для поиска, или выберите предыдущий шаблон из списка.</translation>
    </message>
    <message>
        <source>If enabled, search for a regular expression.</source>
        <translation type="vanished">Если включено, искать регулярное выражение.</translation>
    </message>
    <message>
        <source>Click here to edit your regular expression using a graphical editor.</source>
        <translation type="vanished">Нажмите, чтобы изменить ваше регулярное выражение при помощи графического редактора.</translation>
    </message>
    <message>
        <source>Enter a replacement string, or select a previous one from the list.</source>
        <translation type="vanished">Введите строку для замены, или выберите предыдущую из списка.</translation>
    </message>
    <message>
        <source>&lt;qt&gt;If enabled, any occurrence of &lt;code&gt;&lt;b&gt;\N&lt;/b&gt;&lt;/code&gt;, where &lt;code&gt;&lt;b&gt;N&lt;/b&gt;&lt;/code&gt; is an integer number, will be replaced with the corresponding capture (&quot;parenthesized substring&quot;) from the pattern.&lt;p&gt;To include (a literal &lt;code&gt;&lt;b&gt;\N&lt;/b&gt;&lt;/code&gt; in your replacement, put an extra backslash in front of it, like &lt;code&gt;&lt;b&gt;\\N&lt;/b&gt;&lt;/code&gt;.&lt;/p&gt;&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Если установлен флажок, любое вхождение вида &lt;code&gt;&lt;b&gt;\N&lt;/b&gt;&lt;/code&gt;, где &lt;code&gt;&lt;b&gt;N&lt;/b&gt;&lt;/code&gt; — целое число, будет заменено N-ым &lt;i&gt;захватом&lt;/i&gt; (компонентом найденной строки; компоненты обозначаются в регулярном выражении круглыми скобками).&lt;p&gt;Для того, чтобы последовательность &lt;code&gt;&lt;b&gt;\N&lt;/b&gt;&lt;/code&gt; не интерпретировалась (включалась в замены буквально), поместите перед ней экранированную обратную косую черту: &lt;code&gt;&lt;b&gt;\\N&lt;/b&gt;&lt;/code&gt;.&lt;/p&gt;&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>Click for a menu of available captures.</source>
        <translation type="vanished">Нажмите для получения списка доступных захватов.</translation>
    </message>
    <message>
        <source>Require word boundaries in both ends of a match to succeed.</source>
        <translation type="vanished">Соответствие должно быть отдельным словом.</translation>
    </message>
    <message>
        <source>Start searching at the current cursor location rather than at the top.</source>
        <translation type="vanished">Начать поиск от позиции курсора, а не с начала документа.</translation>
    </message>
    <message>
        <source>Only search within the current selection.</source>
        <translation type="vanished">Искать только в выделенном фрагменте.</translation>
    </message>
    <message>
        <source>Perform a case sensitive search: entering the pattern &apos;Joe&apos; will not match &apos;joe&apos; or &apos;JOE&apos;, only &apos;Joe&apos;.</source>
        <translation type="vanished">Искать с учётом регистра. В этом случае при поиске строки «Все» не будут найдены слова «все» или «ВСЕ», только «Все».</translation>
    </message>
    <message>
        <source>Search backwards.</source>
        <translation type="vanished">Искать назад.</translation>
    </message>
    <message>
        <source>Ask before replacing each match found.</source>
        <translation type="vanished">Спрашивать при каждой замене.</translation>
    </message>
    <message>
        <source>Any Character</source>
        <translation type="vanished">Любой символ</translation>
    </message>
    <message>
        <source>Start of Line</source>
        <translation type="vanished">Начало строки</translation>
    </message>
    <message>
        <source>End of Line</source>
        <translation type="vanished">Конец строки</translation>
    </message>
    <message>
        <source>Set of Characters</source>
        <translation type="vanished">Набор символов</translation>
    </message>
    <message>
        <source>Repeats, Zero or More Times</source>
        <translation type="vanished">Повторы, ноль или более раз</translation>
    </message>
    <message>
        <source>Repeats, One or More Times</source>
        <translation type="vanished">Повторы, один или более раз</translation>
    </message>
    <message>
        <source>Optional</source>
        <translation type="vanished">Дополнительно</translation>
    </message>
    <message>
        <source>Escape</source>
        <translation type="vanished">Экранирующий символ</translation>
    </message>
    <message>
        <source>TAB</source>
        <translation type="vanished">Табуляция</translation>
    </message>
    <message>
        <source>Newline</source>
        <translation type="vanished">Перевод строки</translation>
    </message>
    <message>
        <source>Carriage Return</source>
        <translation type="vanished">Возврат каретки</translation>
    </message>
    <message>
        <source>White Space</source>
        <translation type="vanished">Пробельный символ</translation>
    </message>
    <message>
        <source>Digit</source>
        <translation type="vanished">Цифра</translation>
    </message>
    <message>
        <source>Complete Match</source>
        <translation type="vanished">Полное соответствие</translation>
    </message>
    <message>
        <source>Captured Text (%1)</source>
        <translation type="vanished">Захваченный текст (%1)</translation>
    </message>
    <message>
        <source>You must enter some text to search for.</source>
        <translation type="vanished">Необходимо ввести текст для поиска.</translation>
    </message>
    <message>
        <source>Invalid regular expression.</source>
        <translation type="vanished">Неверное регулярное выражение.</translation>
    </message>
    <message>
        <source>Replace</source>
        <translation type="vanished">Заменить</translation>
    </message>
    <message>
        <source>&amp;All</source>
        <comment>@action:button Replace all occurrences</comment>
        <translation type="vanished">&amp;Все</translation>
    </message>
    <message>
        <source>&amp;Skip</source>
        <translation type="vanished">Пропу&amp;стить</translation>
    </message>
    <message>
        <source>Replace &apos;%1&apos; with &apos;%2&apos;?</source>
        <translation type="vanished">Заменить «%1» на «%2»?</translation>
    </message>
    <message>
        <source>No text was replaced.</source>
        <translation type="vanished">Замена текста не была произведена.</translation>
    </message>
    <message numerus="yes">
        <source>1 replacement done.</source>
        <translation type="vanished">
            <numerusform>Сделана %1 замена.</numerusform>
            <numerusform>Сделаны %1 замены.</numerusform>
            <numerusform>Сделано %1 замен.</numerusform>
        </translation>
        <extra-po-msgid_plural>%1 replacements done.</extra-po-msgid_plural>
    </message>
    <message>
        <source>Do you want to restart search from the end?</source>
        <translation type="vanished">Продолжить поиск с конца?</translation>
    </message>
    <message>
        <source>Do you want to restart search at the beginning?</source>
        <translation type="vanished">Продолжить поиск с начала?</translation>
    </message>
    <message>
        <source>Restart</source>
        <comment>@action:button Restart find &amp; replace</comment>
        <translation type="vanished">Повторить</translation>
    </message>
    <message>
        <source>Stop</source>
        <comment>@action:button Stop find &amp; replace</comment>
        <translation type="vanished">Остановить</translation>
    </message>
    <message>
        <source>Your replacement string is referencing a capture greater than &apos;\%1&apos;, </source>
        <translation type="vanished">Строка замены ссылается на захват, больший чем \%1, </translation>
    </message>
    <message numerus="yes">
        <source>but your pattern only defines 1 capture.</source>
        <translation type="vanished">
            <numerusform>но шаблон определяет только %1 захват.</numerusform>
            <numerusform>но шаблон определяет только %1 захвата.</numerusform>
            <numerusform>но шаблон определяет только %1 захватов.</numerusform>
        </translation>
        <extra-po-msgid_plural>but your pattern only defines %1 captures.</extra-po-msgid_plural>
    </message>
    <message>
        <source>but your pattern defines no captures.</source>
        <translation type="vanished">но шаблон не определяет захватов.</translation>
    </message>
    <message>
        <source>
Please correct.</source>
        <translation type="vanished">
Исправьте, пожалуйста.</translation>
    </message>
    <message>
        <source>Sans Serif</source>
        <comment>@item Font name</comment>
        <translation type="vanished">Sans Serif</translation>
    </message>
    <message>
        <source>Serif</source>
        <comment>@item Font name</comment>
        <translation type="vanished">Serif</translation>
    </message>
    <message>
        <source>Monospace</source>
        <comment>@item Font name</comment>
        <translation type="vanished">Monospace</translation>
    </message>
    <message>
        <source>%1</source>
        <comment>@item Font name</comment>
        <translation type="vanished">%1</translation>
    </message>
    <message>
        <source>%1 [%2]</source>
        <comment>@item Font name [foundry]</comment>
        <translation type="vanished">%1 [%2]</translation>
    </message>
    <message>
        <source>Here you can choose the font to be used.</source>
        <comment>@info:whatsthis</comment>
        <translation type="vanished">Здесь можно выбрать шрифт.</translation>
    </message>
    <message>
        <source>Requested Font</source>
        <translation type="vanished">Запрошенный шрифт</translation>
    </message>
    <message>
        <source>Font</source>
        <comment>@option:check</comment>
        <translation type="vanished">Шрифт</translation>
    </message>
    <message>
        <source>Enable this checkbox to change the font family settings.</source>
        <comment>@info:whatsthis</comment>
        <translation type="vanished">Поставьте флажок чтобы изменить гарнитуру шрифта.</translation>
    </message>
    <message>
        <source>Change font family?</source>
        <comment>@info:tooltip</comment>
        <translation type="vanished">Изменить гарнитуру шрифта?</translation>
    </message>
    <message>
        <source>Font:</source>
        <comment>@label</comment>
        <translation type="vanished">Гарнитура:</translation>
    </message>
    <message>
        <source>Font style</source>
        <comment>@option:check</comment>
        <translation type="vanished">Начертание</translation>
    </message>
    <message>
        <source>Enable this checkbox to change the font style settings.</source>
        <comment>@info:whatsthis</comment>
        <translation type="vanished">Поставьте флажок чтобы изменить начертание шрифта.</translation>
    </message>
    <message>
        <source>Change font style?</source>
        <comment>@info:tooltip</comment>
        <translation type="vanished">Изменить начертание шрифта?</translation>
    </message>
    <message>
        <source>Font style:</source>
        <translation type="vanished">Начертание:</translation>
    </message>
    <message>
        <source>Size</source>
        <comment>@option:check</comment>
        <translation type="vanished">Размер</translation>
    </message>
    <message>
        <source>Enable this checkbox to change the font size settings.</source>
        <comment>@info:whatsthis</comment>
        <translation type="vanished">Поставьте флажок чтобы изменить размер шрифта.</translation>
    </message>
    <message>
        <source>Change font size?</source>
        <comment>@info:tooltip</comment>
        <translation type="vanished">Изменить размер шрифта?</translation>
    </message>
    <message>
        <source>Size:</source>
        <comment>@label:listbox Font size</comment>
        <translation type="vanished">Размер:</translation>
    </message>
    <message>
        <source>Here you can choose the font family to be used.</source>
        <comment>@info:whatsthis</comment>
        <translation type="vanished">Здесь можно выбрать гарнитуру шрифта.</translation>
    </message>
    <message>
        <source>Here you can choose the font style to be used.</source>
        <comment>@info:whatsthis</comment>
        <translation type="vanished">Здесь можно выбрать начертание шрифта.</translation>
    </message>
    <message>
        <source>Italic</source>
        <comment>@item font</comment>
        <translation type="vanished">Курсив</translation>
    </message>
    <message>
        <source>Oblique</source>
        <comment>@item font</comment>
        <translation type="vanished">Наклонный</translation>
    </message>
    <message>
        <source>Bold</source>
        <comment>@item font</comment>
        <translation type="vanished">Полужирный</translation>
    </message>
    <message>
        <source>Bold Italic</source>
        <comment>@item font</comment>
        <translation type="vanished">Полужирный курсив</translation>
    </message>
    <message>
        <source>Relative</source>
        <comment>@item font size</comment>
        <translation type="vanished">Относительный</translation>
    </message>
    <message>
        <source>Font size&lt;br /&gt;&lt;i&gt;fixed&lt;/i&gt; or &lt;i&gt;relative&lt;/i&gt;&lt;br /&gt;to environment</source>
        <translation type="vanished">Размер шрифта&lt;br /&gt;&lt;i&gt;фиксированный&lt;/i&gt; или &lt;i&gt;относительный&lt;/i&gt;&lt;br /&gt; к среде</translation>
    </message>
    <message>
        <source>Here you can switch between fixed font size and font size to be calculated dynamically and adjusted to changing environment (e.g. widget dimensions, paper size).</source>
        <translation type="vanished">Здесь можно переключиться между фиксированным размером шрифта и размером, вычисляемым динамически и зависящим от изменяющегося окружения (размер элементов окна, бумаги и т.д.).</translation>
    </message>
    <message>
        <source>Here you can choose the font size to be used.</source>
        <translation type="vanished">Здесь можно выбрать размер шрифта.</translation>
    </message>
    <message>
        <source>The Quick Brown Fox Jumps Over The Lazy Dog</source>
        <translation type="vanished">Широкая электрификация южных губерний даст мощный толчок подъёму сельского хозяйства</translation>
    </message>
    <message>
        <source>This sample text illustrates the current settings. You may edit it to test special characters.</source>
        <translation type="vanished">Этот текст иллюстрирует текущие параметры. Измените его, чтобы проверить корректность показа специальных символов.</translation>
    </message>
    <message>
        <source>Actual Font</source>
        <translation type="vanished">Доступный шрифт</translation>
    </message>
    <message>
        <source>%1</source>
        <comment>@item Font style</comment>
        <translation type="vanished">%1</translation>
    </message>
    <message>
        <source>The Quick Brown Fox Jumps Over The Lazy Dog</source>
        <comment>short</comment>
        <translation type="vanished">Широкая электрификация южных губерний даст мощный толчок подъёму сельского хозяйства</translation>
    </message>
    <message>
        <source>1</source>
        <comment>Numeric IDs of scripts for font previews</comment>
        <translation type="vanished">1</translation>
    </message>
    <message>
        <source>Select Font</source>
        <translation type="vanished">Выбор шрифта</translation>
    </message>
    <message>
        <source>Choose...</source>
        <translation type="vanished">Выбрать...</translation>
    </message>
    <message>
        <source>Click to select a font</source>
        <translation type="vanished">Нажмите, чтобы выбрать шрифт</translation>
    </message>
    <message>
        <source>Preview of the selected font</source>
        <translation type="vanished">Образец выбранного шрифта</translation>
    </message>
    <message>
        <source>This is a preview of the selected font. You can change it by clicking the &quot;Choose...&quot; button.</source>
        <translation type="vanished">Это образец выбранного шрифта. Его можно сменить, нажав кнопку «Выбрать...».</translation>
    </message>
    <message>
        <source>Preview of the &quot;%1&quot; font</source>
        <translation type="vanished">Образец шрифта %1</translation>
    </message>
    <message>
        <source>This is a preview of the &quot;%1&quot; font. You can change it by clicking the &quot;Choose...&quot; button.</source>
        <translation type="vanished">Это образец шрифта %1. Вы можете сменить его, нажав кнопку «Выбрать...».</translation>
    </message>
    <message>
        <source>Search</source>
        <translation type="vanished">Поиск</translation>
    </message>
    <message>
        <source>Stop</source>
        <translation type="vanished">Остановить</translation>
    </message>
    <message>
        <source> Stalled </source>
        <translation type="vanished"> Нет данных </translation>
    </message>
    <message>
        <source> %1/s </source>
        <translation type="vanished"> %1/с </translation>
    </message>
    <message>
        <source>%1:</source>
        <comment>%1 is the label, we add a &apos;:&apos; to it</comment>
        <translation type="vanished">%1:</translation>
    </message>
    <message numerus="yes">
        <source>%2 of %3 complete</source>
        <translation type="vanished">
            <numerusform>Выполнено %2 из %3</numerusform>
            <numerusform>Выполнено %2 из %3</numerusform>
            <numerusform>Выполнено %2 из %3</numerusform>
        </translation>
    </message>
    <message numerus="yes">
        <source>%2 / %1 folder</source>
        <translation type="vanished">
            <numerusform>%2 из %1 папки</numerusform>
            <numerusform>%2 из %1 папок</numerusform>
            <numerusform>%2 из %1 папок</numerusform>
        </translation>
        <extra-po-msgid_plural>%2 / %1 folders</extra-po-msgid_plural>
    </message>
    <message numerus="yes">
        <source>%2 / %1 file</source>
        <translation type="vanished">
            <numerusform>%2 из %1 файла</numerusform>
            <numerusform>%2 из %1 файлов</numerusform>
            <numerusform>%2 из %1 файлов</numerusform>
        </translation>
        <extra-po-msgid_plural>%2 / %1 files</extra-po-msgid_plural>
    </message>
    <message>
        <source>%1% of %2</source>
        <translation type="vanished">%1% из %2</translation>
    </message>
    <message numerus="yes">
        <source>%2% of 1 file</source>
        <translation type="vanished">
            <numerusform>%2% %1 файла</numerusform>
            <numerusform>%2% %1 файлов</numerusform>
            <numerusform>%2% %1 файлов</numerusform>
        </translation>
        <extra-po-msgid_plural>%2% of %1 files</extra-po-msgid_plural>
    </message>
    <message>
        <source>%1%</source>
        <translation type="vanished">%1%</translation>
    </message>
    <message>
        <source>Stalled</source>
        <translation type="vanished">Нет данных</translation>
    </message>
    <message numerus="yes">
        <source>%2/s (%3 remaining)</source>
        <translation type="vanished">
            <numerusform>%2/с ( осталось %3 )</numerusform>
            <numerusform>%2/с ( осталось %3 )</numerusform>
            <numerusform>%2/с ( осталось %3 )</numerusform>
        </translation>
    </message>
    <message>
        <source>%1/s</source>
        <comment>speed in bytes per second</comment>
        <translation type="vanished">%1/с</translation>
    </message>
    <message>
        <source>%1/s (done)</source>
        <translation type="vanished">%1/с (готово)</translation>
    </message>
    <message>
        <source>&amp;Resume</source>
        <translation type="vanished">&amp;Возобновить</translation>
    </message>
    <message>
        <source>&amp;Pause</source>
        <translation type="vanished">&amp;Приостановить</translation>
    </message>
    <message>
        <source>Source:</source>
        <comment>The source url of a job</comment>
        <translation type="vanished">Источник:</translation>
    </message>
    <message>
        <source>Destination:</source>
        <comment>The destination url of a job</comment>
        <translation type="vanished">Назначение:</translation>
    </message>
    <message>
        <source>Click this to expand the dialog, to show details</source>
        <translation type="vanished">Нажмите эту кнопку, чтобы развернуть диалог для показа дополнительных сведений</translation>
    </message>
    <message>
        <source>&amp;Keep this window open after transfer is complete</source>
        <translation type="vanished">Не &amp;закрывать окно после окончания передачи данных</translation>
    </message>
    <message>
        <source>Open &amp;File</source>
        <translation type="vanished">&amp;Открыть файл</translation>
    </message>
    <message>
        <source>Open &amp;Destination</source>
        <translation type="vanished">Открыть папку &amp;назначения</translation>
    </message>
    <message>
        <source>Progress Dialog</source>
        <translation type="vanished">Процесс выполнения</translation>
    </message>
    <message numerus="yes">
        <source>%1 folder</source>
        <translation type="vanished">
            <numerusform>%1 папка</numerusform>
            <numerusform>%1 папки</numerusform>
            <numerusform>%1 папок</numerusform>
        </translation>
        <extra-po-msgid_plural>%1 folders</extra-po-msgid_plural>
    </message>
    <message numerus="yes">
        <source>%1 file</source>
        <translation type="vanished">
            <numerusform>%1 файл</numerusform>
            <numerusform>%1 файла</numerusform>
            <numerusform>%1 файлов</numerusform>
        </translation>
        <extra-po-msgid_plural>%1 files</extra-po-msgid_plural>
    </message>
    <message>
        <source>Click this to collapse the dialog, to hide details</source>
        <translation type="vanished">Нажмите эту кнопку для сворачивания диалога</translation>
    </message>
    <message>
        <source>The style &apos;%1&apos; was not found</source>
        <translation type="vanished">Стиль «%1» не найден</translation>
    </message>
    <message>
        <source>Do not run in the background.</source>
        <translation type="vanished">Не запускать в фоновом режиме.</translation>
    </message>
    <message>
        <source>Internally added if launched from Finder</source>
        <translation type="vanished">Добавлено изнутри, если запущено из Finder</translation>
    </message>
    <message>
        <source>Unknown Application</source>
        <translation type="vanished">Неизвестное приложение</translation>
    </message>
    <message>
        <source>&amp;Minimize</source>
        <translation type="vanished">&amp;Свернуть</translation>
    </message>
    <message>
        <source>&amp;Restore</source>
        <translation type="vanished">Восст&amp;ановить</translation>
    </message>
    <message>
        <source>&lt;qt&gt;Are you sure you want to quit &lt;b&gt;%1&lt;/b&gt;?&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Выйти из программы &lt;b&gt;%1&lt;/b&gt;?&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>Confirm Quit From System Tray</source>
        <translation type="vanished">Подтверждение выхода из программы</translation>
    </message>
    <message>
        <source>Minimize</source>
        <translation type="vanished">Свернуть</translation>
    </message>
    <message>
        <source>Dr. Klash&apos; Accelerator Diagnosis</source>
        <comment>@title:window</comment>
        <translation type="vanished">Проверка клавиш вызова от Dr. Klash</translation>
    </message>
    <message>
        <source>Disable automatic checking</source>
        <comment>@option:check</comment>
        <translation type="vanished">Отключить автоматическую проверку</translation>
    </message>
    <message>
        <source>Close</source>
        <comment>@action:button</comment>
        <translation type="vanished">Закрыть</translation>
    </message>
    <message>
        <source>&lt;h2&gt;Accelerators changed&lt;/h2&gt;</source>
        <translation type="vanished">&lt;h2&gt;Акселераторы изменены&lt;/h2&gt;</translation>
    </message>
    <message>
        <source>&lt;h2&gt;Accelerators removed&lt;/h2&gt;</source>
        <translation type="vanished">&lt;h2&gt;Акселераторы удалены&lt;/h2&gt;</translation>
    </message>
    <message>
        <source>&lt;h2&gt;Accelerators added (just for your info)&lt;/h2&gt;</source>
        <translation type="vanished">&lt;h2&gt;Акселераторы добавлены&lt;/h2&gt;</translation>
    </message>
    <message>
        <source>left button</source>
        <comment>left mouse button</comment>
        <translation type="vanished">левая кнопка</translation>
    </message>
    <message>
        <source>middle button</source>
        <comment>middle mouse button</comment>
        <translation type="vanished">средняя кнопка</translation>
    </message>
    <message>
        <source>right button</source>
        <comment>right mouse button</comment>
        <translation type="vanished">правая кнопка</translation>
    </message>
    <message>
        <source>invalid button</source>
        <comment>a nonexistent value of mouse button</comment>
        <translation type="vanished">недопустимая кнопка</translation>
    </message>
    <message>
        <source>Hold %1, then push %2</source>
        <comment>a kind of mouse gesture: hold down one mouse button, then press another button</comment>
        <translation type="vanished">Держать %1, затем нажать %2</translation>
    </message>
    <message>
        <source>Conflict with Global Shortcut</source>
        <translation type="vanished">Конфликт с глобальной комбинацией</translation>
    </message>
    <message>
        <source>The &apos;%1&apos; key combination has already been allocated to the global action &quot;%2&quot; in %3.
Do you want to reassign it from that action to the current one?</source>
        <translation type="vanished">Комбинация клавиш %1 уже связана с глобальным действием «%2» в %3.
Связать комбинацию с текущим действием?</translation>
    </message>
    <message>
        <source>The &apos;%1&apos; key combination is registered by application %2 for action %3:</source>
        <translation type="vanished">Клавиша «%1» уже назначена в приложении %2 на действие %3:</translation>
    </message>
    <message>
        <source>In context &apos;%1&apos; for action &apos;%2&apos;
</source>
        <translation type="vanished">Контекст «%1» для действия «%2»
</translation>
    </message>
    <message>
        <source>The &apos;%1&apos; key combination is registered by application %2.
%3</source>
        <translation type="vanished">Клавиша «%1» уже назначена в приложении %2.
%3</translation>
    </message>
    <message>
        <source>Conflict With Registered Global Shortcut</source>
        <translation type="vanished">Конфликт с глобальной комбинацией клавиш</translation>
    </message>
    <message>
        <source>Open</source>
        <comment>@action</comment>
        <translation type="vanished">Открыть</translation>
    </message>
    <message>
        <source>New</source>
        <comment>@action</comment>
        <translation type="vanished">Создать</translation>
    </message>
    <message>
        <source>Close</source>
        <comment>@action</comment>
        <translation type="vanished">Закрыть</translation>
    </message>
    <message>
        <source>Save</source>
        <comment>@action</comment>
        <translation type="vanished">Сохранить</translation>
    </message>
    <message>
        <source>Print</source>
        <comment>@action</comment>
        <translation type="vanished">Печать</translation>
    </message>
    <message>
        <source>Quit</source>
        <comment>@action</comment>
        <translation type="vanished">Выход</translation>
    </message>
    <message>
        <source>Undo</source>
        <comment>@action</comment>
        <translation type="vanished">Отменить действие</translation>
    </message>
    <message>
        <source>Redo</source>
        <comment>@action</comment>
        <translation type="vanished">Повторить отменённое действие</translation>
    </message>
    <message>
        <source>Cut</source>
        <comment>@action</comment>
        <translation type="vanished">Вырезать</translation>
    </message>
    <message>
        <source>Copy</source>
        <comment>@action</comment>
        <translation type="vanished">Копировать</translation>
    </message>
    <message>
        <source>Paste</source>
        <comment>@action</comment>
        <translation type="vanished">Вставить</translation>
    </message>
    <message>
        <source>Paste Selection</source>
        <comment>@action</comment>
        <translation type="vanished">Вставить выделение</translation>
    </message>
    <message>
        <source>Select All</source>
        <comment>@action</comment>
        <translation type="vanished">Выделить все</translation>
    </message>
    <message>
        <source>Deselect</source>
        <comment>@action</comment>
        <translation type="vanished">Снять выделение</translation>
    </message>
    <message>
        <source>Delete Word Backwards</source>
        <comment>@action</comment>
        <translation type="vanished">Удалить слово перед курсором</translation>
    </message>
    <message>
        <source>Delete Word Forward</source>
        <comment>@action</comment>
        <translation type="vanished">Удалить слово после курсора</translation>
    </message>
    <message>
        <source>Find</source>
        <comment>@action</comment>
        <translation type="vanished">Найти</translation>
    </message>
    <message>
        <source>Find Next</source>
        <comment>@action</comment>
        <translation type="vanished">Найти далее</translation>
    </message>
    <message>
        <source>Find Prev</source>
        <comment>@action</comment>
        <translation type="vanished">Найти предыдущее</translation>
    </message>
    <message>
        <source>Replace</source>
        <comment>@action</comment>
        <translation type="vanished">Заменить</translation>
    </message>
    <message>
        <source>Home</source>
        <comment>@action Go to main page</comment>
        <translation type="vanished">Основная страница</translation>
    </message>
    <message>
        <source>Begin</source>
        <comment>@action Beginning of document</comment>
        <translation type="vanished">Начало документа</translation>
    </message>
    <message>
        <source>End</source>
        <comment>@action End of document</comment>
        <translation type="vanished">Конец документа</translation>
    </message>
    <message>
        <source>Prior</source>
        <comment>@action</comment>
        <translation type="vanished">Предыдущий</translation>
    </message>
    <message>
        <source>Next</source>
        <comment>@action Opposite to Prior</comment>
        <translation type="vanished">Далее</translation>
    </message>
    <message>
        <source>Up</source>
        <comment>@action</comment>
        <translation type="vanished">Вверх</translation>
    </message>
    <message>
        <source>Back</source>
        <comment>@action</comment>
        <translation type="vanished">Назад</translation>
    </message>
    <message>
        <source>Forward</source>
        <comment>@action</comment>
        <translation type="vanished">Вперёд</translation>
    </message>
    <message>
        <source>Reload</source>
        <comment>@action</comment>
        <translation type="vanished">Открыть заново</translation>
    </message>
    <message>
        <source>Beginning of Line</source>
        <comment>@action</comment>
        <translation type="vanished">Начало строки</translation>
    </message>
    <message>
        <source>End of Line</source>
        <comment>@action</comment>
        <translation type="vanished">Конец строки</translation>
    </message>
    <message>
        <source>Go to Line</source>
        <comment>@action</comment>
        <translation type="vanished">Перейти к строке</translation>
    </message>
    <message>
        <source>Backward Word</source>
        <comment>@action</comment>
        <translation type="vanished">На слово назад</translation>
    </message>
    <message>
        <source>Forward Word</source>
        <comment>@action</comment>
        <translation type="vanished">На слово вперёд</translation>
    </message>
    <message>
        <source>Add Bookmark</source>
        <comment>@action</comment>
        <translation type="vanished">Добавить закладку</translation>
    </message>
    <message>
        <source>Zoom In</source>
        <comment>@action</comment>
        <translation type="vanished">Увеличить масштаб</translation>
    </message>
    <message>
        <source>Zoom Out</source>
        <comment>@action</comment>
        <translation type="vanished">Уменьшить масштаб</translation>
    </message>
    <message>
        <source>Full Screen Mode</source>
        <comment>@action</comment>
        <translation type="vanished">Полноэкранный режим</translation>
    </message>
    <message>
        <source>Show Menu Bar</source>
        <comment>@action</comment>
        <translation type="vanished">Показать меню</translation>
    </message>
    <message>
        <source>Activate Next Tab</source>
        <comment>@action</comment>
        <translation type="vanished">Перейти на следующую вкладку</translation>
    </message>
    <message>
        <source>Activate Previous Tab</source>
        <comment>@action</comment>
        <translation type="vanished">Перейти на предыдущую вкладку</translation>
    </message>
    <message>
        <source>Help</source>
        <comment>@action</comment>
        <translation type="vanished">Справка</translation>
    </message>
    <message>
        <source>What&apos;s This</source>
        <comment>@action</comment>
        <translation type="vanished">Что это?</translation>
    </message>
    <message>
        <source>Text Completion</source>
        <comment>@action</comment>
        <translation type="vanished">Завершение текста</translation>
    </message>
    <message>
        <source>Previous Completion Match</source>
        <comment>@action</comment>
        <translation type="vanished">Предыдущий вариант завершения</translation>
    </message>
    <message>
        <source>Next Completion Match</source>
        <comment>@action</comment>
        <translation type="vanished">Следующий вариант завершения</translation>
    </message>
    <message>
        <source>Substring Completion</source>
        <comment>@action</comment>
        <translation type="vanished">Завершение подстроки</translation>
    </message>
    <message>
        <source>Previous Item in List</source>
        <comment>@action</comment>
        <translation type="vanished">Предыдущий элемент в списке</translation>
    </message>
    <message>
        <source>Next Item in List</source>
        <comment>@action</comment>
        <translation type="vanished">Следующий элемент в списке</translation>
    </message>
    <message>
        <source>Open Recent</source>
        <comment>@action</comment>
        <translation type="vanished">Последние файлы</translation>
    </message>
    <message>
        <source>Save As</source>
        <comment>@action</comment>
        <translation type="vanished">Сохранить как</translation>
    </message>
    <message>
        <source>Revert</source>
        <comment>@action</comment>
        <translation type="vanished">Восстановить</translation>
    </message>
    <message>
        <source>Print Preview</source>
        <comment>@action</comment>
        <translation type="vanished">Предварительный просмотр</translation>
    </message>
    <message>
        <source>Mail</source>
        <comment>@action</comment>
        <translation type="vanished">Отправить по почте</translation>
    </message>
    <message>
        <source>Clear</source>
        <comment>@action</comment>
        <translation type="vanished">Очистить</translation>
    </message>
    <message>
        <source>Actual Size</source>
        <comment>@action</comment>
        <translation type="vanished">Фактический размер</translation>
    </message>
    <message>
        <source>Fit To Page</source>
        <comment>@action</comment>
        <translation type="vanished">Вместить</translation>
    </message>
    <message>
        <source>Fit To Width</source>
        <comment>@action</comment>
        <translation type="vanished">Вместить по ширине</translation>
    </message>
    <message>
        <source>Fit To Height</source>
        <comment>@action</comment>
        <translation type="vanished">Вместить по высоте</translation>
    </message>
    <message>
        <source>Zoom</source>
        <comment>@action</comment>
        <translation type="vanished">Масштаб</translation>
    </message>
    <message>
        <source>Goto</source>
        <comment>@action</comment>
        <translation type="vanished">Перейти</translation>
    </message>
    <message>
        <source>Goto Page</source>
        <comment>@action</comment>
        <translation type="vanished">Перейти на страницу</translation>
    </message>
    <message>
        <source>Document Back</source>
        <comment>@action</comment>
        <translation type="vanished">Назад</translation>
    </message>
    <message>
        <source>Document Forward</source>
        <comment>@action</comment>
        <translation type="vanished">Вперёд</translation>
    </message>
    <message>
        <source>Edit Bookmarks</source>
        <comment>@action</comment>
        <translation type="vanished">Изменить закладки</translation>
    </message>
    <message>
        <source>Spelling</source>
        <comment>@action</comment>
        <translation type="vanished">Проверка орфографии</translation>
    </message>
    <message>
        <source>Show Toolbar</source>
        <comment>@action</comment>
        <translation type="vanished">Показать панель инструментов</translation>
    </message>
    <message>
        <source>Show Statusbar</source>
        <comment>@action</comment>
        <translation type="vanished">Показать строку состояния</translation>
    </message>
    <message>
        <source>Save Options</source>
        <comment>@action</comment>
        <translation type="vanished">Сохранить параметры</translation>
    </message>
    <message>
        <source>Key Bindings</source>
        <comment>@action</comment>
        <translation type="vanished">Комбинации клавиш</translation>
    </message>
    <message>
        <source>Preferences</source>
        <comment>@action</comment>
        <translation type="vanished">Настроить</translation>
    </message>
    <message>
        <source>Configure Toolbars</source>
        <comment>@action</comment>
        <translation type="vanished">Настроить панели инструментов</translation>
    </message>
    <message>
        <source>Configure Notifications</source>
        <comment>@action</comment>
        <translation type="vanished">Настроить уведомления</translation>
    </message>
    <message>
        <source>Tip Of Day</source>
        <comment>@action</comment>
        <translation type="vanished">Совет дня</translation>
    </message>
    <message>
        <source>Report Bug</source>
        <comment>@action</comment>
        <translation type="vanished">Сообщить об ошибке</translation>
    </message>
    <message>
        <source>Switch Application Language</source>
        <comment>@action</comment>
        <translation type="vanished">Сменить язык интерфейса приложения</translation>
    </message>
    <message>
        <source>About Application</source>
        <comment>@action</comment>
        <translation type="vanished">О приложении</translation>
    </message>
    <message>
        <source>About KDE</source>
        <comment>@action</comment>
        <translation type="vanished">О KDE</translation>
    </message>
    <message>
        <source>Spell Checking Configuration</source>
        <translation type="vanished">Настройка проверки орфографии</translation>
    </message>
    <message>
        <source>Enable &amp;background spellchecking</source>
        <translation type="vanished">Включить &amp;фоновую проверку орфографии</translation>
    </message>
    <message>
        <source>&amp;Automatic spell checking enabled by default</source>
        <translation type="vanished">&amp;По умолчанию использовать проверку орфографии на лету</translation>
    </message>
    <message>
        <source>Skip all &amp;uppercase words</source>
        <translation type="vanished">Пропускать &amp;слова в верхнем регистре</translation>
    </message>
    <message>
        <source>S&amp;kip run-together words</source>
        <translation type="vanished">Пропускать слова, &amp;написанные слитно</translation>
    </message>
    <message>
        <source>Default language:</source>
        <translation type="vanished">Язык по умолчанию:</translation>
    </message>
    <message>
        <source>Ignored Words</source>
        <translation type="vanished">Игнорируемые слова</translation>
    </message>
    <message>
        <source>Check Spelling</source>
        <comment>@title:window</comment>
        <translation type="vanished">Проверить орфографию</translation>
    </message>
    <message>
        <source>&amp;Finished</source>
        <comment>@action:button</comment>
        <translation type="vanished">&amp;Готово</translation>
    </message>
    <message>
        <source>Spell checking in progress...</source>
        <comment>progress label</comment>
        <translation type="vanished">Выполняется проверка орфографии...</translation>
    </message>
    <message>
        <source>Spell check stopped.</source>
        <translation type="vanished">Проверка орфографии остановлена</translation>
    </message>
    <message>
        <source>Spell check canceled.</source>
        <translation type="vanished">Проверка орфографии отменена.</translation>
    </message>
    <message>
        <source>Spell check complete.</source>
        <translation type="vanished">Проверка орфографии завершена.</translation>
    </message>
    <message>
        <source>Autocorrect</source>
        <translation type="vanished">Автокоррекция</translation>
    </message>
    <message>
        <source>You reached the end of the list
of matching items.
</source>
        <translation type="vanished">Достигнут конец списка
совпадающих элементов.
</translation>
    </message>
    <message>
        <source>The completion is ambiguous, more than one
match is available.
</source>
        <translation type="vanished">Завершение неоднозначно, существует более
одного варианта.
</translation>
    </message>
    <message>
        <source>There is no matching item available.
</source>
        <translation type="vanished">Нет совпадающих элементов.
</translation>
    </message>
    <message>
        <source>Backspace</source>
        <translation type="vanished">Backspace</translation>
    </message>
    <message>
        <source>SysReq</source>
        <translation type="vanished">SysReq</translation>
    </message>
    <message>
        <source>CapsLock</source>
        <translation type="vanished">CapsLock</translation>
    </message>
    <message>
        <source>NumLock</source>
        <translation type="vanished">NumLock</translation>
    </message>
    <message>
        <source>ScrollLock</source>
        <translation type="vanished">ScrollLock</translation>
    </message>
    <message>
        <source>PageUp</source>
        <translation type="vanished">PageUp</translation>
    </message>
    <message>
        <source>PageDown</source>
        <translation type="vanished">PageDown</translation>
    </message>
    <message>
        <source>Again</source>
        <translation type="vanished">Снова</translation>
    </message>
    <message>
        <source>Props</source>
        <translation type="vanished">Свойства</translation>
    </message>
    <message>
        <source>Undo</source>
        <translation type="vanished">Отменить</translation>
    </message>
    <message>
        <source>Front</source>
        <translation type="vanished">Фронт</translation>
    </message>
    <message>
        <source>Copy</source>
        <translation type="vanished">Копировать</translation>
    </message>
    <message>
        <source>Open</source>
        <translation type="vanished">Открыть</translation>
    </message>
    <message>
        <source>Paste</source>
        <translation type="vanished">Вставить</translation>
    </message>
    <message>
        <source>Find</source>
        <translation type="vanished">Найти</translation>
    </message>
    <message>
        <source>Cut</source>
        <translation type="vanished">Вырезать</translation>
    </message>
    <message>
        <source>&amp;OK</source>
        <translation type="vanished">&amp;ОК</translation>
    </message>
    <message>
        <source>&amp;Cancel</source>
        <translation type="vanished">О&amp;тмена</translation>
    </message>
    <message>
        <source>&amp;Yes</source>
        <translation type="vanished">&amp;Да</translation>
    </message>
    <message>
        <source>Yes</source>
        <translation type="vanished">Да</translation>
    </message>
    <message>
        <source>&amp;No</source>
        <translation type="vanished">&amp;Нет</translation>
    </message>
    <message>
        <source>No</source>
        <translation type="vanished">Нет</translation>
    </message>
    <message>
        <source>&amp;Discard</source>
        <translation type="vanished">От&amp;клонить</translation>
    </message>
    <message>
        <source>Discard changes</source>
        <translation type="vanished">Сбросить изменения</translation>
    </message>
    <message>
        <source>Pressing this button will discard all recent changes made in this dialog.</source>
        <translation type="vanished">Нажатие этой кнопки сбросит все изменения в текущем диалоге.</translation>
    </message>
    <message>
        <source>Save data</source>
        <translation type="vanished">Сохранить данные</translation>
    </message>
    <message>
        <source>&amp;Do Not Save</source>
        <translation type="vanished">&amp;Не сохранять</translation>
    </message>
    <message>
        <source>Do not save data</source>
        <translation type="vanished">Не сохранять данные</translation>
    </message>
    <message>
        <source>Save file with another name</source>
        <translation type="vanished">Сохранить файл под другим именем</translation>
    </message>
    <message>
        <source>&amp;Apply</source>
        <translation type="vanished">&amp;Применить</translation>
    </message>
    <message>
        <source>Apply changes</source>
        <translation type="vanished">Применить изменения</translation>
    </message>
    <message>
        <source>When you click &lt;b&gt;Apply&lt;/b&gt;, the settings will be handed over to the program, but the dialog will not be closed.
Use this to try different settings.</source>
        <translation type="vanished">При нажатии кнопки &lt;b&gt;Применить&lt;/b&gt; параметры будут переданы в программу, но окно параметров не будет закрыто.
Благодаря этому вы можете попробовать различные варианты настройки.</translation>
    </message>
    <message>
        <source>Administrator &amp;Mode...</source>
        <translation type="vanished">&amp;Режим администратора...</translation>
    </message>
    <message>
        <source>Enter Administrator Mode</source>
        <translation type="vanished">Вход с правами администратора</translation>
    </message>
    <message>
        <source>When you click &lt;b&gt;Administrator Mode&lt;/b&gt; you will be prompted for the administrator (root) password in order to make changes which require root privileges.</source>
        <translation type="vanished">При нажатии кнопки &lt;b&gt;Режим администратора&lt;/b&gt; будет запрошен пароль администратора (root), поскольку действия нужно будет выполнять с правами этого пользователя.</translation>
    </message>
    <message>
        <source>Clear input</source>
        <translation type="vanished">Очистить ввод</translation>
    </message>
    <message>
        <source>Clear the input in the edit field</source>
        <translation type="vanished">Очистить ввод в строке редактирования</translation>
    </message>
    <message>
        <source>Show help</source>
        <translation type="vanished">Показать справку</translation>
    </message>
    <message>
        <source>Close the current window or document</source>
        <translation type="vanished">Закрыть текущее окно или документ</translation>
    </message>
    <message>
        <source>&amp;Close Window</source>
        <translation type="vanished">&amp;Закрыть окно</translation>
    </message>
    <message>
        <source>Close the current window.</source>
        <translation type="vanished">Закрыть текущее окно</translation>
    </message>
    <message>
        <source>&amp;Close Document</source>
        <translation type="vanished">&amp;Закрыть документ</translation>
    </message>
    <message>
        <source>Close the current document.</source>
        <translation type="vanished">Закрыть текущий документ.</translation>
    </message>
    <message>
        <source>&amp;Defaults</source>
        <translation type="vanished">По &amp;умолчанию</translation>
    </message>
    <message>
        <source>Reset all items to their default values</source>
        <translation type="vanished">Восстановить значения по умолчанию</translation>
    </message>
    <message>
        <source>Go back one step</source>
        <translation type="vanished">Вернуться на шаг назад</translation>
    </message>
    <message>
        <source>Go forward one step</source>
        <translation type="vanished">Перейти на шаг вперёд</translation>
    </message>
    <message>
        <source>Opens the print dialog to print the current document</source>
        <translation type="vanished">Открывает диалог печати для печати текущего документа</translation>
    </message>
    <message>
        <source>C&amp;ontinue</source>
        <translation type="vanished">Пр&amp;одолжить</translation>
    </message>
    <message>
        <source>Continue operation</source>
        <translation type="vanished">Продолжить действие</translation>
    </message>
    <message>
        <source>&amp;Delete</source>
        <translation type="vanished">&amp;Удалить</translation>
    </message>
    <message>
        <source>Delete item(s)</source>
        <translation type="vanished">Удалить элементы</translation>
    </message>
    <message>
        <source>Open file</source>
        <translation type="vanished">Открыть файл</translation>
    </message>
    <message>
        <source>&amp;Reset</source>
        <translation type="vanished">Сб&amp;рос</translation>
    </message>
    <message>
        <source>Reset configuration</source>
        <translation type="vanished">Сбросить конфигурацию</translation>
    </message>
    <message>
        <source>&amp;Insert</source>
        <comment>Verb</comment>
        <translation type="vanished">&amp;Вставить</translation>
    </message>
    <message>
        <source>Confi&amp;gure...</source>
        <translation type="vanished">&amp;Настроить...</translation>
    </message>
    <message>
        <source>Add</source>
        <translation type="vanished">Добавить</translation>
    </message>
    <message>
        <source>Test</source>
        <translation type="vanished">Проверить</translation>
    </message>
    <message>
        <source>Properties</source>
        <translation type="vanished">Свойства</translation>
    </message>
    <message>
        <source>&amp;Overwrite</source>
        <translation type="vanished">&amp;Заменить</translation>
    </message>
    <message>
        <source>Redo</source>
        <translation type="vanished">Повторить</translation>
    </message>
    <message>
        <source>&amp;Available:</source>
        <translation type="vanished">&amp;Доступные:</translation>
    </message>
    <message>
        <source>&amp;Selected:</source>
        <translation type="vanished">&amp;Выбранные:</translation>
    </message>
    <message>
        <source>European Alphabets</source>
        <comment>KCharSelect section name</comment>
        <translation type="vanished">Европейские</translation>
    </message>
    <message>
        <source>African Scripts</source>
        <comment>KCharSelect section name</comment>
        <translation type="vanished">Африканские</translation>
    </message>
    <message>
        <source>Middle Eastern Scripts</source>
        <comment>KCharSelect section name</comment>
        <translation type="vanished">Ближневосточные</translation>
    </message>
    <message>
        <source>South Asian Scripts</source>
        <comment>KCharSelect section name</comment>
        <translation type="vanished">Южной Азии</translation>
    </message>
    <message>
        <source>Philippine Scripts</source>
        <comment>KCharSelect section name</comment>
        <translation type="vanished">Филиппинские</translation>
    </message>
    <message>
        <source>South East Asian Scripts</source>
        <comment>KCharSelect section name</comment>
        <translation type="vanished">Юго-Восточной Азии</translation>
    </message>
    <message>
        <source>East Asian Scripts</source>
        <comment>KCharSelect section name</comment>
        <translation type="vanished">Восточно-Азиатские</translation>
    </message>
    <message>
        <source>Central Asian Scripts</source>
        <comment>KCharSelect section name</comment>
        <translation type="vanished">Центрально-Азиатские</translation>
    </message>
    <message>
        <source>Other Scripts</source>
        <comment>KCharSelect section name</comment>
        <translation type="vanished">Другие</translation>
    </message>
    <message>
        <source>Symbols</source>
        <comment>KCharSelect section name</comment>
        <translation type="vanished">Символы</translation>
    </message>
    <message>
        <source>Mathematical Symbols</source>
        <comment>KCharSelect section name</comment>
        <translation type="vanished">Математические символы</translation>
    </message>
    <message>
        <source>Phonetic Symbols</source>
        <comment>KCharSelect section name</comment>
        <translation type="vanished">Фонетические символы</translation>
    </message>
    <message>
        <source>Combining Diacritical Marks</source>
        <comment>KCharSelect section name</comment>
        <translation type="vanished">Диакритические знаки</translation>
    </message>
    <message>
        <source>Other</source>
        <comment>KCharSelect section name</comment>
        <translation type="vanished">Другие</translation>
    </message>
    <message>
        <source>Basic Latin</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Основная латиница</translation>
    </message>
    <message>
        <source>Latin-1 Supplement</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Дополнение латиницы 1</translation>
    </message>
    <message>
        <source>Latin Extended-A</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Расширенная латиница-A</translation>
    </message>
    <message>
        <source>Latin Extended-B</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Расширенная латиница-B</translation>
    </message>
    <message>
        <source>IPA Extensions</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Расширенный набор IPA</translation>
    </message>
    <message>
        <source>Spacing Modifier Letters</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Модификаторы</translation>
    </message>
    <message>
        <source>Combining Diacritical Marks</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Диакритические знаки</translation>
    </message>
    <message>
        <source>Greek and Coptic</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Греческий и коптский алфавиты</translation>
    </message>
    <message>
        <source>Cyrillic</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Кириллица</translation>
    </message>
    <message>
        <source>Cyrillic Supplement</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Дополнительные символы кириллицы</translation>
    </message>
    <message>
        <source>Armenian</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Армянский алфавит</translation>
    </message>
    <message>
        <source>Hebrew</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Иврит</translation>
    </message>
    <message>
        <source>Arabic</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Арабское письмо</translation>
    </message>
    <message>
        <source>Syriac</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Сирийский алфавит</translation>
    </message>
    <message>
        <source>Arabic Supplement</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Дополнительные символы арабского письма</translation>
    </message>
    <message>
        <source>Thaana</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Тана</translation>
    </message>
    <message>
        <source>NKo</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Нко</translation>
    </message>
    <message>
        <source>Samaritan</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Самаритянская письменность</translation>
    </message>
    <message>
        <source>Mandaic</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Мандейская письменность</translation>
    </message>
    <message>
        <source>Devanagari</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Деванагари</translation>
    </message>
    <message>
        <source>Bengali</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Бенгальская письменность</translation>
    </message>
    <message>
        <source>Gurmukhi</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Гурмукхи</translation>
    </message>
    <message>
        <source>Gujarati</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Гуджарати</translation>
    </message>
    <message>
        <source>Oriya</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Ория</translation>
    </message>
    <message>
        <source>Tamil</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Тамильская письменность</translation>
    </message>
    <message>
        <source>Telugu</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Телугу</translation>
    </message>
    <message>
        <source>Kannada</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Каннада</translation>
    </message>
    <message>
        <source>Malayalam</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Малаялам</translation>
    </message>
    <message>
        <source>Sinhala</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Сингальская письменность</translation>
    </message>
    <message>
        <source>Thai</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Тайская письменность</translation>
    </message>
    <message>
        <source>Lao</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Лаосская письменность</translation>
    </message>
    <message>
        <source>Tibetan</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Тибетская письменность</translation>
    </message>
    <message>
        <source>Myanmar</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Мьянманская письменность</translation>
    </message>
    <message>
        <source>Georgian</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Грузинский алфавит</translation>
    </message>
    <message>
        <source>Hangul Jamo</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Хангыль</translation>
    </message>
    <message>
        <source>Ethiopic</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Эфиопская слоговая письменность</translation>
    </message>
    <message>
        <source>Ethiopic Supplement</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Дополнительные символы эфиопской письменности</translation>
    </message>
    <message>
        <source>Cherokee</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Письменность чероки</translation>
    </message>
    <message>
        <source>Unified Canadian Aboriginal Syllabics</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Канадское слоговое письмо</translation>
    </message>
    <message>
        <source>Ogham</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Огам</translation>
    </message>
    <message>
        <source>Runic</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Руническая письменность</translation>
    </message>
    <message>
        <source>Tagalog</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Тагальская письменность</translation>
    </message>
    <message>
        <source>Hanunoo</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Хануноо</translation>
    </message>
    <message>
        <source>Buhid</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Бухид</translation>
    </message>
    <message>
        <source>Tagbanwa</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Тагбанва</translation>
    </message>
    <message>
        <source>Khmer</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Кхмерская письменность</translation>
    </message>
    <message>
        <source>Mongolian</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Старомонгольская письменность</translation>
    </message>
    <message>
        <source>Unified Canadian Aboriginal Syllabics Extended</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Расширенное канадское слоговое письмо</translation>
    </message>
    <message>
        <source>Limbu</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Письменность лимбу</translation>
    </message>
    <message>
        <source>Tai Le</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Письменность тай лэ</translation>
    </message>
    <message>
        <source>New Tai Lue</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Новый алфавит тай лы</translation>
    </message>
    <message>
        <source>Khmer Symbols</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Кхмерские символы</translation>
    </message>
    <message>
        <source>Buginese</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Бугийская письменность</translation>
    </message>
    <message>
        <source>Tai Tham</source>
        <comment>KCharselect unicode block name</comment>
        <translatorcomment>http://en.wikipedia.org/wiki/Tai_Tham_script --aspotashev
http://ru.wikipedia.org/wiki/Ланна --aspotashev
http://www.omniglot.com/writing/lanna.htm --aspotashev</translatorcomment>
        <translation type="vanished">Письменность Ланна</translation>
    </message>
    <message>
        <source>Balinese</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Балийская письменность</translation>
    </message>
    <message>
        <source>Sundanese</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Сунданская письменность</translation>
    </message>
    <message>
        <source>Batak</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Батакская письменность</translation>
    </message>
    <message>
        <source>Lepcha</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Лепча</translation>
    </message>
    <message>
        <source>Ol Chiki</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Алфавит сантали</translation>
    </message>
    <message>
        <source>Vedic Extensions</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Расширение для ведийского санскрита</translation>
    </message>
    <message>
        <source>Phonetic Extensions</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Фонетические расширения</translation>
    </message>
    <message>
        <source>Phonetic Extensions Supplement</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Дополнительные фонетические расширения</translation>
    </message>
    <message>
        <source>Combining Diacritical Marks Supplement</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Дополнительные комбинируемые диакритические знаки для символов</translation>
    </message>
    <message>
        <source>Latin Extended Additional</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Дополнительная расширенная латиница</translation>
    </message>
    <message>
        <source>Greek Extended</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Расширенный набор символов греческого алфавита</translation>
    </message>
    <message>
        <source>General Punctuation</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Знаки пунктуации</translation>
    </message>
    <message>
        <source>Superscripts and Subscripts</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Надстрочные и подстрочные знаки</translation>
    </message>
    <message>
        <source>Currency Symbols</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Символы валют</translation>
    </message>
    <message>
        <source>Combining Diacritical Marks for Symbols</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Комбинируемые диакритические знаки для символов</translation>
    </message>
    <message>
        <source>Letterlike Symbols</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Буквообразные символы</translation>
    </message>
    <message>
        <source>Number Forms</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Числовые формы</translation>
    </message>
    <message>
        <source>Arrows</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Стрелки</translation>
    </message>
    <message>
        <source>Mathematical Operators</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Математические операторы</translation>
    </message>
    <message>
        <source>Miscellaneous Technical</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Разнообразные технические символы</translation>
    </message>
    <message>
        <source>Control Pictures</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Значки управляющих кодов</translation>
    </message>
    <message>
        <source>Optical Character Recognition</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Символы оптического распознавания</translation>
    </message>
    <message>
        <source>Enclosed Alphanumerics</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Вложенные буквы и цифры</translation>
    </message>
    <message>
        <source>Box Drawing</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Символы рисования рамок</translation>
    </message>
    <message>
        <source>Block Elements</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Символы заполнения</translation>
    </message>
    <message>
        <source>Geometric Shapes</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Геометрические фигуры</translation>
    </message>
    <message>
        <source>Miscellaneous Symbols</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Разнообразные символы</translation>
    </message>
    <message>
        <source>Dingbats</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Знаки орнамента</translation>
    </message>
    <message>
        <source>Miscellaneous Mathematical Symbols-A</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Разнообразные математические символы-A</translation>
    </message>
    <message>
        <source>Supplemental Arrows-A</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Дополнительные стрелки-A</translation>
    </message>
    <message>
        <source>Braille Patterns</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Азбука Брайля</translation>
    </message>
    <message>
        <source>Supplemental Arrows-B</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Дополнительные стрелки-B</translation>
    </message>
    <message>
        <source>Miscellaneous Mathematical Symbols-B</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Разнообразные математические символы-B</translation>
    </message>
    <message>
        <source>Supplemental Mathematical Operators</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Дополнительные математические операторы</translation>
    </message>
    <message>
        <source>Miscellaneous Symbols and Arrows</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Разнообразные символы и стрелки</translation>
    </message>
    <message>
        <source>Glagolitic</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Глаголица</translation>
    </message>
    <message>
        <source>Latin Extended-C</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Расширенная латиница-C</translation>
    </message>
    <message>
        <source>Coptic</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Коптский алфавит</translation>
    </message>
    <message>
        <source>Georgian Supplement</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Дополнительные символы грузинского алфавита</translation>
    </message>
    <message>
        <source>Tifinagh</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Тифинаг</translation>
    </message>
    <message>
        <source>Ethiopic Extended</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Расширенный набор символов эфиопского письма</translation>
    </message>
    <message>
        <source>Cyrillic Extended-A</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Кириллица (расширение A)</translation>
    </message>
    <message>
        <source>Supplemental Punctuation</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Дополнительные знаки пунктуации</translation>
    </message>
    <message>
        <source>CJK Radicals Supplement</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Дополнительные иероглифические ключи ККЯ</translation>
    </message>
    <message>
        <source>Kangxi Radicals</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Иероглифические ключи словаря Канси</translation>
    </message>
    <message>
        <source>Ideographic Description Characters</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Символы описания иероглифов</translation>
    </message>
    <message>
        <source>CJK Symbols and Punctuation</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Символы и пунктуация ККЯ</translation>
    </message>
    <message>
        <source>Hiragana</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Хирагана</translation>
    </message>
    <message>
        <source>Katakana</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Катакана</translation>
    </message>
    <message>
        <source>Bopomofo</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Бопомофо</translation>
    </message>
    <message>
        <source>Hangul Compatibility Jamo</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Чамо, комбинируемое с хангылем</translation>
    </message>
    <message>
        <source>Kanbun</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Канбун</translation>
    </message>
    <message>
        <source>Bopomofo Extended</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Расширенный набор символов бопомофо</translation>
    </message>
    <message>
        <source>CJK Strokes</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Черты ККЯ</translation>
    </message>
    <message>
        <source>Katakana Phonetic Extensions</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Фонетические расширения катаканы</translation>
    </message>
    <message>
        <source>Enclosed CJK Letters and Months</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Вложенные буквы и месяцы ККЯ</translation>
    </message>
    <message>
        <source>CJK Compatibility</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Знаки совместимости ККЯ</translation>
    </message>
    <message>
        <source>CJK Unified Ideographs Extension A</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Унифицированные иероглифы ККЯ (расширение А)</translation>
    </message>
    <message>
        <source>Yijing Hexagram Symbols</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Гексаграммы Ицзин</translation>
    </message>
    <message>
        <source>CJK Unified Ideographs</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Унифицированные иероглифы ККЯ</translation>
    </message>
    <message>
        <source>Yi Syllables</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Слоги письма и</translation>
    </message>
    <message>
        <source>Yi Radicals</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Иероглифические ключи письма и</translation>
    </message>
    <message>
        <source>Lisu</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Письменность лису</translation>
    </message>
    <message>
        <source>Vai</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Письменность ваи</translation>
    </message>
    <message>
        <source>Cyrillic Extended-B</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Кириллица (расширение B)</translation>
    </message>
    <message>
        <source>Bamum</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Письменность бамум</translation>
    </message>
    <message>
        <source>Modifier Tone Letters</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Символы изменения тона</translation>
    </message>
    <message>
        <source>Latin Extended-D</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Расширенная латиница-D</translation>
    </message>
    <message>
        <source>Syloti Nagri</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Силоти Нагри</translation>
    </message>
    <message>
        <source>Common Indic Number Forms</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Индийские числовые знаки</translation>
    </message>
    <message>
        <source>Phags-pa</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Квадратное письмо Пагба-ламы</translation>
    </message>
    <message>
        <source>Saurashtra</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Письменность саураштра</translation>
    </message>
    <message>
        <source>Devanagari Extended</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Деванагари (расширение)</translation>
    </message>
    <message>
        <source>Kayah Li</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Письменность кайя</translation>
    </message>
    <message>
        <source>Rejang</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Письменность реджанг</translation>
    </message>
    <message>
        <source>Hangul Jamo Extended-A</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Хангыль (расширение A)</translation>
    </message>
    <message>
        <source>Javanese</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Яванская письменность</translation>
    </message>
    <message>
        <source>Cham</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Чамская письменность</translation>
    </message>
    <message>
        <source>Myanmar Extended-A</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Мьянманская письменность (расширение A)</translation>
    </message>
    <message>
        <source>Tai Viet</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Письменность Тай Вьет</translation>
    </message>
    <message>
        <source>Ethiopic Extended-A</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Эфиопская письменность (расширение A)</translation>
    </message>
    <message>
        <source>Meetei Mayek</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Письменность манипури</translation>
    </message>
    <message>
        <source>Hangul Syllables</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Слоги хангыля</translation>
    </message>
    <message>
        <source>Hangul Jamo Extended-B</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Хангыль (расширение B)</translation>
    </message>
    <message>
        <source>High Surrogates</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Верхняя часть суррогатных пар</translation>
    </message>
    <message>
        <source>High Private Use Surrogates</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Верхняя часть суррогатных пар для частного использования</translation>
    </message>
    <message>
        <source>Low Surrogates</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Нижняя часть суррогатных пар</translation>
    </message>
    <message>
        <source>Private Use Area</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Область для частного использования</translation>
    </message>
    <message>
        <source>CJK Compatibility Ideographs</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Совместимые иероглифы ККЯ</translation>
    </message>
    <message>
        <source>Alphabetic Presentation Forms</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Алфавитные формы представления</translation>
    </message>
    <message>
        <source>Arabic Presentation Forms-A</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Формы представления арабских букв-A</translation>
    </message>
    <message>
        <source>Variation Selectors</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Селекторы вариантов начертания</translation>
    </message>
    <message>
        <source>Vertical Forms</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Вертикальные формы</translation>
    </message>
    <message>
        <source>Combining Half Marks</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Комбинируемые половинки символов</translation>
    </message>
    <message>
        <source>CJK Compatibility Forms</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Формы совместимости ККЯ</translation>
    </message>
    <message>
        <source>Small Form Variants</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Варианты малого размера</translation>
    </message>
    <message>
        <source>Arabic Presentation Forms-B</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Формы представления арабских букв-B</translation>
    </message>
    <message>
        <source>Halfwidth and Fullwidth Forms</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Полуширинные и полноширинные формы</translation>
    </message>
    <message>
        <source>Specials</source>
        <comment>KCharselect unicode block name</comment>
        <translation type="vanished">Специальные символы</translation>
    </message>
    <message>
        <source>Enter a search term or character here</source>
        <translation type="vanished">Введите критерий поиска или символ</translation>
    </message>
    <message>
        <source>Previous in History</source>
        <comment>Goes to previous character</comment>
        <translation type="vanished">Предыдущий символ в списке</translation>
    </message>
    <message>
        <source>Previous Character in History</source>
        <translation type="vanished">Предыдущий символ в списке</translation>
    </message>
    <message>
        <source>Next in History</source>
        <comment>Goes to next character</comment>
        <translation type="vanished">Следующий символ в списке</translation>
    </message>
    <message>
        <source>Next Character in History</source>
        <translation type="vanished">Следующий символ в списке</translation>
    </message>
    <message>
        <source>Select a category</source>
        <translation type="vanished">Выбор группы</translation>
    </message>
    <message>
        <source>Select a block to be displayed</source>
        <translation type="vanished">Выбор блока</translation>
    </message>
    <message>
        <source>Set font</source>
        <translation type="vanished">Задать шрифт</translation>
    </message>
    <message>
        <source>Set font size</source>
        <translation type="vanished">Задать размер шрифта</translation>
    </message>
    <message>
        <source>Character:</source>
        <translation type="vanished">Символ:</translation>
    </message>
    <message>
        <source>Name: </source>
        <translation type="vanished">Имя: </translation>
    </message>
    <message>
        <source>Annotations and Cross References</source>
        <translation type="vanished">Аннотации и перекрёстные ссылки</translation>
    </message>
    <message>
        <source>Alias names:</source>
        <translation type="vanished">Другие представления:</translation>
    </message>
    <message>
        <source>Notes:</source>
        <translation type="vanished">Примечания:</translation>
    </message>
    <message>
        <source>See also:</source>
        <translation type="vanished">См. также:</translation>
    </message>
    <message>
        <source>Equivalents:</source>
        <translation type="vanished">Эквиваленты:</translation>
    </message>
    <message>
        <source>Approximate equivalents:</source>
        <translation type="vanished">Приблизительные эквиваленты:</translation>
    </message>
    <message>
        <source>CJK Ideograph Information</source>
        <translation type="vanished">Сведение об иероглифе CJK</translation>
    </message>
    <message>
        <source>Definition in English: </source>
        <translation type="vanished">Определение на английском: </translation>
    </message>
    <message>
        <source>Mandarin Pronunciation: </source>
        <translation type="vanished">Произношение на мандаринском наречии: </translation>
    </message>
    <message>
        <source>Cantonese Pronunciation: </source>
        <translation type="vanished">Произношение на кантонском наречии: </translation>
    </message>
    <message>
        <source>Japanese On Pronunciation: </source>
        <translation type="vanished">Произношение на онъёми: </translation>
    </message>
    <message>
        <source>Japanese Kun Pronunciation: </source>
        <translation type="vanished">Произношение на кунъёми: </translation>
    </message>
    <message>
        <source>Tang Pronunciation: </source>
        <translation type="vanished">Произношение Танг: </translation>
    </message>
    <message>
        <source>Korean Pronunciation: </source>
        <translation type="vanished">Произношение на корейском: </translation>
    </message>
    <message>
        <source>General Character Properties</source>
        <translation type="vanished">Общие сведения о символе</translation>
    </message>
    <message>
        <source>Block: </source>
        <translation type="vanished">Блок: </translation>
    </message>
    <message>
        <source>Unicode category: </source>
        <translation type="vanished">Категория Юникода: </translation>
    </message>
    <message>
        <source>Various Useful Representations</source>
        <translation type="vanished">Полезные представления</translation>
    </message>
    <message>
        <source>UTF-8:</source>
        <translation type="vanished">UTF-8:</translation>
    </message>
    <message>
        <source>UTF-16: </source>
        <translation type="vanished">UTF-16: </translation>
    </message>
    <message>
        <source>C octal escaped UTF-8: </source>
        <translation type="vanished">Восьмеричный код в UTF-8 на языке C: </translation>
    </message>
    <message>
        <source>XML decimal entity:</source>
        <translation type="vanished">Десятичное представление в XML:</translation>
    </message>
    <message>
        <source>Unicode code point:</source>
        <translation type="vanished">Код Юникода: </translation>
    </message>
    <message>
        <source>In decimal:</source>
        <comment>Character</comment>
        <translation type="vanished">В десятичном виде:</translation>
    </message>
    <message>
        <source>&lt;Non Private Use High Surrogate&gt;</source>
        <translation type="vanished">&lt;заменитель в верхнем регистре&gt;</translation>
    </message>
    <message>
        <source>&lt;Private Use High Surrogate&gt;</source>
        <translation type="vanished">&lt;пользовательский заменитель в верхнем регистре&gt;</translation>
    </message>
    <message>
        <source>&lt;Low Surrogate&gt;</source>
        <translation type="vanished">&lt;заменитель в нижнем регистре&gt;</translation>
    </message>
    <message>
        <source>&lt;Private Use&gt;</source>
        <translation type="vanished">&lt;пользовательский символ&gt;</translation>
    </message>
    <message>
        <source>&lt;not assigned&gt;</source>
        <translation type="vanished">&lt;не присвоен&gt;</translation>
    </message>
    <message>
        <source>Non-printable</source>
        <translation type="vanished">Непечатный</translation>
    </message>
    <message>
        <source>Other, Control</source>
        <translation type="vanished">разное, управляющий</translation>
    </message>
    <message>
        <source>Other, Format</source>
        <translation type="vanished">разное, форматирующий</translation>
    </message>
    <message>
        <source>Other, Not Assigned</source>
        <translation type="vanished">разное, не присвоенный</translation>
    </message>
    <message>
        <source>Other, Private Use</source>
        <translation type="vanished">разное, пользовательский</translation>
    </message>
    <message>
        <source>Other, Surrogate</source>
        <translation type="vanished">разное, заменитель</translation>
    </message>
    <message>
        <source>Letter, Lowercase</source>
        <translation type="vanished">буква в нижнем регистре</translation>
    </message>
    <message>
        <source>Letter, Modifier</source>
        <translation type="vanished">буква, модификатор</translation>
    </message>
    <message>
        <source>Letter, Other</source>
        <translation type="vanished">буква, разное</translation>
    </message>
    <message>
        <source>Letter, Titlecase</source>
        <translation type="vanished">буква, для заголовков</translation>
    </message>
    <message>
        <source>Letter, Uppercase</source>
        <translation type="vanished">буква (верхний регистр)</translation>
    </message>
    <message>
        <source>Mark, Spacing Combining</source>
        <translation type="vanished">отметка, промежуток</translation>
    </message>
    <message>
        <source>Mark, Enclosing</source>
        <translation type="vanished">отметка, символ в скобках</translation>
    </message>
    <message>
        <source>Mark, Non-Spacing</source>
        <translation type="vanished">отметка, без промежутков</translation>
    </message>
    <message>
        <source>Number, Decimal Digit</source>
        <translation type="vanished">число, десятичная цифра</translation>
    </message>
    <message>
        <source>Number, Letter</source>
        <translation type="vanished">число, буква</translation>
    </message>
    <message>
        <source>Number, Other</source>
        <translation type="vanished">число, разное</translation>
    </message>
    <message>
        <source>Punctuation, Connector</source>
        <translation type="vanished">знак пунктуации, соединитель</translation>
    </message>
    <message>
        <source>Punctuation, Dash</source>
        <translation type="vanished">знак пунктуации, тире</translation>
    </message>
    <message>
        <source>Punctuation, Close</source>
        <translation type="vanished">закрывающий знак пунктуации</translation>
    </message>
    <message>
        <source>Punctuation, Final Quote</source>
        <translation type="vanished">знак пунктуации, закрывающая кавычка</translation>
    </message>
    <message>
        <source>Punctuation, Initial Quote</source>
        <translation type="vanished">знак пунктуации, открывающая кавычка</translation>
    </message>
    <message>
        <source>Punctuation, Other</source>
        <translation type="vanished">знак пунктуации, разное</translation>
    </message>
    <message>
        <source>Punctuation, Open</source>
        <translation type="vanished">открывающий знак пунктуации</translation>
    </message>
    <message>
        <source>Symbol, Currency</source>
        <translation type="vanished">символ валюты</translation>
    </message>
    <message>
        <source>Symbol, Modifier</source>
        <translation type="vanished">символ, модификатор</translation>
    </message>
    <message>
        <source>Symbol, Math</source>
        <translation type="vanished">математический символ</translation>
    </message>
    <message>
        <source>Symbol, Other</source>
        <translation type="vanished">символ, разное</translation>
    </message>
    <message>
        <source>Separator, Line</source>
        <translation type="vanished">разделитель строки</translation>
    </message>
    <message>
        <source>Separator, Paragraph</source>
        <translation type="vanished">разделитель абзаца</translation>
    </message>
    <message>
        <source>Separator, Space</source>
        <translation type="vanished">пробел</translation>
    </message>
    <message>
        <source>You will be asked to authenticate before saving</source>
        <translation type="vanished">Перед сохранением настроек нужно будет подтвердить вход в систему</translation>
    </message>
    <message>
        <source>You are not allowed to save the configuration</source>
        <translation type="vanished">У вас нет прав на изменение этих настроек</translation>
    </message>
    <message>
        <source>Next Year</source>
        <comment>@option next year</comment>
        <translation type="vanished">Следующий год</translation>
    </message>
    <message>
        <source>Next Month</source>
        <comment>@option next month</comment>
        <translation type="vanished">Следующий месяц</translation>
    </message>
    <message>
        <source>Next Week</source>
        <comment>@option next week</comment>
        <translation type="vanished">Следующая неделя</translation>
    </message>
    <message>
        <source>Tomorrow</source>
        <comment>@option tomorrow</comment>
        <translation type="vanished">Завтра</translation>
    </message>
    <message>
        <source>Today</source>
        <comment>@option today</comment>
        <translation type="vanished">Сегодня</translation>
    </message>
    <message>
        <source>Yesterday</source>
        <comment>@option yesterday</comment>
        <translation type="vanished">Вчера</translation>
    </message>
    <message>
        <source>Last Week</source>
        <comment>@option last week</comment>
        <translation type="vanished">Неделю назад</translation>
    </message>
    <message>
        <source>Last Month</source>
        <comment>@option last month</comment>
        <translation type="vanished">Месяц назад</translation>
    </message>
    <message>
        <source>Last Year</source>
        <comment>@option last year</comment>
        <translation type="vanished">Год назад</translation>
    </message>
    <message>
        <source>No Date</source>
        <comment>@option do not specify a date</comment>
        <translation type="vanished">Нет даты</translation>
    </message>
    <message>
        <source>The date you entered is invalid</source>
        <comment>@info</comment>
        <translation type="vanished">Введена недопустимая дата</translation>
    </message>
    <message>
        <source>Date cannot be earlier than %1</source>
        <comment>@info</comment>
        <translation type="vanished">Дата не может быть раньше %1</translation>
    </message>
    <message>
        <source>Date cannot be later than %1</source>
        <comment>@info</comment>
        <translation type="vanished">Дата не может быть позднее %1</translation>
    </message>
    <message>
        <source>Week %1</source>
        <translation type="vanished">Неделя %1</translation>
    </message>
    <message>
        <source>Next year</source>
        <translation type="vanished">Следующий год</translation>
    </message>
    <message>
        <source>Previous year</source>
        <translation type="vanished">Предыдущий год</translation>
    </message>
    <message>
        <source>Next month</source>
        <translation type="vanished">Следующий месяц</translation>
    </message>
    <message>
        <source>Previous month</source>
        <translation type="vanished">Предыдущий месяц</translation>
    </message>
    <message>
        <source>Select a week</source>
        <translation type="vanished">Выберите неделю</translation>
    </message>
    <message>
        <source>Select a month</source>
        <translation type="vanished">Выберите месяц</translation>
    </message>
    <message>
        <source>Select a year</source>
        <translation type="vanished">Выберите год</translation>
    </message>
    <message>
        <source>Select the current day</source>
        <translation type="vanished">Выбрать текущий день</translation>
    </message>
    <message>
        <source>UTC</source>
        <comment>UTC time zone</comment>
        <translation type="vanished">UTC</translation>
    </message>
    <message>
        <source>Floating</source>
        <comment>No specific time zone</comment>
        <translation type="vanished">Не определён</translation>
    </message>
    <message>
        <source>The entered date and time is before the minimum allowed date and time.</source>
        <comment>@info</comment>
        <translation type="vanished">Введённые дата и время раньше минимальных допустимых даты и времени.</translation>
    </message>
    <message>
        <source>The entered date and time is after the maximum allowed date and time.</source>
        <comment>@info</comment>
        <translation type="vanished">Введённые дата и время позже максимальных допустимых даты и времени.</translation>
    </message>
    <message>
        <source>&amp;Add</source>
        <translation type="vanished">Доб&amp;авить</translation>
    </message>
    <message>
        <source>&amp;Remove</source>
        <translation type="vanished">&amp;Удалить</translation>
    </message>
    <message>
        <source>Move &amp;Up</source>
        <translation type="vanished">Переместить вв&amp;ерх</translation>
    </message>
    <message>
        <source>Move &amp;Down</source>
        <translation type="vanished">Переместить &amp;вниз</translation>
    </message>
    <message>
        <source>&amp;Help</source>
        <translation type="vanished">&amp;Справка</translation>
    </message>
    <message>
        <source>Clear &amp;History</source>
        <translation type="vanished">Очистить &amp;хронологию</translation>
    </message>
    <message>
        <source>No further items in the history.</source>
        <translation type="vanished">Нет больше элементов в списке.</translation>
    </message>
    <message>
        <source>Shortcut &apos;%1&apos; in Application %2 for action %3
</source>
        <translatorcomment>[https://bugs.kde.org/show_bug.cgi?id=254400] BUGME: В названии действия не удаляется акселератор. Пока что будем делать это вручную (Transcript)
 --aspotashev</translatorcomment>
        <translation type="vanished">Комбинация клавиш «%1» в приложении %2 для действия «%3»
</translation>
    </message>
    <message numerus="yes">
        <source>The shortcut &apos;%2&apos; conflicts with the following key combination:
</source>
        <comment>%1 is the number of conflicts (hidden), %2 is the key sequence of the shortcut that is problematic</comment>
        <translation type="vanished">
            <numerusform>Комбинация клавиш «%2» конфликтует со следующими комбинациями клавиш:
</numerusform>
            <numerusform>Комбинация клавиш «%2» конфликтует со следующими комбинациями клавиш:
</numerusform>
            <numerusform>Комбинация клавиш «%2» конфликтует со следующими комбинациями клавиш:
</numerusform>
        </translation>
        <extra-po-msgid_plural>The shortcut &apos;%2&apos; conflicts with the following key combinations:
</extra-po-msgid_plural>
    </message>
    <message numerus="yes">
        <source>Conflict with Registered Global Shortcut</source>
        <comment>%1 is the number of shortcuts with which there is a conflict</comment>
        <translation type="vanished">
            <numerusform>Конфликт с глобальными комбинациями клавиш</numerusform>
            <numerusform>Конфликт с глобальными комбинациями клавиш</numerusform>
            <numerusform>Конфликт с глобальными комбинациями клавиш</numerusform>
        </translation>
        <extra-po-msgid_plural>Conflict with Registered Global Shortcuts</extra-po-msgid_plural>
    </message>
    <message numerus="yes">
        <source>Shortcut Conflict</source>
        <comment>%1 is the number of conflicts</comment>
        <translation type="vanished">
            <numerusform>Конфликты комбинаций клавиш</numerusform>
            <numerusform>Конфликты комбинаций клавиш</numerusform>
            <numerusform>Конфликты комбинаций клавиш</numerusform>
        </translation>
        <extra-po-msgid_plural>Shortcut Conflicts</extra-po-msgid_plural>
    </message>
    <message>
        <source>Shortcut &apos;%1&apos; for action &apos;%2&apos;
</source>
        <translation type="vanished">Комбинация клавиш «%1» для действия «%2»
</translation>
    </message>
    <message numerus="yes">
        <source>The &quot;%2&quot; shortcut is ambiguous with the following shortcut.
Do you want to assign an empty shortcut to this action?
%3</source>
        <comment>%1 is the number of ambigious shortcut clashes (hidden)</comment>
        <translation type="vanished">
            <numerusform>Комбинация клавиш «%2» конфликтует с приведёнными ниже комбинациями клавиш.
Отменить назначение комбинации клавиш для указанных действий?

%3</numerusform>
            <numerusform>Комбинация клавиш «%2» конфликтует с приведёнными ниже комбинациями клавиш.
Отменить назначение комбинации клавиш для указанных действий?

%3</numerusform>
            <numerusform>Комбинация клавиш «%2» конфликтует с приведёнными ниже комбинациями клавиш.
Отменить назначение комбинации клавиш для указанных действий?

%3</numerusform>
        </translation>
        <extra-po-msgid_plural>The &quot;%2&quot; shortcut is ambiguous with the following shortcuts.
Do you want to assign an empty shortcut to these actions?
%3</extra-po-msgid_plural>
    </message>
    <message>
        <source>Shortcut conflict</source>
        <translation type="vanished">Конфликт комбинации клавиш</translation>
    </message>
    <message>
        <source>&lt;qt&gt;The &apos;%1&apos; key combination is already used by the &lt;b&gt;%2&lt;/b&gt; action.&lt;br&gt;Please select a different one.&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Комбинация клавиш %1 уже связана с действием &lt;b&gt;%2&lt;/b&gt;.&lt;br&gt;Выберите уникальную комбинацию клавиш.&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>Click on the button, then enter the shortcut like you would in the program.
Example for Ctrl+a: hold the Ctrl key and press a.</source>
        <translation type="vanished">Нажмите на кнопке и введите комбинацию клавиш.
Например, для комбинации клавиш Ctrl+A зажмите клавишу Ctrl и нажмите A.</translation>
    </message>
    <message>
        <source>Reserved Shortcut</source>
        <translation type="vanished">Зарезервированная комбинация клавиш</translation>
    </message>
    <message>
        <source>The F12 key is reserved on Windows, so cannot be used for a global shortcut.
Please choose another one.</source>
        <translation type="vanished">В Windows клавиша F12 зарезервирована, поэтому её нельзя использовать в глобальных комбинациях клавиш.
Выберите другую комбинацию клавиш.</translation>
    </message>
    <message>
        <source>Conflict with Standard Application Shortcut</source>
        <translation type="vanished">Конфликт со стандартной клавишей приложения</translation>
    </message>
    <message>
        <source>The &apos;%1&apos; key combination is also used for the standard action &quot;%2&quot; that some applications use.
Do you really want to use it as a global shortcut as well?</source>
        <translation type="vanished">Комбинация клавиш %1 уже связана со стандартным действием «%2», используемым во многих программах.
Вы действительно хотите использовать эту комбинацию как глобальную?</translation>
    </message>
    <message>
        <source>Input</source>
        <comment>What the user inputs now will be taken as the new shortcut</comment>
        <translation type="vanished">Сейчас</translation>
    </message>
    <message>
        <source>The key you just pressed is not supported by Qt.</source>
        <translation type="vanished">Нажатая клавиша не поддерживается в Qt.</translation>
    </message>
    <message>
        <source>Unsupported Key</source>
        <translation type="vanished">Клавиша не поддерживается</translation>
    </message>
    <message>
        <source>without name</source>
        <translation type="vanished">без имени</translation>
    </message>
    <message>
        <source>1</source>
        <comment>Italic placeholder text in line edits: 0 no, 1 yes</comment>
        <translation type="vanished">1</translation>
    </message>
    <message>
        <source>Clear text</source>
        <comment>@action:button Clear current text in the line edit</comment>
        <translation type="vanished">Очистить текст</translation>
    </message>
    <message>
        <source>Text Completion</source>
        <comment>@title:menu</comment>
        <translation type="vanished">Дополнение текста</translation>
    </message>
    <message>
        <source>None</source>
        <comment>@item:inmenu Text Completion</comment>
        <translation type="vanished">Нет</translation>
    </message>
    <message>
        <source>Manual</source>
        <comment>@item:inmenu Text Completion</comment>
        <translation type="vanished">Вручную</translation>
    </message>
    <message>
        <source>Automatic</source>
        <comment>@item:inmenu Text Completion</comment>
        <translation type="vanished">Автоматически</translation>
    </message>
    <message>
        <source>Dropdown List</source>
        <comment>@item:inmenu Text Completion</comment>
        <translation type="vanished">Из выпадающего списка</translation>
    </message>
    <message>
        <source>Short Automatic</source>
        <comment>@item:inmenu Text Completion</comment>
        <translation type="vanished">Полуавтоматически</translation>
    </message>
    <message>
        <source>Dropdown List &amp;&amp; Automatic</source>
        <comment>@item:inmenu Text Completion</comment>
        <translation type="vanished">Из выпадающего списка и автоматически</translation>
    </message>
    <message>
        <source>Default</source>
        <comment>@item:inmenu Text Completion</comment>
        <translation type="vanished">По умолчанию</translation>
    </message>
    <message>
        <source>Image Operations</source>
        <translation type="vanished">Операции с изображением</translation>
    </message>
    <message>
        <source>&amp;Rotate Clockwise</source>
        <translation type="vanished">&amp;Повернуть по часовой стрелке</translation>
    </message>
    <message>
        <source>Rotate &amp;Counterclockwise</source>
        <translation type="vanished">П&amp;овернуть против часовой стрелки</translation>
    </message>
    <message>
        <source>Text &amp;Color...</source>
        <comment>@action</comment>
        <translation type="vanished">&amp;Цвет текста...</translation>
    </message>
    <message>
        <source>Color</source>
        <comment>@label stroke color</comment>
        <translation type="vanished">Цвет</translation>
    </message>
    <message>
        <source>Text &amp;Highlight...</source>
        <comment>@action</comment>
        <translation type="vanished">Подсветка текста...</translation>
    </message>
    <message>
        <source>&amp;Font</source>
        <comment>@action</comment>
        <translation type="vanished">&amp;Шрифт</translation>
    </message>
    <message>
        <source>Font &amp;Size</source>
        <comment>@action</comment>
        <translation type="vanished">&amp;Размер шрифта</translation>
    </message>
    <message>
        <source>&amp;Bold</source>
        <comment>@action boldify selected text</comment>
        <translation type="vanished">Полу&amp;жирный</translation>
    </message>
    <message>
        <source>&amp;Italic</source>
        <comment>@action italicize selected text</comment>
        <translation type="vanished">&amp;Курсив</translation>
    </message>
    <message>
        <source>&amp;Underline</source>
        <comment>@action underline selected text</comment>
        <translation type="vanished">&amp;Подчёркнутый</translation>
    </message>
    <message>
        <source>&amp;Strike Out</source>
        <comment>@action</comment>
        <translation type="vanished">П&amp;еречёркнутый</translation>
    </message>
    <message>
        <source>Align &amp;Left</source>
        <comment>@action</comment>
        <translation type="vanished">По &amp;левому краю</translation>
    </message>
    <message>
        <source>Left</source>
        <comment>@label left justify</comment>
        <translation type="vanished">По левому краю</translation>
    </message>
    <message>
        <source>Align &amp;Center</source>
        <comment>@action</comment>
        <translation type="vanished">По &amp;центру</translation>
    </message>
    <message>
        <source>Center</source>
        <comment>@label center justify</comment>
        <translation type="vanished">По центру</translation>
    </message>
    <message>
        <source>Align &amp;Right</source>
        <comment>@action</comment>
        <translation type="vanished">По &amp;правому краю</translation>
    </message>
    <message>
        <source>Right</source>
        <comment>@label right justify</comment>
        <translation type="vanished">По правому краю</translation>
    </message>
    <message>
        <source>&amp;Justify</source>
        <comment>@action</comment>
        <translation type="vanished">По &amp;ширине</translation>
    </message>
    <message>
        <source>Justify</source>
        <comment>@label justify fill</comment>
        <translation type="vanished">По ширине</translation>
    </message>
    <message>
        <source>Left-to-Right</source>
        <comment>@action</comment>
        <translation type="vanished">Письмо слева направо</translation>
    </message>
    <message>
        <source>Left-to-Right</source>
        <comment>@label left-to-right</comment>
        <translation type="vanished">Слева направо</translation>
    </message>
    <message>
        <source>Right-to-Left</source>
        <comment>@action</comment>
        <translation type="vanished">Письмо справа налево</translation>
    </message>
    <message>
        <source>Right-to-Left</source>
        <comment>@label right-to-left</comment>
        <translation type="vanished">Справа налево</translation>
    </message>
    <message>
        <source>List Style</source>
        <comment>@title:menu</comment>
        <translation type="vanished">Стиль списка</translation>
    </message>
    <message>
        <source>None</source>
        <comment>@item:inmenu no list style</comment>
        <translation type="vanished">Нет</translation>
    </message>
    <message>
        <source>Disc</source>
        <comment>@item:inmenu disc list style</comment>
        <translation type="vanished">Диски</translation>
    </message>
    <message>
        <source>Circle</source>
        <comment>@item:inmenu circle list style</comment>
        <translation type="vanished">Кружки</translation>
    </message>
    <message>
        <source>Square</source>
        <comment>@item:inmenu square list style</comment>
        <translation type="vanished">Квадраты</translation>
    </message>
    <message>
        <source>123</source>
        <comment>@item:inmenu numbered lists</comment>
        <translation type="vanished">123</translation>
    </message>
    <message>
        <source>abc</source>
        <comment>@item:inmenu lowercase abc lists</comment>
        <translation type="vanished">abc</translation>
    </message>
    <message>
        <source>ABC</source>
        <comment>@item:inmenu uppercase abc lists</comment>
        <translation type="vanished">ABC</translation>
    </message>
    <message>
        <source>i ii iii</source>
        <comment>@item:inmenu lower case roman numerals</comment>
        <translation type="vanished">i ii iii</translation>
    </message>
    <message>
        <source>I II III</source>
        <comment>@item:inmenu upper case roman numerals</comment>
        <translation type="vanished">I II III</translation>
    </message>
    <message>
        <source>Increase Indent</source>
        <comment>@action</comment>
        <translation type="vanished">Увеличить отступ</translation>
    </message>
    <message>
        <source>Decrease Indent</source>
        <comment>@action</comment>
        <translation type="vanished">Уменьшить отступ</translation>
    </message>
    <message>
        <source>Insert Rule Line</source>
        <comment>@action</comment>
        <translation type="vanished">Вставить горизонтальную линию</translation>
    </message>
    <message>
        <source>Link</source>
        <comment>@action</comment>
        <translation type="vanished">Ссылка</translation>
    </message>
    <message>
        <source>Format Painter</source>
        <comment>@action</comment>
        <translation type="vanished">Преобразовать в текст с форматированием</translation>
    </message>
    <message>
        <source>To Plain Text</source>
        <comment>@action</comment>
        <translation type="vanished">Преобразовать в обычный текст</translation>
    </message>
    <message>
        <source>Subscript</source>
        <comment>@action</comment>
        <translation type="vanished">Нижний индекс</translation>
    </message>
    <message>
        <source>Superscript</source>
        <comment>@action</comment>
        <translation type="vanished">Верхний индекс</translation>
    </message>
    <message>
        <source>&amp;Copy Full Text</source>
        <translation type="vanished">&amp;Копировать весь текст</translation>
    </message>
    <message>
        <source>Nothing to spell check.</source>
        <translation type="vanished">Нечего проверять.</translation>
    </message>
    <message>
        <source>Speak Text</source>
        <translation type="vanished">Зачитать текст</translation>
    </message>
    <message>
        <source>Starting Jovie Text-to-Speech Service Failed</source>
        <translation type="vanished">Не удалось запустить службу синтеза речи Jovie</translation>
    </message>
    <message>
        <source>No suggestions for %1</source>
        <translation type="vanished">Нет вариантов для %1</translation>
    </message>
    <message>
        <source>Ignore</source>
        <translation type="vanished">Пропустить</translation>
    </message>
    <message>
        <source>Add to Dictionary</source>
        <translation type="vanished">Добавить в словарь</translation>
    </message>
    <message>
        <source>The time you entered is invalid</source>
        <comment>@info</comment>
        <translation type="vanished">Введено недопустимое время</translation>
    </message>
    <message>
        <source>Time cannot be earlier than %1</source>
        <comment>@info</comment>
        <translation type="vanished">Время не может быть раньше %1</translation>
    </message>
    <message>
        <source>Time cannot be later than %1</source>
        <comment>@info</comment>
        <translation type="vanished">Время не может быть позднее %1</translation>
    </message>
    <message>
        <source>Area</source>
        <comment>Define an area in the time zone, like a town area</comment>
        <translation type="vanished">Регион</translation>
    </message>
    <message>
        <source>Region</source>
        <comment>Time zone</comment>
        <translation type="vanished">Область</translation>
    </message>
    <message>
        <source>Comment</source>
        <translation type="vanished">Комментарий</translation>
    </message>
    <message>
        <source>Show Text</source>
        <comment>@title:menu</comment>
        <translatorcomment>&quot;Подпись кнопки&quot;? (на данный момент она одна, 22 марта 2011 г.) --aspotashev</translatorcomment>
        <translation type="vanished">Подписи кнопок</translation>
    </message>
    <message>
        <source>Toolbar Settings</source>
        <comment>@title:menu</comment>
        <translation type="vanished">Меню панели инструментов</translation>
    </message>
    <message>
        <source>Orientation</source>
        <comment>Toolbar orientation</comment>
        <translation type="vanished">Ориентация</translation>
    </message>
    <message>
        <source>Top</source>
        <comment>toolbar position string</comment>
        <translation type="vanished">Вверху</translation>
    </message>
    <message>
        <source>Left</source>
        <comment>toolbar position string</comment>
        <translation type="vanished">Слева</translation>
    </message>
    <message>
        <source>Right</source>
        <comment>toolbar position string</comment>
        <translation type="vanished">Справа</translation>
    </message>
    <message>
        <source>Bottom</source>
        <comment>toolbar position string</comment>
        <translation type="vanished">Внизу</translation>
    </message>
    <message>
        <source>Text Position</source>
        <translation type="vanished">Положение текста</translation>
    </message>
    <message>
        <source>Icons Only</source>
        <translation type="vanished">Только значки</translation>
    </message>
    <message>
        <source>Text Only</source>
        <translation type="vanished">Только подписи</translation>
    </message>
    <message>
        <source>Text Alongside Icons</source>
        <translation type="vanished">Подписи сбоку от значков</translation>
    </message>
    <message>
        <source>Text Under Icons</source>
        <translation type="vanished">Подписи под значками</translation>
    </message>
    <message>
        <source>Icon Size</source>
        <translation type="vanished">Размер значков</translation>
    </message>
    <message>
        <source>Default</source>
        <comment>@item:inmenu Icon size</comment>
        <translation type="vanished">По умолчанию</translation>
    </message>
    <message>
        <source>Small (%1x%2)</source>
        <translation type="vanished">Малые (%1x%2)</translation>
    </message>
    <message>
        <source>Medium (%1x%2)</source>
        <translation type="vanished">Средние (%1x%2)</translation>
    </message>
    <message>
        <source>Large (%1x%2)</source>
        <translation type="vanished">Большие (%1x%2)</translation>
    </message>
    <message>
        <source>Huge (%1x%2)</source>
        <translation type="vanished">Очень большие (%1x%2)</translation>
    </message>
    <message>
        <source>Lock Toolbar Positions</source>
        <translation type="vanished">Заблокировать панели инструментов</translation>
    </message>
    <message>
        <source>%1</source>
        <comment>@action:intoolbar Text label of toolbar button</comment>
        <translation type="vanished">%1</translation>
    </message>
    <message>
        <source>%1</source>
        <comment>@info:tooltip Tooltip of toolbar button</comment>
        <translation type="vanished">%1</translation>
    </message>
    <message>
        <source>Desktop %1</source>
        <translation type="vanished">Рабочий стол %1</translation>
    </message>
    <message>
        <source>Add to Toolbar</source>
        <translation type="vanished">Добавить на панель инструментов</translation>
    </message>
    <message>
        <source>Configure Shortcut...</source>
        <translation type="vanished">Настроить комбинацию клавиш...</translation>
    </message>
    <message>
        <source>Toolbars Shown</source>
        <translation type="vanished">Видимые панели инструментов</translation>
    </message>
    <message>
        <source>No text</source>
        <translation type="vanished">Нет текста</translation>
    </message>
    <message>
        <source>&amp;File</source>
        <translation type="vanished">&amp;Файл</translation>
    </message>
    <message>
        <source>&amp;Game</source>
        <translation type="vanished">&amp;Игра</translation>
    </message>
    <message>
        <source>&amp;Edit</source>
        <translation type="vanished">&amp;Правка</translation>
    </message>
    <message>
        <source>&amp;Move</source>
        <comment>@title:menu Game move</comment>
        <translation type="vanished">&amp;Ход</translation>
    </message>
    <message>
        <source>&amp;View</source>
        <translation type="vanished">&amp;Вид</translation>
    </message>
    <message>
        <source>&amp;Go</source>
        <translation type="vanished">Пере&amp;ход</translation>
    </message>
    <message>
        <source>&amp;Bookmarks</source>
        <translation type="vanished">&amp;Закладки</translation>
    </message>
    <message>
        <source>&amp;Tools</source>
        <translation type="vanished">С&amp;ервис</translation>
    </message>
    <message>
        <source>&amp;Settings</source>
        <translation type="vanished">&amp;Настройка</translation>
    </message>
    <message>
        <source>Main Toolbar</source>
        <translation type="vanished">Основная панель инструментов</translation>
    </message>
    <message>
        <source>Builds Qt widget plugins from an ini style description file.</source>
        <translation type="vanished">Создаёт расширения виджетов Qt из файла описания стилей.</translation>
    </message>
    <message>
        <source>Input file</source>
        <translation type="vanished">Файл ввода</translation>
    </message>
    <message>
        <source>Output file</source>
        <translation type="vanished">Файл вывода</translation>
    </message>
    <message>
        <source>Name of the plugin class to generate</source>
        <translation type="vanished">Имя создаваемого класса расширения</translation>
    </message>
    <message>
        <source>Default widget group name to display in designer</source>
        <translation type="vanished">Имя группы виджетов по умолчанию для показа в дизайнере</translation>
    </message>
    <message>
        <source>makekdewidgets</source>
        <translation type="vanished">makekdewidgets</translation>
    </message>
    <message>
        <source>(C) 2004-2005 Ian Reinhart Geiser</source>
        <translation type="vanished">© Ian Reinhart Geiser, 2004-2005</translation>
    </message>
    <message>
        <source>Ian Reinhart Geiser</source>
        <translation type="vanished">Ian Reinhart Geiser</translation>
    </message>
    <message>
        <source>Daniel Molkentin</source>
        <translation type="vanished">Daniel Molkentin</translation>
    </message>
    <message>
        <source>Call Stack</source>
        <translation type="vanished">Стек вызовов</translation>
    </message>
    <message>
        <source>Call</source>
        <translation type="vanished">Вызов</translation>
    </message>
    <message>
        <source>Line</source>
        <translation type="vanished">Строка</translation>
    </message>
    <message>
        <source>Console</source>
        <translation type="vanished">Консоль</translation>
    </message>
    <message>
        <source>Enter</source>
        <translation type="vanished">Enter</translation>
    </message>
    <message>
        <source>Unable to find the Kate editor component;
please check your KDE installation.</source>
        <translation type="vanished">Не удалось найти компонент текстового редактора Kate.
Проверьте правильность установки KDE.</translation>
    </message>
    <message>
        <source>Breakpoint</source>
        <translation type="vanished">Точка останова</translation>
    </message>
    <message>
        <source>JavaScript Debugger</source>
        <translation type="vanished">Отладчик JavaScript</translation>
    </message>
    <message>
        <source>&amp;Break at Next Statement</source>
        <translation type="vanished">П&amp;рерывание на следующем операторе</translation>
    </message>
    <message>
        <source>Break at Next</source>
        <translation type="vanished">Прервать на следующем операторе</translation>
    </message>
    <message>
        <source>Continue</source>
        <translation type="vanished">Продолжить</translation>
    </message>
    <message>
        <source>Step Over</source>
        <translation type="vanished">Перейти на следующую строку</translation>
    </message>
    <message>
        <source>Step Into</source>
        <translation type="vanished">Войти в функцию</translation>
    </message>
    <message>
        <source>Step Out</source>
        <translation type="vanished">Выполнить функцию</translation>
    </message>
    <message>
        <source>Reindent Sources</source>
        <translation type="vanished">Выровнять отступы</translation>
    </message>
    <message>
        <source>Report Exceptions</source>
        <translation type="vanished">Сообщить об ошибке</translation>
    </message>
    <message>
        <source>&amp;Debug</source>
        <translation type="vanished">&amp;Отладка</translation>
    </message>
    <message>
        <source>Close source</source>
        <translation type="vanished">Закрыть исходный код</translation>
    </message>
    <message>
        <source>Ready</source>
        <translation type="vanished">Готово</translation>
    </message>
    <message>
        <source>Parse error at %1 line %2</source>
        <translation type="vanished">Ошибка разбора %1 в строке %2</translation>
    </message>
    <message>
        <source>An error occurred while attempting to run a script on this page.

%1 line %2:
%3</source>
        <translation type="vanished">Произошла ошибка при попытке выполнить скрипт на этой странице.

%1 строка %2:
%3</translation>
    </message>
    <message>
        <source>Do not know where to evaluate the expression. Please pause a script or open a source file.</source>
        <translation type="vanished">Неизвестно, в чём выполнять выражение. Остановите выполнение скрипта или откройте файл с исходным кодом.</translation>
    </message>
    <message>
        <source>Evaluation threw an exception %1</source>
        <translation type="vanished">Появление исключения %1 при выполнении</translation>
    </message>
    <message>
        <source>JavaScript Error</source>
        <translation type="vanished">Ошибка JavaScript</translation>
    </message>
    <message>
        <source>&amp;Do not show this message again</source>
        <translation type="vanished">&amp;Не выводить больше это сообщение</translation>
    </message>
    <message>
        <source>Local Variables</source>
        <translation type="vanished">Локальные переменные</translation>
    </message>
    <message>
        <source>Reference</source>
        <translation type="vanished">Ссылка</translation>
    </message>
    <message>
        <source>Loaded Scripts</source>
        <translation type="vanished">Загруженные скрипты</translation>
    </message>
    <message>
        <source>A script on this page is causing KHTML to freeze. If it continues to run, other applications may become less responsive.
Do you want to stop the script?</source>
        <translation type="vanished">Сценарий на этой странице привёл к зависанию KHTML. Если он продолжит работать, другие приложения будут отзываться медленнее.
Прервать работу сценария?</translation>
    </message>
    <message>
        <source>JavaScript</source>
        <translation type="vanished">JavaScript</translation>
    </message>
    <message>
        <source>&amp;Stop Script</source>
        <translation type="vanished">&amp;Остановить сценарий</translation>
    </message>
    <message>
        <source>Confirmation: JavaScript Popup</source>
        <translation type="vanished">Подтверждение: Всплывающее окно Javascript</translation>
    </message>
    <message>
        <source>This site is submitting a form which will open up a new browser window via JavaScript.
Do you want to allow the form to be submitted?</source>
        <translation type="vanished">Этот сайт пытается отправить форму, что приведёт к открытию нового окна браузера с помощью JavaScript.
Разрешить?</translation>
    </message>
    <message>
        <source>&lt;qt&gt;This site is submitting a form which will open &lt;p&gt;%1&lt;/p&gt; in a new browser window via JavaScript.&lt;br /&gt;Do you want to allow the form to be submitted?&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt; Этот сайт пытается отправить форму, что приведёт к открытию &lt;p&gt;%1&lt;/p&gt; в новом окне браузера с помощью JavaScript.&lt;br /&gt;Разрешить?&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>Allow</source>
        <translation type="vanished">Разрешить</translation>
    </message>
    <message>
        <source>Do Not Allow</source>
        <translation type="vanished">Запретить</translation>
    </message>
    <message>
        <source>This site is requesting to open up a new browser window via JavaScript.
Do you want to allow this?</source>
        <translation type="vanished">Этот сайт пытается открыть новое окно с использованием Javascript.
Разрешить открыть окно?</translation>
    </message>
    <message>
        <source>&lt;qt&gt;This site is requesting to open&lt;p&gt;%1&lt;/p&gt;in a new browser window via JavaScript.&lt;br /&gt;Do you want to allow this?&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Этот сайт пытается открыть&lt;p&gt;%1&lt;/p&gt;в новом окне браузера с помощью JavaScript.&lt;br /&gt;Разрешить?&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>Close window?</source>
        <translation type="vanished">Закрыть окно?</translation>
    </message>
    <message>
        <source>Confirmation Required</source>
        <translation type="vanished">Требуется подтверждение</translation>
    </message>
    <message>
        <source>Do you want a bookmark pointing to the location &quot;%1&quot; to be added to your collection?</source>
        <translation type="vanished">Добавить закладку на адрес «%1» в вашу коллекцию?</translation>
    </message>
    <message>
        <source>Do you want a bookmark pointing to the location &quot;%1&quot; titled &quot;%2&quot; to be added to your collection?</source>
        <translation type="vanished">Добавить закладку на адрес «%1» с заголовком «%2» в вашу коллекцию?</translation>
    </message>
    <message>
        <source>JavaScript Attempted Bookmark Insert</source>
        <translation type="vanished">JavaScript пытается добавить закладку</translation>
    </message>
    <message>
        <source>Insert</source>
        <translation type="vanished">Вставить</translation>
    </message>
    <message>
        <source>Disallow</source>
        <translation type="vanished">Запретить</translation>
    </message>
    <message>
        <source>The following files will not be uploaded because they could not be found.
Do you want to continue?</source>
        <translation type="vanished">Указанные файлы не могут быть загружены, поскольку они не найдены.
Продолжить?</translation>
    </message>
    <message>
        <source>Submit Confirmation</source>
        <translation type="vanished">Подтверждение отправки</translation>
    </message>
    <message>
        <source>&amp;Submit Anyway</source>
        <translation type="vanished">&amp;Отправить</translation>
    </message>
    <message>
        <source>You are about to transfer the following files from your local computer to the Internet.
Do you really want to continue?</source>
        <translation type="vanished">Была запрошена передача следующих файлов с этого компьютера в Интернет.
Продолжить?</translation>
    </message>
    <message>
        <source>Send Confirmation</source>
        <translation type="vanished">Подтверждение передачи</translation>
    </message>
    <message numerus="yes">
        <source>&amp;Send File</source>
        <translation type="vanished">
            <numerusform>&amp;Отправить файлы</numerusform>
            <numerusform>&amp;Отправить файлы</numerusform>
            <numerusform>&amp;Отправить файлы</numerusform>
        </translation>
        <extra-po-msgid_plural>&amp;Send Files</extra-po-msgid_plural>
    </message>
    <message>
        <source>Submit</source>
        <translation type="vanished">Отправить</translation>
    </message>
    <message>
        <source>Key Generator</source>
        <translation type="vanished">Генератор ключа</translation>
    </message>
    <message>
        <source>No plugin found for &apos;%1&apos;.
Do you want to download one from %2?</source>
        <translation type="vanished">Не обнаружено расширение для «%1».
Загрузить его с адреса %2?</translation>
    </message>
    <message>
        <source>Missing Plugin</source>
        <translation type="vanished">Отсутствует расширение</translation>
    </message>
    <message>
        <source>Download</source>
        <translation type="vanished">Загрузить</translation>
    </message>
    <message>
        <source>Do Not Download</source>
        <translation type="vanished">Не загружать</translation>
    </message>
    <message>
        <source>This is a searchable index. Enter search keywords: </source>
        <translation type="vanished">Это индекс с возможностью поиска. Введите ключевые слова: </translation>
    </message>
    <message>
        <source>Document Information</source>
        <translation type="vanished">Сведения о документе</translation>
    </message>
    <message>
        <source>General</source>
        <comment>@title:group Document information</comment>
        <translation type="vanished">Главное</translation>
    </message>
    <message>
        <source>URL:</source>
        <translation type="vanished">Ссылка:</translation>
    </message>
    <message>
        <source>Title:</source>
        <translation type="vanished">Заголовок:</translation>
    </message>
    <message>
        <source>Last modified:</source>
        <translation type="vanished">Последнее изменение:</translation>
    </message>
    <message>
        <source>Document encoding:</source>
        <translation type="vanished">Кодировка документа:</translation>
    </message>
    <message>
        <source>Rendering mode:</source>
        <translation type="vanished">Режим показа HTML:</translation>
    </message>
    <message>
        <source>HTTP Headers</source>
        <translation type="vanished">Заголовки HTTP</translation>
    </message>
    <message>
        <source>Property</source>
        <translation type="vanished">Параметр</translation>
    </message>
    <message>
        <source>Initializing Applet &quot;%1&quot;...</source>
        <translation type="vanished">Открывается аплет «%1»...</translation>
    </message>
    <message>
        <source>Starting Applet &quot;%1&quot;...</source>
        <translation type="vanished">Запускается аплет «%1»...</translation>
    </message>
    <message>
        <source>Applet &quot;%1&quot; started</source>
        <translation type="vanished">Аплет «%1» запущен</translation>
    </message>
    <message>
        <source>Applet &quot;%1&quot; stopped</source>
        <translation type="vanished">Аплет «%1» остановлен</translation>
    </message>
    <message>
        <source>Loading Applet</source>
        <translation type="vanished">Загрузка аплета</translation>
    </message>
    <message>
        <source>Error: java executable not found</source>
        <translation type="vanished">Ошибка: не найдена программа java</translation>
    </message>
    <message>
        <source>Signed by (validation: %1)</source>
        <translation type="vanished">Подписано (подлинность: %1)</translation>
    </message>
    <message>
        <source>Certificate (validation: %1)</source>
        <translation type="vanished">Сертификат (подлинность: %1) </translation>
    </message>
    <message>
        <source>Security Alert</source>
        <translation type="vanished">Извещение системы безопасности</translation>
    </message>
    <message>
        <source>Do you grant Java applet with certificate(s):</source>
        <translation type="vanished">Запускать аплеты Java с сертификатами:</translation>
    </message>
    <message>
        <source>the following permission</source>
        <translation type="vanished">следующие права</translation>
    </message>
    <message>
        <source>&amp;Reject All</source>
        <translation type="vanished">&amp;Отклонить все</translation>
    </message>
    <message>
        <source>&amp;Grant All</source>
        <translation type="vanished">&amp;Принять все</translation>
    </message>
    <message>
        <source>Applet Parameters</source>
        <translation type="vanished">Параметры аплета</translation>
    </message>
    <message>
        <source>Parameter</source>
        <translation type="vanished">Параметр</translation>
    </message>
    <message>
        <source>Class</source>
        <translation type="vanished">Класс</translation>
    </message>
    <message>
        <source>Base URL</source>
        <translation type="vanished">Базовый URL</translation>
    </message>
    <message>
        <source>Archives</source>
        <translation type="vanished">Архивы</translation>
    </message>
    <message>
        <source>KDE Java Applet Plugin</source>
        <translation type="vanished">Поддержка аплетов Java для среды KDE</translation>
    </message>
    <message>
        <source>HTML Toolbar</source>
        <translation type="vanished">Панель инструментов HTML</translation>
    </message>
    <message>
        <source>&amp;Copy Text</source>
        <translation type="vanished">&amp;Копировать текст</translation>
    </message>
    <message>
        <source>Open &apos;%1&apos;</source>
        <translation type="vanished">Открыть %1</translation>
    </message>
    <message>
        <source>&amp;Copy Email Address</source>
        <translation type="vanished">Скопировать &amp;адрес электронной почты</translation>
    </message>
    <message>
        <source>&amp;Save Link As...</source>
        <translation type="vanished">Сохранить сс&amp;ылку как...</translation>
    </message>
    <message>
        <source>&amp;Copy Link Address</source>
        <translation type="vanished">С&amp;копировать адрес ссылки</translation>
    </message>
    <message>
        <source>Frame</source>
        <comment>@title:menu HTML frame/iframe</comment>
        <translation type="vanished">Фрейм</translation>
    </message>
    <message>
        <source>Open in New &amp;Window</source>
        <translation type="vanished">Открыть в &amp;новом окне</translation>
    </message>
    <message>
        <source>Open in &amp;This Window</source>
        <translation type="vanished">Открыть в &amp;текущем окне</translation>
    </message>
    <message>
        <source>Open in &amp;New Tab</source>
        <translation type="vanished">Открыть в новой &amp;вкладке</translation>
    </message>
    <message>
        <source>Reload Frame</source>
        <translation type="vanished">Обновить фрейм</translation>
    </message>
    <message>
        <source>Print Frame...</source>
        <translation type="vanished">Печать фрейма...</translation>
    </message>
    <message>
        <source>Save &amp;Frame As...</source>
        <translation type="vanished">Сохранить &amp;фрейм как...</translation>
    </message>
    <message>
        <source>View Frame Source</source>
        <translation type="vanished">Просмотреть исходный текст фрейма</translation>
    </message>
    <message>
        <source>View Frame Information</source>
        <translation type="vanished">Сведения о фрейме</translation>
    </message>
    <message>
        <source>Block IFrame...</source>
        <translation type="vanished">Заблокировать IFrame...</translation>
    </message>
    <message>
        <source>Save Image As...</source>
        <translation type="vanished">Сохранить изображение как...</translation>
    </message>
    <message>
        <source>Send Image...</source>
        <translation type="vanished">Отправить изображение...</translation>
    </message>
    <message>
        <source>Copy Image</source>
        <translation type="vanished">Скопировать изображение</translation>
    </message>
    <message>
        <source>Copy Image Location</source>
        <translation type="vanished">Скопировать ссылку на изображение</translation>
    </message>
    <message>
        <source>View Image (%1)</source>
        <translation type="vanished">Просмотр изображения (%1)</translation>
    </message>
    <message>
        <source>Block Image...</source>
        <translation type="vanished">Заблокировать изображение...</translation>
    </message>
    <message>
        <source>Block Images From %1</source>
        <translation type="vanished">Заблокировать изображения от %1</translation>
    </message>
    <message>
        <source>Stop Animations</source>
        <translation type="vanished">Остановить анимацию</translation>
    </message>
    <message>
        <source>Search for &apos;%1&apos; with %2</source>
        <translation type="vanished">Поиск «%1» в %2</translation>
    </message>
    <message>
        <source>Search for &apos;%1&apos; with</source>
        <translation type="vanished">Поиск «%1» в</translation>
    </message>
    <message>
        <source>Save Link As</source>
        <translation type="vanished">Сохранить конечный документ как</translation>
    </message>
    <message>
        <source>Save Image As</source>
        <translation type="vanished">Сохранить изображение как</translation>
    </message>
    <message>
        <source>Add URL to Filter</source>
        <translation type="vanished">Добавление адреса в фильтр</translation>
    </message>
    <message>
        <source>Enter the URL:</source>
        <translation type="vanished">Введите адрес:</translation>
    </message>
    <message>
        <source>A file named &quot;%1&quot; already exists. Are you sure you want to overwrite it?</source>
        <translation type="vanished">Файл с именем «%1» уже существует. Заменить его?</translation>
    </message>
    <message>
        <source>Overwrite File?</source>
        <translation type="vanished">Заменить файл?</translation>
    </message>
    <message>
        <source>Overwrite</source>
        <translation type="vanished">Заменить</translation>
    </message>
    <message>
        <source>The Download Manager (%1) could not be found in your $PATH </source>
        <translation type="vanished">Не удалось найти программу менеджера загрузки (%1) в $PATH.</translation>
    </message>
    <message>
        <source>Try to reinstall it  

The integration with Konqueror will be disabled.</source>
        <translation type="vanished">Попробуйте переустановить программу.

Интеграция с Konqueror будет выключена.</translation>
    </message>
    <message>
        <source>Default Font Size (100%)</source>
        <translation type="vanished">Размер шрифта по умолчанию (100%)</translation>
    </message>
    <message>
        <source>KHTML</source>
        <translation type="vanished">KHTML</translation>
    </message>
    <message>
        <source>Embeddable HTML component</source>
        <translation type="vanished">Встраиваемый компонент для показа HTML</translation>
    </message>
    <message>
        <source>Lars Knoll</source>
        <translation type="vanished">Lars Knoll</translation>
    </message>
    <message>
        <source>Antti Koivisto</source>
        <translation type="vanished">Antti Koivisto</translation>
    </message>
    <message>
        <source>Dirk Mueller</source>
        <translation type="vanished">Dirk Mueller</translation>
    </message>
    <message>
        <source>Peter Kelly</source>
        <translation type="vanished">Peter Kelly</translation>
    </message>
    <message>
        <source>Torben Weis</source>
        <translation type="vanished">Torben Weis</translation>
    </message>
    <message>
        <source>Martin Jones</source>
        <translation type="vanished">Martin Jones</translation>
    </message>
    <message>
        <source>Simon Hausmann</source>
        <translation type="vanished">Simon Hausmann</translation>
    </message>
    <message>
        <source>Tobias Anton</source>
        <translation type="vanished">Tobias Anton</translation>
    </message>
    <message>
        <source>View Do&amp;cument Source</source>
        <translation type="vanished">Просмотреть исходный текст до&amp;кумента</translation>
    </message>
    <message>
        <source>View Document Information</source>
        <translation type="vanished">Просмотреть сведения о документе</translation>
    </message>
    <message>
        <source>Save &amp;Background Image As...</source>
        <translation type="vanished">Сохранить фоновое &amp;изображение как...</translation>
    </message>
    <message>
        <source>SSL</source>
        <translation type="vanished">SSL</translation>
    </message>
    <message>
        <source>Print Rendering Tree to STDOUT</source>
        <translation type="vanished">Вывести дерево прорисовки на STDOUT</translation>
    </message>
    <message>
        <source>Print DOM Tree to STDOUT</source>
        <translation type="vanished">Вывести дерево DOM на STDOUT</translation>
    </message>
    <message>
        <source>Print frame tree to STDOUT</source>
        <translation type="vanished">Вывести дерево фреймов на STDOUT</translation>
    </message>
    <message>
        <source>Stop Animated Images</source>
        <translation type="vanished">Остановить анимацию рисунков</translation>
    </message>
    <message>
        <source>Set &amp;Encoding</source>
        <translation type="vanished">&amp;Кодировка...</translation>
    </message>
    <message>
        <source>Use S&amp;tylesheet</source>
        <translation type="vanished">Использовать таблицу &amp;стилей</translation>
    </message>
    <message>
        <source>Enlarge Font</source>
        <translation type="vanished">Увеличить шрифт</translation>
    </message>
    <message>
        <source>&lt;qt&gt;Enlarge Font&lt;br /&gt;&lt;br /&gt;Make the font in this window bigger. Click and hold down the mouse button for a menu with all available font sizes.&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Увеличить шрифт&lt;br /&gt;&lt;br /&gt;Увеличить шрифт в этом окне. Нажмите и удерживайте кнопку мыши для показа меню с доступными размерами шрифта.&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>Shrink Font</source>
        <translation type="vanished">Уменьшить шрифт</translation>
    </message>
    <message>
        <source>&lt;qt&gt;Shrink Font&lt;br /&gt;&lt;br /&gt;Make the font in this window smaller. Click and hold down the mouse button for a menu with all available font sizes.&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Уменьшить шрифт&lt;br /&gt;&lt;br /&gt;Уменьшить шрифт в этом окне. Нажмите и удерживайте кнопку мыши для показа меню с доступными размерами шрифта.&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>&lt;qt&gt;Find text&lt;br /&gt;&lt;br /&gt;Shows a dialog that allows you to find text on the displayed page.&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Найти текст&lt;br /&gt;&lt;br /&gt;Диалог поиска текста на текущей странице.&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>&lt;qt&gt;Find next&lt;br /&gt;&lt;br /&gt;Find the next occurrence of the text that you have found using the &lt;b&gt;Find Text&lt;/b&gt; function.&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Найти далее&lt;br /&gt;&lt;br /&gt;Поиск следующего вхождения текста, указанного в поле &lt;b&gt;Найти текст&lt;/b&gt;.&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>&lt;qt&gt;Find previous&lt;br /&gt;&lt;br /&gt;Find the previous occurrence of the text that you have found using the &lt;b&gt;Find Text&lt;/b&gt; function.&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Найти предыдущее&lt;br /&gt;&lt;br /&gt;Поиск предыдущего вхождения текста, указанного в поле &lt;b&gt;Найти текст&lt;/b&gt;.&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>Find Text as You Type</source>
        <translation type="vanished">Поиск текста по мере набора</translation>
    </message>
    <message>
        <source>This shortcut shows the find bar, for finding text in the displayed page. It cancels the effect of &quot;Find Links as You Type&quot;, which sets the &quot;Find links only&quot; option.</source>
        <translation type="vanished">Эта комбинация клавиш вызывает панель для поиска текста на текущей странице. Это отключит функцию поиска ссылок по набору.</translation>
    </message>
    <message>
        <source>Find Links as You Type</source>
        <translation type="vanished">Поиск ссылок по мере набора</translation>
    </message>
    <message>
        <source>This shortcut shows the find bar, and sets the option &quot;Find links only&quot;.</source>
        <translation type="vanished">Эта комбинация клавиш вызывает панель для поиска ссылок на текущей странице.</translation>
    </message>
    <message>
        <source>&lt;qt&gt;Print Frame&lt;br /&gt;&lt;br /&gt;Some pages have several frames. To print only a single frame, click on it and then use this function.&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Печать фрейма&lt;br /&gt;&lt;br /&gt;Некоторые страницы могут содержать несколько фреймов. Чтобы напечатать только один фрейм, нажмите на нем и используйте эту функцию.&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>Toggle Caret Mode</source>
        <translation type="vanished">Переключи&amp;ть режим вставки/замены</translation>
    </message>
    <message>
        <source>The fake user-agent &apos;%1&apos; is in use.</source>
        <translation type="vanished">Используется подложный идентификатор браузера «%1».</translation>
    </message>
    <message>
        <source>This web page contains coding errors.</source>
        <translation type="vanished">Эта веб-страница содержит ошибки кодирования.</translation>
    </message>
    <message>
        <source>&amp;Hide Errors</source>
        <translation type="vanished">&amp;Скрыть ошибки</translation>
    </message>
    <message>
        <source>&amp;Disable Error Reporting</source>
        <translation type="vanished">&amp;Запретить сообщения об ошибках</translation>
    </message>
    <message>
        <source>&lt;qt&gt;&lt;b&gt;Error&lt;/b&gt;: %1: %2&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;&lt;b&gt;Ошибка&lt;/b&gt;: %1: %2&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>&lt;qt&gt;&lt;b&gt;Error&lt;/b&gt;: node %1: %2&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;&lt;b&gt;Ошибка&lt;/b&gt;: узел %1: %2&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>Display Images on Page</source>
        <translation type="vanished">Показать изображения на странице</translation>
    </message>
    <message>
        <source>Error: %1 - %2</source>
        <translation type="vanished">Ошибка: %1 — %2</translation>
    </message>
    <message>
        <source>The requested operation could not be completed</source>
        <translation type="vanished">Не удалось завершить запрошенную операцию</translation>
    </message>
    <message>
        <source>Technical Reason: </source>
        <translation type="vanished">Техническая причина: </translation>
    </message>
    <message>
        <source>Details of the Request:</source>
        <translation type="vanished">Подробности запроса:</translation>
    </message>
    <message>
        <source>URL: %1</source>
        <translation type="vanished">Адрес URL: %1</translation>
    </message>
    <message>
        <source>Protocol: %1</source>
        <translation type="vanished">Протокол: %1</translation>
    </message>
    <message>
        <source>Date and Time: %1</source>
        <translation type="vanished">Дата и время: %1</translation>
    </message>
    <message>
        <source>Additional Information: %1</source>
        <translation type="vanished">Дополнительная информация: %1</translation>
    </message>
    <message>
        <source>Description:</source>
        <translation type="vanished">Описание:</translation>
    </message>
    <message>
        <source>Possible Causes:</source>
        <translation type="vanished">Возможные причины:</translation>
    </message>
    <message>
        <source>Possible Solutions:</source>
        <translation type="vanished">Возможные решения:</translation>
    </message>
    <message>
        <source>Page loaded.</source>
        <translation type="vanished">Страница загружена.</translation>
    </message>
    <message numerus="yes">
        <source>%1 Image of %2 loaded.</source>
        <translation type="vanished">
            <numerusform>Загружено изображений: %1 из %2</numerusform>
            <numerusform>Загружено изображений: %1 из %2</numerusform>
            <numerusform>Загружено изображений: %1 из %2</numerusform>
        </translation>
        <extra-po-msgid_plural>%1 Images of %2 loaded.</extra-po-msgid_plural>
    </message>
    <message>
        <source>Automatic Detection</source>
        <translation type="vanished">Автоматическое определение</translation>
    </message>
    <message>
        <source> (In new window)</source>
        <translation type="vanished"> (В новом окне)</translation>
    </message>
    <message>
        <source>Symbolic Link</source>
        <translation type="vanished">Символическая ссылка</translation>
    </message>
    <message>
        <source>%1 (Link)</source>
        <translation type="vanished">%1 (Ссылка)</translation>
    </message>
    <message numerus="yes">
        <source>%2 (%1 byte)</source>
        <translation type="vanished">
            <numerusform>%2 (%1 байт)</numerusform>
            <numerusform>%2 (%1 байта)</numerusform>
            <numerusform>%2 (%1 байт)</numerusform>
        </translation>
        <extra-po-msgid_plural>%2 (%1 bytes)</extra-po-msgid_plural>
    </message>
    <message>
        <source>%2 (%1 K)</source>
        <translation type="vanished">%2 (%1 К)</translation>
    </message>
    <message>
        <source> (In other frame)</source>
        <translation type="vanished"> (В другом фрейме)</translation>
    </message>
    <message>
        <source>Email to: </source>
        <translation type="vanished">Написать письмо: </translation>
    </message>
    <message>
        <source> - Subject: </source>
        <translation type="vanished"> - Тема: </translation>
    </message>
    <message>
        <source> - CC: </source>
        <translation type="vanished"> - Копия: </translation>
    </message>
    <message>
        <source> - BCC: </source>
        <translation type="vanished"> - Скрытая копия: </translation>
    </message>
    <message>
        <source>Save As</source>
        <translation type="vanished">Сохранить как</translation>
    </message>
    <message>
        <source>&lt;qt&gt;This untrusted page links to&lt;br /&gt;&lt;b&gt;%1&lt;/b&gt;.&lt;br /&gt;Do you want to follow the link?&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Данная непроверенная страница содержит ссылку &lt;br /&gt;&lt;b&gt;%1&lt;/b&gt;.&lt;br /&gt;Перейти по ссылке?&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>Follow</source>
        <translation type="vanished">Перейти</translation>
    </message>
    <message>
        <source>Frame Information</source>
        <translation type="vanished">Сведения о фрейме</translation>
    </message>
    <message>
        <source>   &lt;a href=&quot;%1&quot;&gt;[Properties]&lt;/a&gt;</source>
        <translation type="vanished">   &lt;a href=&quot;%1&quot;&gt;[свойства]&lt;/a&gt;</translation>
    </message>
    <message>
        <source>Quirks</source>
        <comment>HTML rendering mode (see http://en.wikipedia.org/wiki/Quirks_mode)</comment>
        <translation type="vanished">Режим совместимости</translation>
    </message>
    <message>
        <source>Almost standards</source>
        <comment>HTML rendering mode (see http://en.wikipedia.org/wiki/Quirks_mode)</comment>
        <translation type="vanished">Почти соответствующий стандартам</translation>
    </message>
    <message>
        <source>Strict</source>
        <comment>HTML rendering mode (see http://en.wikipedia.org/wiki/Quirks_mode)</comment>
        <translation type="vanished">Строгое соответствие стандартам</translation>
    </message>
    <message>
        <source>Save Background Image As</source>
        <translation type="vanished">Сохранить фоновое изображение...</translation>
    </message>
    <message>
        <source>The peer SSL certificate chain appears to be corrupt.</source>
        <translation type="vanished">Похоже, цепочка сертификатов повреждена.</translation>
    </message>
    <message>
        <source>Save Frame As</source>
        <translation type="vanished">Сохранить фрейм...</translation>
    </message>
    <message>
        <source>&amp;Find in Frame...</source>
        <translation type="vanished">&amp;Поиск во фрейме...</translation>
    </message>
    <message>
        <source>Warning:  This is a secure form but it is attempting to send your data back unencrypted.
A third party may be able to intercept and view this information.
Are you sure you wish to continue?</source>
        <translation type="vanished">Внимание: это защищённая форма, но она пытается вернуть ваши данные назад в незашифрованном виде.
Третья сторона может перехватить и просмотреть эту информацию.
Продолжить?</translation>
    </message>
    <message>
        <source>Network Transmission</source>
        <translation type="vanished">Передача по сети</translation>
    </message>
    <message>
        <source>&amp;Send Unencrypted</source>
        <translation type="vanished">&amp;Отправить незашифрованным</translation>
    </message>
    <message>
        <source>Warning: Your data is about to be transmitted across the network unencrypted.
Are you sure you wish to continue?</source>
        <translation type="vanished">Внимание: ваши данные будут передаваться по сети в незащищённом виде.
Продолжить?</translation>
    </message>
    <message>
        <source>This site is attempting to submit form data via email.
Do you want to continue?</source>
        <translation type="vanished">Попытка передачи данных формы на сайт по электронной почте.
Действительно хотите продолжить?</translation>
    </message>
    <message>
        <source>&amp;Send Email</source>
        <translation type="vanished">&amp;Отправить</translation>
    </message>
    <message>
        <source>&lt;qt&gt;The form will be submitted to &lt;br /&gt;&lt;b&gt;%1&lt;/b&gt;&lt;br /&gt;on your local filesystem.&lt;br /&gt;Do you want to submit the form?&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Форма будет передана файлу &lt;br /&gt;&lt;b&gt;%1&lt;/b&gt;&lt;br /&gt; на локальной файловой системе.&lt;br /&gt;Отправить данные формы?&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>This site attempted to attach a file from your computer in the form submission. The attachment was removed for your protection.</source>
        <translation type="vanished">Попытка присоединения локального файла к данным формы для отправки на сайт. Ради вашей безопасности приложенный файл был удалён.</translation>
    </message>
    <message>
        <source>(%1/s)</source>
        <translation type="vanished">(%1/с)</translation>
    </message>
    <message>
        <source>Security Warning</source>
        <translation type="vanished">Предупреждение системы безопасности</translation>
    </message>
    <message>
        <source>&lt;qt&gt;Access by untrusted page to&lt;br /&gt;&lt;b&gt;%1&lt;/b&gt;&lt;br /&gt; denied.&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Доступ с ненадёжной страницы на &lt;br /&gt;&lt;b&gt;%1&lt;/b&gt;&lt;br /&gt; запрещён.&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>The wallet &apos;%1&apos; is open and being used for form data and passwords.</source>
        <translation type="vanished">Бумажник «%1» открыт и используется для ввода данных и паролей.</translation>
    </message>
    <message>
        <source>&amp;Close Wallet</source>
        <translation type="vanished">&amp;Закрыть бумажник</translation>
    </message>
    <message>
        <source>&amp;Allow storing passwords for this site</source>
        <translation type="vanished">&amp;Позволить сохранять пароли для этого сайта</translation>
    </message>
    <message>
        <source>Remove password for form %1</source>
        <translation type="vanished">Удалить пароль для формы %1</translation>
    </message>
    <message>
        <source>JavaScript &amp;Debugger</source>
        <translation type="vanished">Отла&amp;дчик JavaScript</translation>
    </message>
    <message>
        <source>This page was prevented from opening a new window via JavaScript.</source>
        <translation type="vanished">Сайт пытается открыть новое окно с использованием Javascript.</translation>
    </message>
    <message>
        <source>Popup Window Blocked</source>
        <translation type="vanished">Заблокировано всплывающее окно</translation>
    </message>
    <message>
        <source>This page has attempted to open a popup window but was blocked.
You can click on this icon in the status bar to control this behavior
or to open the popup.</source>
        <translation type="vanished">Заблокировано всплывающее окно, которое пыталась открыть страница.
Этой функцией можно управлять, щёлкая на строке состояния,
чтобы разрешить или запретить всплывающее окно.</translation>
    </message>
    <message numerus="yes">
        <source>&amp;Show Blocked Popup Window</source>
        <translation type="vanished">
            <numerusform>По&amp;казать %1 заблокированное всплывающее окно</numerusform>
            <numerusform>По&amp;казать %1 заблокированных всплывающих окна</numerusform>
            <numerusform>По&amp;казать %1 заблокированных всплывающих окон</numerusform>
        </translation>
        <extra-po-msgid_plural>&amp;Show %1 Blocked Popup Windows</extra-po-msgid_plural>
    </message>
    <message>
        <source>Show Blocked Window Passive Popup &amp;Notification</source>
        <translation type="vanished">&amp;Уведомлять о заблокированных всплывающих окнах</translation>
    </message>
    <message>
        <source>&amp;Configure JavaScript New Window Policies...</source>
        <translation type="vanished">&amp;Настроить правила для новых окон JavaScript...</translation>
    </message>
    <message>
        <source>&lt;qt&gt;&lt;p&gt;&lt;strong&gt;&apos;Print images&apos;&lt;/strong&gt;&lt;/p&gt;&lt;p&gt;If this checkbox is enabled, images contained in the HTML page will be printed. Printing may take longer and use more ink or toner.&lt;/p&gt;&lt;p&gt;If this checkbox is disabled, only the text of the HTML page will be printed, without the included images. Printing will be faster and use less ink or toner.&lt;/p&gt; &lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;&lt;p&gt;&lt;strong&gt;Печатать изображения&lt;/strong&gt;&lt;/p&gt;&lt;p&gt;Если этот флажок установлен, изображения на веб-странице будут распечатаны вместе с текстом. Однако печататься страница с ними будет больше и будет использовано больше чернил или тонера.&lt;/p&gt;&lt;p&gt;Если флажок выключен, будет распечатан только текст веб-страницы. В этом случае печать закончиться быстрее и вы потратите меньше чернил или тонера.&lt;/p&gt; &lt;/qt&gt;</translation>
    </message>
    <message>
        <source>&lt;qt&gt;&lt;p&gt;&lt;strong&gt;&apos;Print header&apos;&lt;/strong&gt;&lt;/p&gt;&lt;p&gt;If this checkbox is enabled, the printout of the HTML document will contain a header line at the top of each page. This header contains the current date, the location URL of the printed page and the page number.&lt;/p&gt;&lt;p&gt;If this checkbox is disabled, the printout of the HTML document will not contain such a header line.&lt;/p&gt; &lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;&lt;p&gt;&lt;strong&gt;Печатать заголовок&lt;/strong&gt;&lt;/p&gt;&lt;p&gt;Если этот флажок установлен, на каждой странице распечатки документа в формате HTML будет заголовок, содержащий текущую дату, адрес (URL) этой страницы и номер страницы.&lt;/p&gt;&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>&lt;qt&gt;&lt;p&gt;&lt;strong&gt;&apos;Printerfriendly mode&apos;&lt;/strong&gt;&lt;/p&gt;&lt;p&gt;If this checkbox is enabled, the printout of the HTML document will be black and white only, and all colored background will be converted into white. Printout will be faster and use less ink or toner.&lt;/p&gt;&lt;p&gt;If this checkbox is disabled, the printout of the HTML document will happen in the original color settings as you see in your application. This may result in areas of full-page color (or grayscale, if you use a black+white printer). Printout will possibly happen more slowly and will probably use more toner or ink.&lt;/p&gt; &lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;&lt;p&gt;&lt;strong&gt;Экономный режим&lt;/strong&gt;&lt;/p&gt;&lt;p&gt;Если этот параметр включён, распечатка документа в формате HTML будет только черно-белой, любой цветной фон будет преобразован в белый. Печать будет быстрее и будет использоваться меньше чернил или тонера.&lt;/p&gt;&lt;p&gt;Если этот параметр выключен, распечатка документа в формате HTML будет иметь такие же цвета, как вы видите в приложении. Результатом может быть полностью цветная страница (или с градациями серого, если принтер черно-белый). Печать будет идти медленнее и использовать намного больше тонера или чернил.&lt;/p&gt; &lt;/qt&gt;</translation>
    </message>
    <message>
        <source>HTML Settings</source>
        <translation type="vanished">Настройка HTML</translation>
    </message>
    <message>
        <source>Printer friendly mode (black text, no background)</source>
        <translation type="vanished">Экономный режим (чёрный текст, без фона)</translation>
    </message>
    <message>
        <source>Print images</source>
        <translation type="vanished">Печатать изображения</translation>
    </message>
    <message>
        <source>Print header</source>
        <translation type="vanished">Печатать заголовок</translation>
    </message>
    <message>
        <source>Filter error</source>
        <translation type="vanished">Ошибка фильтра</translation>
    </message>
    <message>
        <source>Inactive</source>
        <translation type="vanished">Неактивный</translation>
    </message>
    <message>
        <source>%1 (%2 - %3x%4 Pixels)</source>
        <translation type="vanished">%1 (%2 - %3x%4 пиксел)</translation>
    </message>
    <message>
        <source>%1 - %2x%3 Pixels</source>
        <translation type="vanished">%1 - %2x%3 пиксел</translation>
    </message>
    <message>
        <source>%1 (%2x%3 Pixels)</source>
        <translation type="vanished">%1 (%2x%3 пиксел)</translation>
    </message>
    <message>
        <source>Image - %1x%2 Pixels</source>
        <translation type="vanished">Изображение - %1x%2 пикселов</translation>
    </message>
    <message>
        <source>Done.</source>
        <translation type="vanished">Готово.</translation>
    </message>
    <message>
        <source>Access Keys activated</source>
        <translation type="vanished">Включено использование ключей доступа</translation>
    </message>
    <message>
        <source>JavaScript Errors</source>
        <translation type="vanished">Ошибки JavaScript</translation>
    </message>
    <message>
        <source>This dialog provides you with notification and details of scripting errors that occur on web pages.  In many cases it is due to an error in the web site as designed by its author.  In other cases it is the result of a programming error in Konqueror.  If you suspect the former, please contact the webmaster of the site in question.  Conversely if you suspect an error in Konqueror, please file a bug report at http://bugs.kde.org/.  A test case which illustrates the problem will be appreciated.</source>
        <translation type="vanished">В этом диалоге показаны ошибки скриптов на веб-страницах. Чаще всего они обусловлены ошибками при создании веб-страниц, но иногда - ошибками в Konqueror.  В первом случае известите об ошибке веб-мастера сайта, если же это всё-таки ошибка в Konqueror, отправьте сообщение об ошибке на http://bugs.kde.org/.  Пример, иллюстрирующий ошибку, поможет её устранить.</translation>
    </message>
    <message>
        <source>KMultiPart</source>
        <translation type="vanished">KMultiPart</translation>
    </message>
    <message>
        <source>Embeddable component for multipart/mixed</source>
        <translation type="vanished">Встраиваемый компонент для multipart/mixed</translation>
    </message>
    <message>
        <source>Copyright 2001-2011, David Faure &lt;email&gt;faure@kde.org&lt;/email&gt;</source>
        <translation type="vanished">© David Faure &lt;email&gt;faure@kde.org&lt;/email&gt;, 2001-2011</translation>
    </message>
    <message>
        <source>No handler found for %1.</source>
        <translation type="vanished">Не найден обработчик для %1.</translation>
    </message>
    <message>
        <source>Play</source>
        <translation type="vanished">Воспроизвести</translation>
    </message>
    <message>
        <source>Pause</source>
        <translation type="vanished">Пауза</translation>
    </message>
    <message>
        <source>New Web Shortcut</source>
        <translation type="vanished">Новое веб-сокращение</translation>
    </message>
    <message>
        <source>%1 is already assigned to %2</source>
        <translation type="vanished">%1 уже назначено для %2</translation>
    </message>
    <message>
        <source>Search &amp;provider name:</source>
        <translation type="vanished">&amp;Название поисковой системы:</translation>
    </message>
    <message>
        <source>New search provider</source>
        <translation type="vanished">Новая поисковая система</translation>
    </message>
    <message>
        <source>UR&amp;I shortcuts:</source>
        <translation type="vanished">&amp;Сокращения:</translation>
    </message>
    <message>
        <source>Create Web Shortcut</source>
        <translation type="vanished">Создать веб-сокращение</translation>
    </message>
    <message>
        <source>Directory containing tests, basedir and output directories.</source>
        <translation type="vanished">Каталог, содержащий тесты, базовый каталог и каталоги для сохранения выводимых данных.</translation>
    </message>
    <message>
        <source>Do not suppress debug output</source>
        <translation type="vanished">Показывать вывод отладки</translation>
    </message>
    <message>
        <source>Regenerate baseline (instead of checking)</source>
        <translation type="vanished">Восстановить исходный (вместо проверки)</translation>
    </message>
    <message>
        <source>Do not show the window while running tests</source>
        <translation type="vanished">Не показывать окно при выполнении тестов</translation>
    </message>
    <message>
        <source>Only run a single test. Multiple options allowed.</source>
        <translation type="vanished">Запустить один тест. Можно указать несколько таких параметров.</translation>
    </message>
    <message>
        <source>Only run .js tests</source>
        <translation type="vanished">Запустить только тесты .js</translation>
    </message>
    <message>
        <source>Only run .html tests</source>
        <translation type="vanished">Запустить только тесты .html</translation>
    </message>
    <message>
        <source>Do not use Xvfb</source>
        <translation type="vanished">Не использовать Xvfb</translation>
    </message>
    <message>
        <source>Put output in &amp;lt;directory&amp;gt; instead of &amp;lt;base_dir&amp;gt;/output</source>
        <translation type="vanished">Сохранить вывод в &amp;lt;каталог&amp;gt; вместо файла &amp;lt;базовый_каталог&amp;gt;/output</translation>
    </message>
    <message>
        <source>Use &amp;lt;directory&amp;gt; as reference instead of &amp;lt;base_dir&amp;gt;/baseline</source>
        <translation type="vanished">Использовать &amp;lt;каталог&amp;gt; в качестве каталога эталонных результатов вместо &amp;lt;базовый_каталог&amp;gt;/baseline</translation>
    </message>
    <message>
        <source>Directory containing tests, basedir and output directories. Only regarded if -b is not specified.</source>
        <translation type="vanished">Каталог, содержащий тесты, базовый каталог и каталоги для сохранения выводимых данных. Используется, если не указан параметр -b.</translation>
    </message>
    <message>
        <source>Relative path to testcase, or directory of testcases to be run (equivalent to -t).</source>
        <translation type="vanished">Относительный путь к тестам или каталог с тестами (эквивалент -t).</translation>
    </message>
    <message>
        <source>TestRegression</source>
        <translation type="vanished">TestRegression</translation>
    </message>
    <message>
        <source>Regression tester for khtml</source>
        <translation type="vanished">Проверка регрессии в khtml</translation>
    </message>
    <message>
        <source>KHTML Regression Testing Utility</source>
        <translation type="vanished">Программа проверки KHTML на регрессию</translation>
    </message>
    <message>
        <source>0</source>
        <translation type="vanished">0</translation>
    </message>
    <message>
        <source>Regression testing output</source>
        <translation type="vanished">Вывод проверки на регрессию</translation>
    </message>
    <message>
        <source>Pause/Continue regression testing process</source>
        <translation type="vanished">Пауза или продолжение проверки на регрессию</translation>
    </message>
    <message>
        <source>You may select a file where the log content is stored, before the regression testing is started.</source>
        <translation type="vanished">Перед началом проверки можно выбрать файл для сохранения протокола.</translation>
    </message>
    <message>
        <source>Output to File...</source>
        <translation type="vanished">Сохранить результат проверки в файл...</translation>
    </message>
    <message>
        <source>Regression Testing Status</source>
        <translation type="vanished">Состояние проверки</translation>
    </message>
    <message>
        <source>View HTML Output</source>
        <translation type="vanished">Просмотреть вывод в HTML</translation>
    </message>
    <message>
        <source>Settings</source>
        <translation type="vanished">Настройка</translation>
    </message>
    <message>
        <source>Tests</source>
        <translation type="vanished">Тесты</translation>
    </message>
    <message>
        <source>Only Run JS Tests</source>
        <translation type="vanished">Запустить только проверку JS</translation>
    </message>
    <message>
        <source>Only Run HTML Tests</source>
        <translation type="vanished">Запустить только проверку HTML</translation>
    </message>
    <message>
        <source>Do Not Suppress Debug Output</source>
        <translation type="vanished">Показывать вывод отладки</translation>
    </message>
    <message>
        <source>Run Tests...</source>
        <translation type="vanished">Запустить проверку...</translation>
    </message>
    <message>
        <source>Run Single Test...</source>
        <translation type="vanished">Запустить отдельный тест...</translation>
    </message>
    <message>
        <source>Specify tests Directory...</source>
        <translation type="vanished">Укажите каталог с тестами...</translation>
    </message>
    <message>
        <source>Specify khtml Directory...</source>
        <translation type="vanished">Укажите каталог khtml...</translation>
    </message>
    <message>
        <source>Specify Output Directory...</source>
        <translation type="vanished">Укажите каталог вывода...</translation>
    </message>
    <message>
        <source>TestRegressionGui</source>
        <translation type="vanished">TestRegressionGui</translation>
    </message>
    <message>
        <source>GUI for the khtml regression tester</source>
        <translation type="vanished">Графический интерфейс для поиска регрессии в khtml</translation>
    </message>
    <message>
        <source>Available Tests: 0</source>
        <translation type="vanished">Доступных тестов: 0</translation>
    </message>
    <message>
        <source>Please choose a valid &apos;khtmltests/regression/&apos; directory.</source>
        <translation type="vanished">Укажите правильный каталог «khtmltests/regression/».</translation>
    </message>
    <message>
        <source>Please choose a valid &apos;khtml/&apos; build directory.</source>
        <translation type="vanished">Укажите правильный каталог «khtml/».</translation>
    </message>
    <message>
        <source>Available Tests: %1 (ignored: %2)</source>
        <translation type="vanished">Доступных тестов: %1 (игнорировано: %2)</translation>
    </message>
    <message>
        <source>Cannot find testregression executable.</source>
        <translation type="vanished">Не удалось найти программу testregression.</translation>
    </message>
    <message>
        <source>Run test...</source>
        <translation type="vanished">Запустить тест...</translation>
    </message>
    <message>
        <source>Add to ignores...</source>
        <translation type="vanished">Игнорировать тест...</translation>
    </message>
    <message>
        <source>Remove from ignores...</source>
        <translation type="vanished">Вернуть тест из игнорируемых...</translation>
    </message>
    <message>
        <source>URL to open</source>
        <translation type="vanished">Открываемый URL</translation>
    </message>
    <message>
        <source>Testkhtml</source>
        <translation type="vanished">Testkhtml</translation>
    </message>
    <message>
        <source>a basic web browser using the KHTML library</source>
        <translation type="vanished">простой веб-браузер на базе движка KHTML</translation>
    </message>
    <message>
        <source>Find &amp;links only</source>
        <translation type="vanished">Искать только &amp;ссылки</translation>
    </message>
    <message>
        <source>Not found</source>
        <translation type="vanished">Не найдено</translation>
    </message>
    <message>
        <source>No more matches for this search direction.</source>
        <translation type="vanished">Не найдено вхождений в выбранном направлении</translation>
    </message>
    <message>
        <source>F&amp;ind:</source>
        <translation type="vanished">&amp;Искать:</translation>
    </message>
    <message>
        <source>&amp;Next</source>
        <translation type="vanished">&amp;Следующее</translation>
    </message>
    <message>
        <source>Opt&amp;ions</source>
        <translation type="vanished">&amp;Параметры</translation>
    </message>
    <message>
        <source>Do you want to store this password?</source>
        <translation type="vanished">Сохранить пароль?</translation>
    </message>
    <message>
        <source>Do you want to store this password for %1?</source>
        <translation type="vanished">Сохранить пароль для %1?</translation>
    </message>
    <message>
        <source>&amp;Store</source>
        <translation type="vanished">&amp;Сохранить</translation>
    </message>
    <message>
        <source>Ne&amp;ver store for this site</source>
        <translation type="vanished">&amp;Никогда для этого сайта</translation>
    </message>
    <message>
        <source>Do &amp;not store this time</source>
        <translation type="vanished">В другой &amp;раз</translation>
    </message>
    <message>
        <source>Basic Page Style</source>
        <translation type="vanished">Основной стиль страницы</translation>
    </message>
    <message>
        <source>the document is not in the correct file format</source>
        <translation type="vanished">документ содержит данные некорректного формата</translation>
    </message>
    <message>
        <source>fatal parsing error: %1 in line %2, column %3</source>
        <translation type="vanished">критическая ошибка обработки: %1 в строке %2, позиция %3</translation>
    </message>
    <message>
        <source>XML parsing error</source>
        <translation type="vanished">ошибка при разборе XML</translation>
    </message>
    <message>
        <source>Unable to start new process.
The system may have reached the maximum number of open files possible or the maximum number of open files that you are allowed to use has been reached.</source>
        <translation type="vanished">Не удалось запустить процесс.
Возможно, превышен предел количества открытых файлов в системе или для пользователя.</translation>
    </message>
    <message>
        <source>Unable to create new process.
The system may have reached the maximum number of processes possible or the maximum number of processes that you are allowed to use has been reached.</source>
        <translation type="vanished">Не удалось создать процесс.
Возможно, превышен предел количества запущенных процессов в системе или для пользователя.</translation>
    </message>
    <message>
        <source>Could not find &apos;%1&apos; executable.</source>
        <translation type="vanished">Не удалось найти исполняемый файл «%1».</translation>
    </message>
    <message>
        <source>Could not open library &apos;%1&apos;.
%2</source>
        <translation type="vanished">Не удалось открыть библиотеку «%1».
%2</translation>
    </message>
    <message>
        <source>Could not find &apos;kdemain&apos; in &apos;%1&apos;.
%2</source>
        <translation type="vanished">Не удалось найти «kdemain» в «%1».
%2</translation>
    </message>
    <message>
        <source>KDEInit could not launch &apos;%1&apos;</source>
        <translation type="vanished">KDEInit не может запустить «%1»</translation>
    </message>
    <message>
        <source>Could not find service &apos;%1&apos;.</source>
        <translation type="vanished">Не удалось найти службу «%1».</translation>
    </message>
    <message>
        <source>Service &apos;%1&apos; must be executable to run.</source>
        <translation type="vanished">Служба «%1» должна быть сделана выполняемой для запуска.</translation>
    </message>
    <message>
        <source>Service &apos;%1&apos; is malformatted.</source>
        <translation type="vanished">Служба «%1» имеет неверный формат.</translation>
    </message>
    <message>
        <source>Launching %1</source>
        <translation type="vanished">Запускается %1</translation>
    </message>
    <message>
        <source>Unknown protocol &apos;%1&apos;.
</source>
        <translation type="vanished">Неизвестный протокол «%1».
</translation>
    </message>
    <message>
        <source>Error loading &apos;%1&apos;.
</source>
        <translation type="vanished">Ошибка загрузки «%1»:
</translation>
    </message>
    <message>
        <source>klauncher: This program is not supposed to be started manually.
klauncher: It is started automatically by kdeinit4.
</source>
        <translation type="vanished">klauncher: программа не должна запускаться вручную.
klauncher: запускается автоматически из kdeinit4.
</translation>
    </message>
    <message>
        <source>Evaluation error</source>
        <translation type="vanished">Ошибка вычисления</translation>
    </message>
    <message>
        <source>Range error</source>
        <translation type="vanished">Ошибка границ</translation>
    </message>
    <message>
        <source>Reference error</source>
        <translation type="vanished">Ошибка ссылки</translation>
    </message>
    <message>
        <source>Syntax error</source>
        <translation type="vanished">Синтаксическая ошибка</translation>
    </message>
    <message>
        <source>Type error</source>
        <translation type="vanished">Ошибка типа</translation>
    </message>
    <message>
        <source>URI error</source>
        <translation type="vanished">Ошибка URI</translation>
    </message>
    <message>
        <source>JS Calculator</source>
        <translation type="vanished">Калькулятор JS</translation>
    </message>
    <message>
        <source>+</source>
        <comment>addition</comment>
        <translation type="vanished">+</translation>
    </message>
    <message>
        <source>AC</source>
        <translation type="vanished">Сброс</translation>
    </message>
    <message>
        <source>-</source>
        <comment>subtraction</comment>
        <translation type="vanished">-</translation>
    </message>
    <message>
        <source>=</source>
        <comment>evaluation</comment>
        <translation type="vanished">=</translation>
    </message>
    <message>
        <source>CL</source>
        <translation type="vanished">CL</translation>
    </message>
    <message>
        <source>5</source>
        <translation type="vanished">5</translation>
    </message>
    <message>
        <source>3</source>
        <translation type="vanished">3</translation>
    </message>
    <message>
        <source>7</source>
        <translation type="vanished">7</translation>
    </message>
    <message>
        <source>8</source>
        <translation type="vanished">8</translation>
    </message>
    <message>
        <source>MainWindow</source>
        <translation type="vanished">MainWindow</translation>
    </message>
    <message>
        <source>&lt;h1&gt;KJSEmbed Documentation Viewer&lt;/h1&gt;</source>
        <translation type="vanished">&lt;h1&gt;Просмотр документации по KJSEmbed&lt;/h1&gt;</translation>
    </message>
    <message>
        <source>Execute</source>
        <translation type="vanished">Выполнить</translation>
    </message>
    <message>
        <source>File</source>
        <translation type="vanished">Файл</translation>
    </message>
    <message>
        <source>Open Script</source>
        <translation type="vanished">Открыть скрипт</translation>
    </message>
    <message>
        <source>Open a script...</source>
        <translation type="vanished">Открытие скрипта...</translation>
    </message>
    <message>
        <source>Ctrl+O</source>
        <translation type="vanished">Ctrl+O</translation>
    </message>
    <message>
        <source>Close Script</source>
        <translation type="vanished">Закрыть скрипт</translation>
    </message>
    <message>
        <source>Close script...</source>
        <translation type="vanished">Закрытие скрипта...</translation>
    </message>
    <message>
        <source>Quit</source>
        <translation type="vanished">Выход</translation>
    </message>
    <message>
        <source>Quit application...</source>
        <translation type="vanished">Выход из приложения...</translation>
    </message>
    <message>
        <source>Run</source>
        <translation type="vanished">Запустить</translation>
    </message>
    <message>
        <source>Run script...</source>
        <translation type="vanished">Запуск скрипта...</translation>
    </message>
    <message>
        <source>Run To...</source>
        <translation type="vanished">Выполнение до позиции...</translation>
    </message>
    <message>
        <source>Run to breakpoint...</source>
        <translation type="vanished">Выполнение до точки останова...</translation>
    </message>
    <message>
        <source>Step</source>
        <translation type="vanished">Перейти на следующую строку</translation>
    </message>
    <message>
        <source>Step to next line...</source>
        <translation type="vanished">Продолжение выполнения до следующей строки...</translation>
    </message>
    <message>
        <source>Step execution...</source>
        <translation type="vanished">Остановка выполнения...</translation>
    </message>
    <message>
        <source>KJSCmd</source>
        <translation type="vanished">KJSCmd</translation>
    </message>
    <message>
        <source>Utility for running KJSEmbed scripts 
</source>
        <translation type="vanished">Программа для запуска скриптов KJSEmbed 
</translation>
    </message>
    <message>
        <source>(C) 2005-2006 The KJSEmbed Authors</source>
        <translation type="vanished">© Разработчики KJSEmbed, 2005-2006</translation>
    </message>
    <message>
        <source>Execute script without gui support</source>
        <translation type="vanished">Выполнить скрипт без графического интерфейса</translation>
    </message>
    <message>
        <source>start interactive kjs interpreter</source>
        <translation type="vanished">запустить интерактивный интерпретатор kjs</translation>
    </message>
    <message>
        <source>start without KDE KApplication support.</source>
        <translation type="vanished">запустить без поддержки KDE KApplication.</translation>
    </message>
    <message>
        <source>Script to execute</source>
        <translation type="vanished">Имя выполняемого скрипта</translation>
    </message>
    <message>
        <source>Error encountered while processing include &apos;%1&apos; line %2: %3</source>
        <translation type="vanished">Ошибка при выполнении include «%1» на строке %2: %3</translation>
    </message>
    <message>
        <source>include only takes 1 argument, not %1.</source>
        <translation type="vanished">директива include требует один аргумент, а не %1.</translation>
    </message>
    <message>
        <source>File %1 not found.</source>
        <translation type="vanished">Файл %1 не найден.</translation>
    </message>
    <message>
        <source>library only takes 1 argument, not %1.</source>
        <translation type="vanished">библиотека требует один аргумент, а не %1.</translation>
    </message>
    <message>
        <source>Alert</source>
        <translation type="vanished">Тревога</translation>
    </message>
    <message>
        <source>Confirm</source>
        <translation type="vanished">Подтверждение</translation>
    </message>
    <message>
        <source>Bad event handler: Object %1 Identifier %2 Method %3 Type: %4.</source>
        <translation type="vanished">Неверный обработчик событий: объект %1, идентификатор %2, метод %3, тип %4.</translation>
    </message>
    <message>
        <source>Exception calling &apos;%1&apos; function from %2:%3:%4</source>
        <translation type="vanished">Возникло исключение при вызове функции «%1» из %2:%3:%4</translation>
    </message>
    <message>
        <source>Could not open file &apos;%1&apos;</source>
        <translation type="vanished">Не удалось открыть файл «%1»</translation>
    </message>
    <message>
        <source>Could not create temporary file.</source>
        <translation type="vanished">Не удалось создать временный файл.</translation>
    </message>
    <message>
        <source>%1 is not a function and cannot be called.</source>
        <translation type="vanished">%1 не является функцией и не может быть вызвано.</translation>
    </message>
    <message>
        <source>%1 is not an Object type</source>
        <translation type="vanished">%1 не является объектом</translation>
    </message>
    <message>
        <source>Action takes 2 args.</source>
        <translation type="vanished">Действие требует 2 аргумента.</translation>
    </message>
    <message>
        <source>ActionGroup takes 2 args.</source>
        <translation type="vanished">ActionGroup требует 2 аргумента.</translation>
    </message>
    <message>
        <source>Must supply a valid parent.</source>
        <translation type="vanished">Необходимо указать правильный родительский объект.</translation>
    </message>
    <message>
        <source>There was an error reading the file &apos;%1&apos;</source>
        <translation type="vanished">Ошибка чтения из файла «%1»</translation>
    </message>
    <message>
        <source>Could not read file &apos;%1&apos;</source>
        <translation type="vanished">Не удалось открыть файл «%1»</translation>
    </message>
    <message>
        <source>Must supply a filename.</source>
        <translation type="vanished">Необходимо указать имя файла.</translation>
    </message>
    <message>
        <source>&apos;%1&apos; is not a valid QLayout.</source>
        <translation type="vanished">«%1» не является правильным объектом QLayout.</translation>
    </message>
    <message>
        <source>Must supply a layout name.</source>
        <translation type="vanished">Необходимо указать имя компоновки.</translation>
    </message>
    <message>
        <source>Wrong object type.</source>
        <translation type="vanished">Неверное имя объекта.</translation>
    </message>
    <message>
        <source>First argument must be a QObject.</source>
        <translation type="vanished">Первый аргумент должен быть объектом QObject.</translation>
    </message>
    <message>
        <source>Incorrect number of arguments.</source>
        <translation type="vanished">Неверное количество аргументов.</translation>
    </message>
    <message numerus="yes">
        <source>The slot asked for %1 argument</source>
        <translation type="vanished">
            <numerusform>Слот требует %1 аргумент</numerusform>
            <numerusform>Слот требует %1 аргумента</numerusform>
            <numerusform>Слот требует %1 аргументов</numerusform>
        </translation>
        <extra-po-msgid_plural>The slot asked for %1 arguments</extra-po-msgid_plural>
    </message>
    <message numerus="yes">
        <source>but there is only %1 available</source>
        <translation type="vanished">
            <numerusform>но есть только %1 аргумент</numerusform>
            <numerusform>но есть только %1 аргумента</numerusform>
            <numerusform>но есть только %1 аргументов</numerusform>
        </translation>
        <extra-po-msgid_plural>but there are only %1 available</extra-po-msgid_plural>
    </message>
    <message>
        <source>%1, %2.</source>
        <comment>%1 is &apos;the slot asked for foo arguments&apos;, %2 is &apos;but there are only bar available&apos;</comment>
        <translation type="vanished">%1, %2.</translation>
    </message>
    <message>
        <source>Failure to cast to %1 value from Type %2 (%3)</source>
        <translation type="vanished">Не удалось преобразовать значение от типа %2 к типу %1 (%3)</translation>
    </message>
    <message>
        <source>No such method &apos;%1&apos;.</source>
        <translation type="vanished">Нет метода «%1».</translation>
    </message>
    <message>
        <source>Call to method &apos;%1&apos; failed, unable to get argument %2: %3</source>
        <translation type="vanished">Ошибка вызова метода «%1»: не удалось получить аргумент %2: %3</translation>
    </message>
    <message>
        <source>Call to &apos;%1&apos; failed.</source>
        <translation type="vanished">Ошибка вызова «%1».</translation>
    </message>
    <message>
        <source>Could not construct value</source>
        <translation type="vanished">Не удалось запустить конструктор значения</translation>
    </message>
    <message>
        <source>Not enough arguments.</source>
        <translation type="vanished">Недостаточно аргументов.</translation>
    </message>
    <message>
        <source>Failed to create Action.</source>
        <translation type="vanished">Не удалось создать Action.</translation>
    </message>
    <message>
        <source>Failed to create ActionGroup.</source>
        <translation type="vanished">Не удалось создать ActionGroup.</translation>
    </message>
    <message>
        <source>No classname specified</source>
        <translation type="vanished">Не указано имя класса</translation>
    </message>
    <message>
        <source>Failed to create Layout.</source>
        <translation type="vanished">Не удалось создать Layout.</translation>
    </message>
    <message>
        <source>No classname specified.</source>
        <translation type="vanished">Имя класса не указано.</translation>
    </message>
    <message>
        <source>Failed to create Widget.</source>
        <translation type="vanished">Не удалось создать Widget.</translation>
    </message>
    <message>
        <source>Could not open file &apos;%1&apos;: %2</source>
        <translation type="vanished">Не удалось открыть файл «%1»: %2</translation>
    </message>
    <message>
        <source>Failed to load file &apos;%1&apos;</source>
        <translation type="vanished">Ошибка открытия файла «%1»</translation>
    </message>
    <message>
        <source>&apos;%1&apos; is not a valid QWidget.</source>
        <translation type="vanished">«%1» не является правильным объектом QWidget.</translation>
    </message>
    <message>
        <source>Must supply a widget name.</source>
        <translation type="vanished">Необходимо указать имя виджета.</translation>
    </message>
    <message>
        <source>Bad slot handler: Object %1 Identifier %2 Method %3 Signature: %4.</source>
        <translation type="vanished">Неверный обработчик слота: объект %1, идентификатор %2, метод %3, сигнатура %4.</translation>
    </message>
    <message>
        <source>Exception calling &apos;%1&apos; slot from %2:%3:%4</source>
        <translation type="vanished">Возникло исключение при вызове слота «%1» из %2:%3:%4</translation>
    </message>
    <message>
        <source>loading %1</source>
        <translation type="vanished">Загрузка %1</translation>
    </message>
    <message>
        <source>Latest</source>
        <comment>describes the feed of the latest posted entries</comment>
        <translation type="vanished">Самые последние</translation>
    </message>
    <message>
        <source>Highest Rated</source>
        <translation type="vanished">С наивысшим рейтингом</translation>
    </message>
    <message>
        <source>Most Downloads</source>
        <translation type="vanished">Самые популярные</translation>
    </message>
    <message>
        <source>&lt;qt&gt;Cannot start &lt;i&gt;gpg&lt;/i&gt; and retrieve the available keys. Make sure that &lt;i&gt;gpg&lt;/i&gt; is installed, otherwise verification of downloaded resources will not be possible.&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Не удалось запустить программу &lt;i&gt;gpg&lt;/i&gt; и получить все доступные ключи. Проверьте, что программа &lt;i&gt;gpg&lt;/i&gt; установлена, иначе проверка достоверности скачиваемых материалов будет невозможна.&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>&lt;qt&gt;Enter passphrase for key &lt;b&gt;0x%1&lt;/b&gt;, belonging to&lt;br /&gt;&lt;i&gt;%2&amp;lt;%3&amp;gt;&lt;/i&gt;&lt;br /&gt;:&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Введите ключевую фразу для ключа &lt;b&gt;0x%1&lt;/b&gt;, принадлежащего&lt;br /&gt;&lt;i&gt;%2&amp;lt;%3&amp;gt;&lt;/i&gt;&lt;br /&gt;:&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>&lt;qt&gt;Cannot start &lt;i&gt;gpg&lt;/i&gt; and check the validity of the file. Make sure that &lt;i&gt;gpg&lt;/i&gt; is installed, otherwise verification of downloaded resources will not be possible.&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Не удалось запустить программу &lt;i&gt;gpg&lt;/i&gt; и проверить целостность файла. Проверьте, что программа &lt;i&gt;gpg&lt;/i&gt; установлена, иначе проверка достоверности скачиваемых материалов будет невозможна.&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>Select Signing Key</source>
        <translation type="vanished">Выберите ключ для подписи</translation>
    </message>
    <message>
        <source>Key used for signing:</source>
        <translation type="vanished">Ключ, использовавшийся для подписи:</translation>
    </message>
    <message>
        <source>&lt;qt&gt;Cannot start &lt;i&gt;gpg&lt;/i&gt; and sign the file. Make sure that &lt;i&gt;gpg&lt;/i&gt; is installed, otherwise signing of the resources will not be possible.&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Не удалось запустить программу &lt;i&gt;gpg&lt;/i&gt; и подписать файл. Проверьте, что программа &lt;i&gt;gpg&lt;/i&gt; установлена, иначе подписывание материалов будет невозможно.&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>Get Hot New Stuff</source>
        <translation type="vanished">Загрузка материалов из Интернета</translation>
    </message>
    <message>
        <source>%1 Add-On Installer</source>
        <comment>Program name followed by &apos;Add On Installer&apos;</comment>
        <translation type="vanished">Программа установки дополнений для %1</translation>
    </message>
    <message>
        <source>Add Rating</source>
        <translation type="vanished">Повысить рейтинг</translation>
    </message>
    <message>
        <source>Add Comment</source>
        <translation type="vanished">Добавить комментарий</translation>
    </message>
    <message>
        <source>View Comments</source>
        <translation type="vanished">Просмотреть комментарии</translation>
    </message>
    <message>
        <source>Re: %1</source>
        <translation type="vanished">Re: %1</translation>
    </message>
    <message>
        <source>Timeout. Check Internet connection.</source>
        <translation type="vanished">Время ожидания истекло. Проверьте подключение к Интернету.</translation>
    </message>
    <message>
        <source>Entries failed to load</source>
        <translation type="vanished">Ошибка загрузки</translation>
    </message>
    <message>
        <source>Server: %1</source>
        <translation type="vanished">Сервер: %1</translation>
    </message>
    <message>
        <source>&lt;br /&gt;Provider: %1</source>
        <translation type="vanished">&lt;br /&gt;Поставщик: %1</translation>
    </message>
    <message>
        <source>&lt;br /&gt;Version: %1</source>
        <translation type="vanished">&lt;br /&gt;Версия: %1</translation>
    </message>
    <message>
        <source>Provider information</source>
        <translation type="vanished">Сведения о поставщике</translation>
    </message>
    <message>
        <source>Could not install %1</source>
        <translation type="vanished">Не удалось установить %1</translation>
    </message>
    <message>
        <source>Get Hot New Stuff!</source>
        <translation type="vanished">Загрузка материалов из Интернета</translation>
    </message>
    <message>
        <source>There was an error loading data providers.</source>
        <translation type="vanished">При загрузке списка поставщиков произошла ошибка.</translation>
    </message>
    <message>
        <source>A protocol fault has occurred. The request has failed.</source>
        <translation type="vanished">Ошибка протокола. Запрос не выполнен.</translation>
    </message>
    <message>
        <source>Desktop Exchange Service</source>
        <translation type="vanished">Служба доставки материалов</translation>
    </message>
    <message>
        <source>A network error has occurred. The request has failed.</source>
        <translation type="vanished">Ошибка сети. Запрос не выполнен.</translation>
    </message>
    <message>
        <source>&amp;Source:</source>
        <translation type="vanished">&amp;Источник:</translation>
    </message>
    <message>
        <source>?</source>
        <translation type="vanished">?</translation>
    </message>
    <message>
        <source>&amp;Order by:</source>
        <translation type="vanished">&amp;Выше ставить:</translation>
    </message>
    <message>
        <source>Enter search phrase here</source>
        <translation type="vanished">Введите текст для поиска</translation>
    </message>
    <message>
        <source>Collaborate</source>
        <translation type="vanished">Совместная работа</translation>
    </message>
    <message>
        <source>Rating: </source>
        <translation type="vanished">Рейтинг: </translation>
    </message>
    <message>
        <source>Downloads: </source>
        <translation type="vanished">Загрузок: </translation>
    </message>
    <message>
        <source>Install</source>
        <translation type="vanished">Установить</translation>
    </message>
    <message>
        <source>Uninstall</source>
        <translation type="vanished">Удалить</translation>
    </message>
    <message>
        <source>&lt;p&gt;No Downloads&lt;/p&gt;</source>
        <translation type="vanished">&lt;p&gt;Не было загрузок&lt;/p&gt;</translation>
    </message>
    <message>
        <source>&lt;p&gt;Downloads: %1&lt;/p&gt;
</source>
        <translation type="vanished">&lt;p&gt;Загрузок: %1&lt;/p&gt;
</translation>
    </message>
    <message>
        <source>Update</source>
        <translation type="vanished">Обновить материал</translation>
    </message>
    <message>
        <source>Rating: %1</source>
        <translation type="vanished">Рейтинг: %1</translation>
    </message>
    <message>
        <source>No Preview</source>
        <translation type="vanished">Миниатюра отсутствует</translation>
    </message>
    <message>
        <source>Loading Preview</source>
        <translation type="vanished">Загрузка миниатюры...</translation>
    </message>
    <message>
        <source>Comments</source>
        <translation type="vanished">Комментарии</translation>
    </message>
    <message>
        <source>Changelog</source>
        <translation type="vanished">История изменений</translation>
    </message>
    <message>
        <source>Switch version</source>
        <translation type="vanished">Изменить версию</translation>
    </message>
    <message>
        <source>Contact author</source>
        <translation type="vanished">Связаться с автором</translation>
    </message>
    <message>
        <source>Collaboration</source>
        <translation type="vanished">Совместная работа</translation>
    </message>
    <message>
        <source>Translate</source>
        <translation type="vanished">Перевести</translation>
    </message>
    <message>
        <source>Subscribe</source>
        <translation type="vanished">Подписаться на изменения</translation>
    </message>
    <message>
        <source>Report bad entry</source>
        <translation type="vanished">Сообщить об ошибке</translation>
    </message>
    <message>
        <source>Send Mail</source>
        <translation type="vanished">Отправить письмо</translation>
    </message>
    <message>
        <source>Contact on Jabber</source>
        <translation type="vanished">Связаться через Jabber</translation>
    </message>
    <message>
        <source>Provider: %1</source>
        <translation type="vanished">Поставщик: %1</translation>
    </message>
    <message>
        <source>Version: %1</source>
        <translation type="vanished">Версия: %1</translation>
    </message>
    <message>
        <source>The removal request was successfully registered.</source>
        <translation type="vanished">Запрос на удаление зарегистрирован.</translation>
    </message>
    <message>
        <source>Removal of entry</source>
        <translation type="vanished">Удаление записи</translation>
    </message>
    <message>
        <source>The removal request failed.</source>
        <translation type="vanished">Ошибка обработки запроса на удаление.</translation>
    </message>
    <message>
        <source>The subscription was successfully completed.</source>
        <translation type="vanished">Вы подписаны на изменения.</translation>
    </message>
    <message>
        <source>Subscription to entry</source>
        <translation type="vanished">Подписка на изменения</translation>
    </message>
    <message>
        <source>The subscription request failed.</source>
        <translation type="vanished">Ошибка подписки.</translation>
    </message>
    <message>
        <source>The rating was submitted successfully.</source>
        <translation type="vanished">Запрос на повышение рейтинга принят.</translation>
    </message>
    <message>
        <source>Rating for entry</source>
        <translation type="vanished">Рейтинг</translation>
    </message>
    <message>
        <source>The rating could not be submitted.</source>
        <translation type="vanished">Ошибка обработки запроса на повышение рейтинга.</translation>
    </message>
    <message>
        <source>The comment was submitted successfully.</source>
        <translation type="vanished">Комментарий принят.</translation>
    </message>
    <message>
        <source>Comment on entry</source>
        <translation type="vanished">Комментарий</translation>
    </message>
    <message>
        <source>The comment could not be submitted.</source>
        <translation type="vanished">Ошибка обработки запроса с комментарием.</translation>
    </message>
    <message>
        <source>KNewStuff contributions</source>
        <translation type="vanished">Помощь в улучшении</translation>
    </message>
    <message>
        <source>This operation requires authentication.</source>
        <translation type="vanished">Операция требует аутентификации.</translation>
    </message>
    <message>
        <source>Version %1</source>
        <translation type="vanished">Версия %1</translation>
    </message>
    <message>
        <source>Leave a comment</source>
        <translation type="vanished">Оставить комментарий</translation>
    </message>
    <message>
        <source>User comments</source>
        <translation type="vanished">Комментарии пользователей</translation>
    </message>
    <message>
        <source>Rate this entry</source>
        <translation type="vanished">Рейтинг материала</translation>
    </message>
    <message>
        <source>Translate this entry</source>
        <translation type="vanished">Перевести этот элемент</translation>
    </message>
    <message>
        <source>Payload</source>
        <translation type="vanished">Нагрузка</translation>
    </message>
    <message>
        <source>Download New Stuff...</source>
        <translation type="vanished">Загрузить материалы...</translation>
    </message>
    <message>
        <source>Hot New Stuff Providers</source>
        <translation type="vanished">Поставщики материалов</translation>
    </message>
    <message>
        <source>Please select one of the providers listed below:</source>
        <translation type="vanished">Выберите поставщика из списка:</translation>
    </message>
    <message>
        <source>No provider selected.</source>
        <translation type="vanished">Поставщик не выбран.</translation>
    </message>
    <message>
        <source>Share Hot New Stuff</source>
        <translation type="vanished">Публикация материалов</translation>
    </message>
    <message>
        <source>%1 Add-On Uploader</source>
        <comment>Program name followed by &apos;Add On Uploader&apos;</comment>
        <translation type="vanished">Программа публикации дополнений для %1</translation>
    </message>
    <message>
        <source>Please put in a name.</source>
        <translation type="vanished">Введите имя.</translation>
    </message>
    <message>
        <source>Old upload information found, fill out fields?</source>
        <translation type="vanished">Обнаружены параметры прежней публикации. Использовать их?</translation>
    </message>
    <message>
        <source>Fill Out</source>
        <translation type="vanished">Да</translation>
    </message>
    <message>
        <source>Do Not Fill Out</source>
        <translation type="vanished">Нет</translation>
    </message>
    <message>
        <source>Author:</source>
        <translation type="vanished">Автор:</translation>
    </message>
    <message>
        <source>Email address:</source>
        <translation type="vanished">Адрес электронной почты:</translation>
    </message>
    <message>
        <source>License:</source>
        <translation type="vanished">Лицензия:</translation>
    </message>
    <message>
        <source>GPL</source>
        <translation type="vanished">GPL</translation>
    </message>
    <message>
        <source>LGPL</source>
        <translation type="vanished">LGPL</translation>
    </message>
    <message>
        <source>BSD</source>
        <translation type="vanished">BSD</translation>
    </message>
    <message>
        <source>Preview URL:</source>
        <translation type="vanished">URL миниатюры:</translation>
    </message>
    <message>
        <source>Language:</source>
        <translation type="vanished">Язык:</translation>
    </message>
    <message>
        <source>In which language did you describe the above?</source>
        <translation type="vanished">На каком языке описано указанное выше?</translation>
    </message>
    <message>
        <source>Please describe your upload.</source>
        <translation type="vanished">Опишите загружаемые материалы.</translation>
    </message>
    <message>
        <source>Summary:</source>
        <translation type="vanished">Сводка:</translation>
    </message>
    <message>
        <source>Please give some information about yourself.</source>
        <translation type="vanished">Укажите информацию о себе.</translation>
    </message>
    <message>
        <source>This item costs %1 %2.
Do you want to buy it?</source>
        <comment>the price of a download item, parameter 1 is the currency, 2 is the price</comment>
        <translation type="vanished">Стоимость обозначенного составляет %1 %2.
Хотите купить?</translation>
    </message>
    <message>
        <source>Your account balance is too low:
Your balance: %1
Price: %2</source>
        <translation type="vanished">Недостаточно средств на счёте.
Остаток на счёте: %1
Цена: %2</translation>
    </message>
    <message>
        <source>Your vote was recorded.</source>
        <comment>voting for an item (good/bad)</comment>
        <translation type="vanished">Ваш голос учтён.</translation>
    </message>
    <message>
        <source>You are now a fan.</source>
        <translation type="vanished">Теперь вы фанат этого дополнения.</translation>
    </message>
    <message>
        <source>Network error. (%1)</source>
        <translation type="vanished">Сетевая ошибка (%1).</translation>
    </message>
    <message>
        <source>Too many requests to server. Please try again in a few minutes.</source>
        <translation type="vanished">Слишком много обращений на сервер. Повторите попытку через несколько минут.</translation>
    </message>
    <message>
        <source>Unknown Open Collaboration Service API error. (%1)</source>
        <translation type="vanished">Неизвестная ошибка Open Collaboration Service (%1).</translation>
    </message>
    <message>
        <source>Initializing</source>
        <translation type="vanished">Инициализация</translation>
    </message>
    <message>
        <source>Configuration file not found: &quot;%1&quot;</source>
        <translation type="vanished">Файл конфигурации не найден: «%1»</translation>
    </message>
    <message>
        <source>Configuration file is invalid: &quot;%1&quot;</source>
        <translation type="vanished">Неверный файл конфигурации: «%1»</translation>
    </message>
    <message>
        <source>Loading provider information</source>
        <translation type="vanished">Загрузка информации о сервере</translation>
    </message>
    <message>
        <source>Could not load get hot new stuff providers from file: %1</source>
        <translation type="vanished">Не удалось загрузить список поставщиков из файла: %1</translation>
    </message>
    <message>
        <source>Error initializing provider.</source>
        <translation type="vanished">Ошибка инициализации поставщика.</translation>
    </message>
    <message>
        <source>Loading data</source>
        <translation type="vanished">Загрузка данных</translation>
    </message>
    <message>
        <source>Loading data from provider</source>
        <translation type="vanished">Загрузка данных от поставщика</translation>
    </message>
    <message>
        <source>Loading of providers from file: %1 failed</source>
        <translation type="vanished">Ошибка загрузки поставщиков из файла: %1</translation>
    </message>
    <message numerus="yes">
        <source>Loading one preview</source>
        <translation type="vanished">
            <numerusform>Загрузка %1 миниатюры...</numerusform>
            <numerusform>Загрузка %1 миниатюр...</numerusform>
            <numerusform>Загрузка %1 миниатюр...</numerusform>
        </translation>
        <extra-po-msgid_plural>Loading %1 previews</extra-po-msgid_plural>
    </message>
    <message>
        <source>Installing</source>
        <translation type="vanished">Установка</translation>
    </message>
    <message>
        <source>Invalid item.</source>
        <translation type="vanished">Неподдерживаемый элемент.</translation>
    </message>
    <message>
        <source>Download of item failed: no download URL for &quot;%1&quot;.</source>
        <translation type="vanished">Ошибка загрузки: не указан адрес URL для «%1».</translation>
    </message>
    <message>
        <source>Download of &quot;%1&quot; failed, error: %2</source>
        <translation type="vanished">Ошибка загрузки «%1»: %2</translation>
    </message>
    <message>
        <source>The downloaded file is a html file. This indicates a link to a website instead of the actual download. Would you like to open the site with a browser instead?</source>
        <translation type="vanished">Вы пытаетесь загрузить файл HTML. Это означает, что ссылка указывает на веб-страницу, а не на файл. Открыть ссылку в браузере?</translation>
    </message>
    <message>
        <source>Possibly bad download link</source>
        <translation type="vanished">Возможно, неверная ссылка</translation>
    </message>
    <message>
        <source>Downloaded file was a HTML file. Opened in browser.</source>
        <translation type="vanished">Попытка загрузки файла HTML. Ссылка будет открыта в браузере.</translation>
    </message>
    <message>
        <source>Could not install &quot;%1&quot;: file not found.</source>
        <translation type="vanished">Не удалось установить «%1»: файл не найден</translation>
    </message>
    <message>
        <source>Overwrite existing file?</source>
        <translatorcomment>BUGME: quotes are not translatable</translatorcomment>
        <translation type="vanished">Заменить существующий файл?</translation>
    </message>
    <message>
        <source>Download File</source>
        <translatorcomment>[https://bugs.kde.org/show_bug.cgi?id=265438] BUGME: colon in caption</translatorcomment>
        <translation type="vanished">Загрузка файла</translation>
    </message>
    <message>
        <source>Icons view mode</source>
        <translation type="vanished">Значки</translation>
    </message>
    <message>
        <source>Details view mode</source>
        <translation type="vanished">Список</translation>
    </message>
    <message>
        <source>All Providers</source>
        <translation type="vanished">Все поставщики материалов</translation>
    </message>
    <message>
        <source>All Categories</source>
        <translation type="vanished">Все категории</translation>
    </message>
    <message>
        <source>Provider:</source>
        <translation type="vanished">Поставщик:</translation>
    </message>
    <message>
        <source>Category:</source>
        <translation type="vanished">Категория:</translation>
    </message>
    <message>
        <source>Newest</source>
        <translation type="vanished">Новые</translation>
    </message>
    <message>
        <source>Rating</source>
        <translation type="vanished">Высоко оценённые</translation>
    </message>
    <message>
        <source>Most downloads</source>
        <translation type="vanished">Самые популярные</translation>
    </message>
    <message>
        <source>Installed</source>
        <translation type="vanished">Установленные</translation>
    </message>
    <message>
        <source>Order by:</source>
        <translation type="vanished">Выше ставить:</translation>
    </message>
    <message>
        <source>Search:</source>
        <translation type="vanished">Поиск:</translation>
    </message>
    <message>
        <source>&lt;a href=&quot;http://opendesktop.org&quot;&gt;Homepage&lt;/a&gt;</source>
        <translation type="vanished">&lt;a href=&quot;http://opendesktop.org&quot;&gt;Домашняя страница&lt;/a&gt;</translation>
    </message>
    <message>
        <source>Become a Fan</source>
        <translation type="vanished">Стать фанатом</translation>
    </message>
    <message>
        <source>Details for %1</source>
        <translation type="vanished">Сведения о %1</translation>
    </message>
    <message>
        <source>Changelog:</source>
        <translation type="vanished">История изменений:</translation>
    </message>
    <message>
        <source>Homepage</source>
        <comment>A link to the description of this Get Hot New Stuff item</comment>
        <translation type="vanished">Веб-сайт</translation>
    </message>
    <message>
        <source>Make a donation</source>
        <comment>A link to make a donation for a Get Hot New Stuff item (opens a web browser)</comment>
        <translation type="vanished">Сделать пожертвование</translation>
    </message>
    <message numerus="yes">
        <source>Knowledgebase (no entries)</source>
        <comment>A link to the knowledgebase (like a forum) (opens a web browser)</comment>
        <translatorcomment>BUGME: wrong usage of plurals (&quot;no entries&quot; for n=1)</translatorcomment>
        <translation type="vanished">
            <numerusform>База знаний (%1 вхождение)</numerusform>
            <numerusform>База знаний (%1 вхождения)</numerusform>
            <numerusform>База знаний (%1 вхождений)</numerusform>
        </translation>
        <extra-po-msgid_plural>Knowledgebase (%1 entries)</extra-po-msgid_plural>
    </message>
    <message>
        <source>Opens in a browser window</source>
        <comment>Tooltip for a link in a dialog</comment>
        <translation type="vanished">Открыть в браузере</translation>
    </message>
    <message>
        <source>Rating: %1%</source>
        <translation type="vanished">Рейтинг: %1%</translation>
    </message>
    <message>
        <source>By &lt;i&gt;%1&lt;/i&gt;</source>
        <comment>Show the author of this item in a list</comment>
        <translation type="vanished">Автор: &lt;i&gt;%1&lt;/i&gt;</translation>
    </message>
    <message numerus="yes">
        <source>1 fan</source>
        <comment>fan as in supporter</comment>
        <translation type="vanished">
            <numerusform>%1 фанат</numerusform>
            <numerusform>%1 фаната</numerusform>
            <numerusform>%1 фанатов</numerusform>
        </translation>
        <extra-po-msgid_plural>%1 fans</extra-po-msgid_plural>
    </message>
    <message numerus="yes">
        <source>1 download</source>
        <translation type="vanished">
            <numerusform>%1 загрузка</numerusform>
            <numerusform>%1 загрузки</numerusform>
            <numerusform>%1 загрузок</numerusform>
        </translation>
        <extra-po-msgid_plural>%1 downloads</extra-po-msgid_plural>
    </message>
    <message>
        <source>Updating</source>
        <translation type="vanished">Обновление</translation>
    </message>
    <message>
        <source>Install Again</source>
        <translation type="vanished">Установить заново</translation>
    </message>
    <message>
        <source>Fetching license data from server...</source>
        <translation type="vanished">Получение лицензии с сервера...</translation>
    </message>
    <message>
        <source>Fetching content data from server...</source>
        <translation type="vanished">Получение данных с сервера...</translation>
    </message>
    <message>
        <source>Register a new account</source>
        <translation type="vanished">Зарегистрировать новую учётную запись</translation>
    </message>
    <message>
        <source>Checking login...</source>
        <translation type="vanished">Попытка входа...</translation>
    </message>
    <message>
        <source>Fetching your previously updated content...</source>
        <translation type="vanished">Получение ранее обновлённого содержимого...</translation>
    </message>
    <message>
        <source>Could not verify login, please try again.</source>
        <translation type="vanished">Не удалось проверить данные регистрации. Попробуйте позже.</translation>
    </message>
    <message>
        <source>Fetching your previously updated content finished.</source>
        <translation type="vanished">Получение ранее обновлённого содержимого завершено.</translation>
    </message>
    <message>
        <source>Fetching content data from server finished.</source>
        <translation type="vanished">Получение содержимого с сервера завершено.</translation>
    </message>
    <message>
        <source>Visit website</source>
        <comment>A link to the website where the get hot new stuff upload can be seen</comment>
        <translation type="vanished">Посетить веб-сайт</translation>
    </message>
    <message>
        <source>File not found: %1</source>
        <translation type="vanished">Файл %1 не найден.</translation>
    </message>
    <message>
        <source>Upload Failed</source>
        <translation type="vanished">Не удалось загрузить файл на сервер</translation>
    </message>
    <message numerus="yes">
        <source>The server does not recognize the category %2 to which you are trying to upload.</source>
        <translation type="vanished">
            <numerusform>Сервер не поддерживает категорий (%2), в которые вы хотите выполнить загрузку.</numerusform>
            <numerusform>Сервер не поддерживает категорий (%2), в которые вы хотите выполнить загрузку.</numerusform>
            <numerusform>Сервер не поддерживает категорий (%2), в которые вы хотите выполнить загрузку.</numerusform>
        </translation>
        <extra-po-msgid_plural>The server does not recognize any of the categories to which you are trying to upload: %2</extra-po-msgid_plural>
    </message>
    <message>
        <source>The selected category &quot;%1&quot; is invalid.</source>
        <translation type="vanished">Выбрана недопустимая категория «%1».</translation>
    </message>
    <message>
        <source>Select preview image</source>
        <translation type="vanished">Выбор изображения для миниатюры</translation>
    </message>
    <message>
        <source>There was a network error.</source>
        <translation type="vanished">Произошла ошибка сети.</translation>
    </message>
    <message>
        <source>Uploading Failed</source>
        <translation type="vanished">Не удалось загрузить файл на сервер</translation>
    </message>
    <message>
        <source>Authentication error.</source>
        <translation type="vanished">Ошибка аутентификации.</translation>
    </message>
    <message>
        <source>Upload failed: %1</source>
        <translation type="vanished">Загрузка на сервер не удалась: %1</translation>
    </message>
    <message>
        <source>File to upload:</source>
        <translation type="vanished">Файл для публикации:</translation>
    </message>
    <message>
        <source>New Upload</source>
        <translation type="vanished">Новый материал</translation>
    </message>
    <message>
        <source>Please fill out the information about your upload in English.</source>
        <translation type="vanished">Опишите загружаемые материалы на английском языке.</translation>
    </message>
    <message>
        <source>Name of the file as it will appear on the website</source>
        <translation type="vanished">Имя, под которым файл будет показан на сайте</translation>
    </message>
    <message>
        <source>This should clearly describe the file content. It can be the same text as the title of the kvtml file.</source>
        <translation type="vanished">Имя должно ясно описывать содержимое файла.</translation>
    </message>
    <message>
        <source>Preview Images</source>
        <translation type="vanished">Миниатюры</translation>
    </message>
    <message>
        <source>Select Preview...</source>
        <translation type="vanished">Выбрать...</translation>
    </message>
    <message>
        <source>Set a price for this item</source>
        <translation type="vanished">Установить цену</translation>
    </message>
    <message>
        <source>Price</source>
        <translation type="vanished">Цена</translation>
    </message>
    <message>
        <source>Price:</source>
        <translation type="vanished">Цена:</translation>
    </message>
    <message>
        <source>Reason for price:</source>
        <translation type="vanished">Обоснование цены:</translation>
    </message>
    <message>
        <source>Fetch content link from server</source>
        <translation type="vanished">Получение от сервера ссылки на материалы</translation>
    </message>
    <message>
        <source>Create content on server</source>
        <translation type="vanished">Создание материалов на сервере</translation>
    </message>
    <message>
        <source>Upload content</source>
        <translation type="vanished">Загрузка материалов на сервер</translation>
    </message>
    <message>
        <source>Upload first preview</source>
        <translation type="vanished">Загрузка первой миниатюры на сервер</translation>
    </message>
    <message>
        <source>Note: You can edit, update and delete your content on the website.</source>
        <translation type="vanished">Примечание: вы можете редактировать, обновлять и удалять свои материалы на веб-сайте.</translation>
    </message>
    <message>
        <source>Upload second preview</source>
        <translation type="vanished">Загрузка второй миниатюры на сервер</translation>
    </message>
    <message>
        <source>Upload third preview</source>
        <translation type="vanished">Загрузка третьей миниатюры на сервер</translation>
    </message>
    <message>
        <source>I ensure that this content does not violate any existing copyright, law or trademark. I agree for my IP address to be logged. (Distributing content without the permission of the copyright holder is illegal.)</source>
        <translation type="vanished">Я подтверждаю, что эти материалы не нарушают авторских прав, законов или прав на торговые марки. Я разрешаю записать мой IP-адрес. (Распространение материалов без разрешения правообладателя незаконно.)</translation>
    </message>
    <message>
        <source>Start Upload</source>
        <translation type="vanished">Начать загрузку</translation>
    </message>
    <message>
        <source>Play a &amp;sound</source>
        <translation type="vanished">Воспроизвести &amp;звук</translation>
    </message>
    <message>
        <source>Select the sound to play</source>
        <translation type="vanished">Выберите звуковой файл</translation>
    </message>
    <message>
        <source>Show a message in a &amp;popup</source>
        <translation type="vanished">Показать &amp;сообщение во всплывающем окне</translation>
    </message>
    <message>
        <source>Log to a file</source>
        <translation type="vanished">&amp;Сохранять в файле журнала</translation>
    </message>
    <message>
        <source>Mark &amp;taskbar entry</source>
        <translation type="vanished">Выдели&amp;ть программу в панели задач</translation>
    </message>
    <message>
        <source>Run &amp;command</source>
        <translation type="vanished">Выполнить &amp;программу</translation>
    </message>
    <message>
        <source>Select the command to run</source>
        <translation type="vanished">Выберите программу</translation>
    </message>
    <message>
        <source>Sp&amp;eech</source>
        <translation type="vanished">З&amp;ачитать</translation>
    </message>
    <message>
        <source>&lt;qt&gt;Specifies how Jovie should speak the event when received.  If you select &quot;Speak custom text&quot;, enter the text in the box.  You may use the following substitution strings in the text:&lt;dl&gt;&lt;dt&gt;%e&lt;/dt&gt;&lt;dd&gt;Name of the event&lt;/dd&gt;&lt;dt&gt;%a&lt;/dt&gt;&lt;dd&gt;Application that sent the event&lt;/dd&gt;&lt;dt&gt;%m&lt;/dt&gt;&lt;dd&gt;The message sent by the application&lt;/dd&gt;&lt;/dl&gt;&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Что произносить при возникновении события. В случае выбора варианта «Зачитать указанный мною текст», введите текст в соответствующее поле. Возможно использование следующих обозначений:&lt;dl&gt;&lt;dt&gt;%e&lt;/dt&gt;&lt;dd&gt;категория события&lt;/dd&gt;&lt;dt&gt;%a&lt;/dt&gt;&lt;dd&gt;приложение-источник события&lt;/dd&gt;&lt;dt&gt;%m&lt;/dt&gt;&lt;dd&gt;сообщение, переданное приложением&lt;/dd&gt;&lt;/dl&gt;&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>Speak Event Message</source>
        <translation type="vanished">Зачитать содержание события</translation>
    </message>
    <message>
        <source>Speak Event Name</source>
        <translation type="vanished">Зачитать название события</translation>
    </message>
    <message>
        <source>Speak Custom Text</source>
        <translation type="vanished">Зачитать указанный мною текст</translation>
    </message>
    <message>
        <source>Configure Notifications</source>
        <translation type="vanished">Настройка уведомлений</translation>
    </message>
    <message>
        <source>State</source>
        <comment>State of the notified event</comment>
        <translation type="vanished">Состояние</translation>
    </message>
    <message>
        <source>Title</source>
        <comment>Title of the notified event</comment>
        <translation type="vanished">Заголовок</translation>
    </message>
    <message>
        <source>Description</source>
        <comment>Description of the notified event</comment>
        <translation type="vanished">Описание</translation>
    </message>
    <message>
        <source>&lt;qt&gt;Do you want to search the Internet for &lt;b&gt;%1&lt;/b&gt;?&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Выполнить поиск &lt;b&gt;%1&lt;/b&gt; в Интернете?&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>Internet Search</source>
        <translation type="vanished">Поиск в Интернет</translation>
    </message>
    <message>
        <source>&amp;Search</source>
        <translation type="vanished">&amp;Поиск</translation>
    </message>
    <message>
        <source>Type: %1</source>
        <comment>@label Type of file</comment>
        <translation type="vanished">Тип: %1</translation>
    </message>
    <message>
        <source>Remember action for files of this type</source>
        <comment>@label:checkbox</comment>
        <translation type="vanished">В будущем поступать с файлами этого типа так же</translation>
    </message>
    <message>
        <source>&amp;Open with %1</source>
        <comment>@label:button</comment>
        <translation type="vanished">&amp;Открыть в программе «%1»</translation>
    </message>
    <message>
        <source>Open &amp;with %1</source>
        <comment>@action:inmenu</comment>
        <translation type="vanished">Открыть &amp;в программе «%1»</translation>
    </message>
    <message>
        <source>Open &apos;%1&apos;?</source>
        <comment>@info</comment>
        <translation type="vanished">Открыть «%1»?</translation>
    </message>
    <message>
        <source>&amp;Open with...</source>
        <comment>@label:button</comment>
        <translation type="vanished">&amp;Открыть с помощью...</translation>
    </message>
    <message>
        <source>&amp;Open with</source>
        <comment>@label:button</comment>
        <translation type="vanished">&amp;Открыть с помощью...</translation>
    </message>
    <message>
        <source>&amp;Open</source>
        <comment>@label:button</comment>
        <translation type="vanished">&amp;Открыть</translation>
    </message>
    <message>
        <source>Name: %1</source>
        <comment>@label File name</comment>
        <translation type="vanished">Имя файла: %1</translation>
    </message>
    <message>
        <source>This is the file name suggested by the server</source>
        <comment>@info:whatsthis</comment>
        <translation type="vanished">Имя файла, предложенное сервером.</translation>
    </message>
    <message>
        <source>Do you really want to execute &apos;%1&apos;?</source>
        <translation type="vanished">Выполнить «%1»?</translation>
    </message>
    <message>
        <source>Execute File?</source>
        <translation type="vanished">Выполнить файл?</translation>
    </message>
    <message>
        <source>Accept</source>
        <translation type="vanished">Принять</translation>
    </message>
    <message>
        <source>Reject</source>
        <translation type="vanished">Отклонить</translation>
    </message>
    <message>
        <source>Untitled</source>
        <translation type="vanished">Безымянный</translation>
    </message>
    <message>
        <source>The document &quot;%1&quot; has been modified.
Do you want to save your changes or discard them?</source>
        <translation type="vanished">Документ «%1» был изменён.
Сохранить изменения или отклонить их?</translation>
    </message>
    <message>
        <source>Close Document</source>
        <translation type="vanished">Закрыть документ</translation>
    </message>
    <message>
        <source>Error reading from PTY</source>
        <translation type="vanished">Ошибка чтения из PTY</translation>
    </message>
    <message>
        <source>Error writing to PTY</source>
        <translation type="vanished">Ошибка записи в PTY</translation>
    </message>
    <message>
        <source>PTY operation timed out</source>
        <translation type="vanished">Истекло время ожидания завершения операции PTY</translation>
    </message>
    <message>
        <source>Error opening PTY</source>
        <translation type="vanished">Ошибка открытия PTY</translation>
    </message>
    <message>
        <source>Kross</source>
        <translation type="vanished">Kross</translation>
    </message>
    <message>
        <source>KDE application to run Kross scripts.</source>
        <translation type="vanished">Приложение KDE для запуска скриптов Kross.</translation>
    </message>
    <message>
        <source>(C) 2006 Sebastian Sauer</source>
        <translation type="vanished">© Sebastian Sauer, 2006</translation>
    </message>
    <message>
        <source>Run Kross scripts.</source>
        <translation type="vanished">Запуск скриптов Kross.</translation>
    </message>
    <message>
        <source>Sebastian Sauer</source>
        <translation type="vanished">Sebastian Sauer</translation>
    </message>
    <message>
        <source>Scriptfile</source>
        <translation type="vanished">Скрипт</translation>
    </message>
    <message>
        <source>Scriptfile &quot;%1&quot; does not exist.</source>
        <translation type="vanished">Файл скрипта «%1» не найден.</translation>
    </message>
    <message>
        <source>Failed to determine interpreter for scriptfile &quot;%1&quot;</source>
        <translation type="vanished">Не удалось определить интерпретатор для скрипта «%1»</translation>
    </message>
    <message>
        <source>Failed to open scriptfile &quot;%1&quot;</source>
        <translation type="vanished">Не удалось открыть файл скрипта «%1»</translation>
    </message>
    <message>
        <source>Failed to load interpreter &quot;%1&quot;</source>
        <translation type="vanished">Не удалось загрузить интерпретатор «%1»</translation>
    </message>
    <message>
        <source>No such interpreter &quot;%1&quot;</source>
        <translation type="vanished">Неизвестный интерпретатор «%1»</translation>
    </message>
    <message>
        <source>Failed to create script for interpreter &quot;%1&quot;</source>
        <translation type="vanished">Не удалось создать скрипт для интерпретатора «%1»</translation>
    </message>
    <message>
        <source>Level of safety of the Ruby interpreter</source>
        <translation type="vanished">Уровень безопасности интерпретатора Ruby</translation>
    </message>
    <message>
        <source>Cancel?</source>
        <translation type="vanished">Отменить?</translation>
    </message>
    <message>
        <source>No such function &quot;%1&quot;</source>
        <translation type="vanished">Функция «%1» не существует</translation>
    </message>
    <message>
        <source>Text:</source>
        <translation type="vanished">Текст:</translation>
    </message>
    <message>
        <source>Comment:</source>
        <translation type="vanished">Комментарий:</translation>
    </message>
    <message>
        <source>Icon:</source>
        <translation type="vanished">Значок:</translation>
    </message>
    <message>
        <source>Interpreter:</source>
        <translation type="vanished">Интерпретатор:</translation>
    </message>
    <message>
        <source>File:</source>
        <translation type="vanished">Файл:</translation>
    </message>
    <message>
        <source>Execute the selected script.</source>
        <translation type="vanished">Запустить выбранный скрипт.</translation>
    </message>
    <message>
        <source>Stop execution of the selected script.</source>
        <translation type="vanished">Остановить выполнение выбранного скрипта.</translation>
    </message>
    <message>
        <source>Edit...</source>
        <translation type="vanished">Изменить...</translation>
    </message>
    <message>
        <source>Edit selected script.</source>
        <translation type="vanished">Изменить выбранный скрипт.</translation>
    </message>
    <message>
        <source>Add...</source>
        <translation type="vanished">Добавить...</translation>
    </message>
    <message>
        <source>Add a new script.</source>
        <translation type="vanished">Создать новый скрипт.</translation>
    </message>
    <message>
        <source>Remove selected script.</source>
        <translation type="vanished">Удалить выбранный скрипт.</translation>
    </message>
    <message>
        <source>Edit</source>
        <translation type="vanished">Правка</translation>
    </message>
    <message>
        <source>General</source>
        <comment>@title:group Script properties</comment>
        <translation type="vanished">Главное</translation>
    </message>
    <message>
        <source>The module %1 could not be found.</source>
        <translation type="vanished">Модуль %1 не найден.</translation>
    </message>
    <message>
        <source>&lt;qt&gt;&lt;p&gt;The diagnosis is:&lt;br /&gt;The desktop file %1 could not be found.&lt;/p&gt;&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;&lt;p&gt;Проблема:&lt;br /&gt;не удалось найти файл %1.&lt;/p&gt;&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>The module %1 is disabled.</source>
        <translation type="vanished">Модуль %1 отключен.</translation>
    </message>
    <message>
        <source>&lt;qt&gt;&lt;p&gt;Either the hardware/software the module configures is not available or the module has been disabled by the administrator.&lt;/p&gt;&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;&lt;p&gt;Не найдено оборудование или программное обеспечение для работы модуля или использование модуля отключено администратором.&lt;/p&gt;&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>The module %1 is not a valid configuration module.</source>
        <translation type="vanished">Модуль %1 не является правильным модулем настройки KDE.</translation>
    </message>
    <message>
        <source>&lt;qt&gt;The diagnosis is:&lt;br /&gt;The desktop file %1 does not specify a library.&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Проблема:&lt;br /&gt;файл %1 не содержит имя библиотеки.&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>There was an error loading the module.</source>
        <translation type="vanished">При загрузке модуля произошла ошибка.</translation>
    </message>
    <message>
        <source>&lt;qt&gt;The diagnosis is:&lt;br /&gt;%1&lt;p&gt;Possible reasons:&lt;/p&gt;&lt;ul&gt;&lt;li&gt;An error occurred during your last KDE upgrade leaving an orphaned control module&lt;/li&gt;&lt;li&gt;You have old third party modules lying around.&lt;/li&gt;&lt;/ul&gt;&lt;p&gt;Check these points carefully and try to remove the module mentioned in the error message. If this fails, consider contacting your distributor or packager.&lt;/p&gt;&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;Проблема:&lt;br /&gt;%1&lt;p&gt;Возможные причины:&lt;/p&gt;&lt;ul&gt;&lt;li&gt;Ошибка при последнем обновлении KDE, в результате которой остался модуль управления от предыдущей версии;&lt;/li&gt;&lt;li&gt;У вас установлены сторонние модули настройки.&lt;/li&gt;&lt;/ul&gt;&lt;p&gt;Внимательно проверьте эти пункты и удалите перечисленные выше модули. Если ошибка повторяется, обратитесь к поставщику пакетов.&lt;/p&gt;&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>&lt;qt&gt;&lt;p&gt;Possible reasons:&lt;ul&gt;&lt;li&gt;An error occurred during your last KDE upgrade leaving an orphaned control module&lt;/li&gt;&lt;li&gt;You have old third party modules lying around.&lt;/li&gt;&lt;/ul&gt;&lt;/p&gt;&lt;p&gt;Check these points carefully and try to remove the module mentioned in the error message. If this fails, consider contacting your distributor or packager.&lt;/p&gt;&lt;/qt&gt;</source>
        <translation type="vanished">&lt;qt&gt;&lt;p&gt;Возможные причины:&lt;ul&gt;&lt;li&gt;Ошибка при последнем обновлении KDE, в результате которой остался модуль настройки от предыдущей версии&lt;/li&gt;&lt;li&gt;У вас установлены сторонние модули настройки.&lt;/li&gt;&lt;/ul&gt;&lt;/p&gt;&lt;p&gt;Внимательно проверьте эти пункты и удалите перечисленные выше модули. Если ошибка повторяется, обратитесь к поставщику пакетов.&lt;/p&gt;&lt;/qt&gt;</translation>
    </message>
    <message>
        <source>This configuration section is already opened in %1</source>
        <comment>Argument is application name</comment>
        <translation type="vanished">Этот модуль настройки уже открыт в %1</translation>
    </message>
    <message>
        <source>The settings of the current module have changed.
Do you want to apply the changes or discard them?</source>
        <translation type="vanished">В текущем модуле имеются несохранённые изменения.
Применить их?</translation>
    </message>
    <message>
        <source>Apply Settings</source>
        <translation type="vanished">Сохранение параметров</translation>
    </message>
    <message>
        <source>Distance between desktop icons</source>
        <translation type="vanished">Расстояние между значками на рабочем столе</translation>
    </message>
    <message>
        <source>The distance between icons specified in pixels.</source>
        <translation type="vanished">Расстояние между значками в пикселах.</translation>
    </message>
    <message>
        <source>Widget style to use</source>
        <translation type="vanished">Стиль элементов интерфейса</translation>
    </message>
    <message>
        <source>The name of the widget style, for example &quot;keramik&quot; or &quot;plastik&quot;. Without quotes.</source>
        <translation type="vanished">Название стиля элементов интерфейса, например, «keramik» или «plastik» (без кавычек).</translation>
    </message>
    <message>
        <source>Use the PC speaker</source>
        <translation type="vanished">Использовать динамик, встроенный в системный блок</translation>
    </message>
    <message>
        <source>Whether the ordinary PC speaker should be used instead of KDE&apos;s own notifications system.</source>
        <translation type="vanished">Использовать ли динамик, встроенный в системный блок, вместо системы уведомлений KDE.</translation>
    </message>
    <message>
        <source>What terminal application to use</source>
        <translation type="vanished">Какое терминальное приложение использовать</translation>
    </message>
    <message>
        <source>Whenever a terminal application is launched this terminal emulator program will be used.
</source>
        <translation type="vanished">Какое приложение использовать для терминала.
</translation>
    </message>
    <message>
        <source>Fixed width font</source>
        <translation type="vanished">Моноширинный шрифт</translation>
    </message>
    <message>
        <source>This font is used when a fixed font is needed. A fixed font has a constant width.
</source>
        <translation type="vanished">Этот шрифт будет использован при выводе текста моноширинным шрифтом. Все символы моноширинного шрифта имеют одинаковую ширину.
</translation>
    </message>
    <message>
        <source>System wide font</source>
        <translation type="vanished">Системный шрифт</translation>
    </message>
    <message>
        <source>Font for menus</source>
        <translation type="vanished">Шрифт меню</translation>
    </message>
    <message>
        <source>What font to use for menus in applications.</source>
        <translation type="vanished">Шрифт, который будет использоваться для меню.</translation>
    </message>
    <message>
        <source>Color for links</source>
        <translation type="vanished">Цвет ссылок</translation>
    </message>
    <message>
        <source>What color links should be that have not yet been clicked on</source>
        <translation type="vanished">Цвет не посещённых ссылок</translation>
    </message>
    <message>
        <source>Color for visited links</source>
        <translation type="vanished">Цвет посещённых ссылок</translation>
    </message>
    <message>
        <source>Font for the taskbar</source>
        <translation type="vanished">Шрифт панели задач</translation>
    </message>
    <message>
        <source>What font to use for the panel at the bottom of the screen, where the currently running applications are.</source>
        <translation type="vanished">Шрифт, который будет использован для панели со списком запущенных программ.</translation>
    </message>
    <message>
        <source>Fonts for toolbars</source>
        <translation type="vanished">Шрифт панелей инструментов</translation>
    </message>
    <message>
        <source>Shortcut for taking screenshot</source>
        <translation type="vanished">Комбинация клавиш для создания снимка экрана</translation>
    </message>
    <message>
        <source>Shortcut for toggling Clipboard Actions on and off</source>
        <translation type="vanished">Комбинация клавиш для включения и выключения действий с содержимым буфера обмена</translation>
    </message>
    <message>
        <source>Shortcut for shutting down the computer without confirmation</source>
        <translation type="vanished">Комбинация клавиш для выключения компьютера без подтверждения</translation>
    </message>
    <message>
        <source>Show directories first</source>
        <translation type="vanished">Папки в начале</translation>
    </message>
    <message>
        <source>Whether directories should be placed at the top when displaying files</source>
        <translation type="vanished">Помещать ли папки перед списком файлов</translation>
    </message>
    <message>
        <source>The URLs recently visited</source>
        <translation type="vanished">Посещённые ссылки</translation>
    </message>
    <message>
        <source>Used for auto-completion in file dialogs, for example</source>
        <translation type="vanished">Используется для автодополнения в диалогах, например</translation>
    </message>
    <message>
        <source>Show file preview in file dialog</source>
        <translation type="vanished">Показывать предварительный просмотр в диалогах выбора файла</translation>
    </message>
    <message>
        <source>Show hidden files</source>
        <translation type="vanished">Показывать скрытые файлы</translation>
    </message>
    <message>
        <source>Whether files starting with a dot (convention for hidden files) should be shown</source>
        <translation type="vanished">При включении этого параметра будут показываться скрытые файлы и папки (имена которых начинается с точки)</translation>
    </message>
    <message>
        <source>Show speedbar</source>
        <translation type="vanished">Показать панель быстрого доступа</translation>
    </message>
    <message>
        <source>Whether the shortcut icons to the left in the file dialog should be shown</source>
        <translation type="vanished">Показывать панель со значками быстрого доступа к папкам с левой стороны диалога выбора файла</translation>
    </message>
    <message>
        <source>What country</source>
        <translation type="vanished">Страна</translation>
    </message>
    <message>
        <source>Used to determine how to display numbers, currency and time/date, for example</source>
        <translation type="vanished">Используется для определения формата показа чисел, денежных сумм, даты и времени</translation>
    </message>
    <message>
        <source>What language to use to display text</source>
        <translation type="vanished">Язык текста</translation>
    </message>
    <message>
        <source>Character used for indicating positive numbers</source>
        <translation type="vanished">Символ, используемый для показа положительных чисел</translation>
    </message>
    <message>
        <source>Most countries have no character for this</source>
        <translation type="vanished">Большинство стран не использует такой символ</translation>
    </message>
    <message>
        <source>Path to the autostart directory</source>
        <translation type="vanished">Путь к папке автозапуска</translation>
    </message>
    <message>
        <source>Path to the directory containing executables to be run on session login</source>
        <translation type="vanished">Путь к папке, содержащей исполняемые файлы, которые выполняются в начале сеанса KDE</translation>
    </message>
    <message>
        <source>Enable SOCKS support</source>
        <translation type="vanished">Включить поддержку SOCKS</translation>
    </message>
    <message>
        <source>Whether SOCKS version 4 and 5 should be enabled in KDE&apos;s sub systems</source>
        <translation type="vanished">Использовать поддержку SOCKS версии 4 и 5 в KDE</translation>
    </message>
    <message>
        <source>Path to custom SOCKS library</source>
        <translation type="vanished">Путь к библиотеке SOCKS</translation>
    </message>
    <message>
        <source>Highlight toolbar buttons on mouse over</source>
        <translation type="vanished">Подсвечивать кнопки на панелях инструментов при наведении на них курсором мыши</translation>
    </message>
    <message>
        <source>Show text on toolbar icons </source>
        <translation type="vanished">Показывать надписи на кнопках панелей инструментов</translation>
    </message>
    <message>
        <source>Whether text should be shown in addition to icons on toolbar icons</source>
        <translation type="vanished">Показывать надписи на кнопках панелей инструментов в дополнении к значкам</translation>
    </message>
    <message>
        <source>Password echo type</source>
        <translation type="vanished">Показ символов при вводе пароля</translation>
    </message>
    <message>
        <source>The size of the dialog</source>
        <translation type="vanished">Размер диалога</translation>
    </message>
    <message>
        <source>Automatic changes have been performed due to plugin dependencies. Click here for further information</source>
        <translation type="vanished">Для удовлетворения зависимости расширения будут предприняты некоторые автоматические изменения. Нажмите здесь для получения дополнительной информации</translation>
    </message>
    <message>
        <source>Automatic changes have been performed in order to satisfy plugin dependencies:
</source>
        <translation type="vanished">Для удовлетворения зависимости расширения будут предприняты следующие автоматические изменения:
</translation>
    </message>
    <message>
        <source>
    %1 plugin has been automatically checked because of the dependency of %2 plugin</source>
        <translation type="vanished">
    Расширение %1 будет выбрано, так как от него зависит расширение %2</translation>
    </message>
    <message>
        <source>
    %1 plugin has been automatically unchecked because of its dependency on %2 plugin</source>
        <translation type="vanished">
    Расширение %1 не будет выбрано, так как зависит от расширения %2</translation>
    </message>
    <message>
        <source>Dependency Check</source>
        <translation type="vanished">Проверка зависимостей</translation>
    </message>
    <message numerus="yes">
        <source>%1 plugin automatically added due to plugin dependencies</source>
        <translation type="vanished">
            <numerusform>%1 расширение автоматически добавлено при проверке зависимостей</numerusform>
            <numerusform>%1 расширения автоматически добавлены при проверке зависимостей</numerusform>
            <numerusform>%1 расширений автоматически добавлены при проверке зависимостей</numerusform>
        </translation>
        <extra-po-msgid_plural>%1 plugins automatically added due to plugin dependencies</extra-po-msgid_plural>
    </message>
    <message>
        <source>, </source>
        <translation type="vanished">, </translation>
    </message>
    <message numerus="yes">
        <source>%1 plugin automatically removed due to plugin dependencies</source>
        <translation type="vanished">
            <numerusform>%1 расширение автоматически удалено при проверке зависимостей</numerusform>
            <numerusform>%1 расширения автоматически удалены при проверке зависимостей</numerusform>
            <numerusform>%1 расширений автоматически удалены при проверке зависимостей</numerusform>
        </translation>
        <extra-po-msgid_plural>%1 plugins automatically removed due to plugin dependencies</extra-po-msgid_plural>
    </message>
    <message>
        <source>Search Plugins</source>
        <translation type="vanished">Поиск расширений</translation>
    </message>
    <message>
        <source>About %1</source>
        <comment>Used only for plugins</comment>
        <translation type="vanished">О расширении %1</translation>
    </message>
    <message>
        <source>Could not load print preview part</source>
        <translation type="vanished">Не удалось загрузить компонент предварительного просмотра</translation>
    </message>
    <message>
        <source>Print Preview</source>
        <translation type="vanished">Предварительный просмотр</translation>
    </message>
    <message>
        <source>Select Components</source>
        <translation type="vanished">Выберите компоненты</translation>
    </message>
    <message>
        <source>Enable component</source>
        <translation type="vanished">Включить компонент</translation>
    </message>
    <message>
        <source>Success</source>
        <translation type="vanished">Выполнено</translation>
    </message>
    <message>
        <source>Communication error</source>
        <translation type="vanished">Ошибка связи</translation>
    </message>
    <message>
        <source>Invalid type in Database</source>
        <translation type="vanished">Недопустимый тип в базе данных</translation>
    </message>
    <message>
        <source>Query Results from &apos;%1&apos;</source>
        <comment>@title UDS_DISPLAY_NAME for a KIO directory listing. %1 is the query the user entered.</comment>
        <translation type="vanished">Результаты поиска «%1»</translation>
    </message>
    <message>
        <source>Query Results</source>
        <comment>@title UDS_DISPLAY_NAME for a KIO directory listing.</comment>
        <translation type="vanished">Результаты поиска</translation>
    </message>
    <message>
        <source>and</source>
        <comment>Boolean AND keyword in desktop search strings. You can add several variants separated by spaces, e.g. retain the English one alongside the translation; keywords are not case sensitive. Make sure there is no conflict with the OR keyword.</comment>
        <translation type="vanished">and и</translation>
    </message>
    <message>
        <source>or</source>
        <comment>Boolean OR keyword in desktop search strings. You can add several variants separated by spaces, e.g. retain the English one alongside the translation; keywords are not case sensitive. Make sure there is no conflict with the AND keyword.</comment>
        <translation type="vanished">or или</translation>
    </message>
    <message>
        <source>Nepomuk Resource Class Generator</source>
        <translation type="vanished">Генератор классов ресурсов Nepomuk</translation>
    </message>
    <message>
        <source>(c) 2006-2009, Sebastian Trüg</source>
        <translation type="vanished">© Sebastian Trüg, 2006-2009</translation>
    </message>
    <message>
        <source>Sebastian Trüg</source>
        <translation type="vanished">Sebastian Trüg</translation>
    </message>
    <message>
        <source>Maintainer</source>
        <translation type="vanished">Сопровождающий</translation>
    </message>
    <message>
        <source>Tobias Koenig</source>
        <translation type="vanished">Tobias Koenig</translation>
    </message>
    <message>
        <source>Major cleanup - Personal hero of maintainer</source>
        <translation type="vanished">Подчистка кода; личный герой сопровождающего</translation>
    </message>
    <message>
        <source>Verbose output debugging mode.</source>
        <translation type="vanished">Подробный вывод для отладки.</translation>
    </message>
    <message>
        <source>Generate simple and fast wrapper classes not based on Nepomuk::Resource which do not provide any data integrity checking</source>
        <translation type="vanished">Генерация компактных и быстрых классов, не базирующихся на Nepomuk::Resource, который не обеспечивает проверки целостности данных.</translation>
    </message>
    <message>
        <source>Actually generate the code.</source>
        <translation type="vanished">Генерация кода.</translation>
    </message>
    <message>
        <source>List all includes (deprecated).</source>
        <translation type="vanished">Список всех включаемых файлов (устаревшее).</translation>
    </message>
    <message>
        <source>List all header files that will be generated via the --writeall command.</source>
        <translation type="vanished">Список всех включаемых файлов, генерируемых командой --writeall.</translation>
    </message>
    <message>
        <source>List all source files that will be generated via the --writeall command.</source>
        <translation type="vanished">Список всех файлов кода, генерируемых командой --writeall.</translation>
    </message>
    <message>
        <source>The ontology files containing the ontologies to be generated, a space separated list (deprecated: use arguments instead.)</source>
        <translation type="vanished">Файл онтологий, для которых нужно сгенерировать онтологии. Файлы указываются в виде разделённого пробелами списка (устаревшее, вместо этого используйте отдельные параметры командной строки).</translation>
    </message>
    <message>
        <source>Include path prefix (deprecated)</source>
        <translation type="vanished">Префикс пути к заголовочным файлам (устаревшее)</translation>
    </message>
    <message>
        <source>Specify the target folder to store generated files into.</source>
        <translation type="vanished">Папка для генерируемых файлов.</translation>
    </message>
    <message>
        <source>Templates to be used (deprecated).</source>
        <translation type="vanished">Используемые шаблоны (устаревшее).</translation>
    </message>
    <message>
        <source>Optionally specify the classes to be generated. Use option multiple times (defaults to all classes)</source>
        <translation type="vanished">Необязательное указание генерируемых классов (по умолчанию — все классы). Этот ключ можно использовать несколько раз для указания нескольких классов.</translation>
    </message>
    <message>
        <source>Serialization used in the ontology files. Will default to primitive file extension detection.</source>
        <translation type="vanished">Используемый тип сериализации в файлах онтологий. По умолчанию определяется по расширению файла.</translation>
    </message>
    <message>
        <source>Set the used visibility in case the classes are to be used in public API. &lt;visibility-name&gt; will be used to construct the export macro name and the export header. By default classes will not be exported.</source>
        <translation type="vanished">Видимость классов для публичного API. Для генерации экспортирующего заголовочного файла и имён макросов используется &lt;visibility-name&gt;. По умолчанию классы не экспортируются.</translation>
    </message>
    <message>
        <source>The ontology files containing the ontologies to be generated.</source>
        <translation type="vanished">Файлы онтологий для генерируемой онтологии.</translation>
    </message>
    <message>
        <source>Change Tags</source>
        <comment>@title:window</comment>
        <translation type="vanished">Изменение меток</translation>
    </message>
    <message>
        <source>Add Tags</source>
        <comment>@title:window</comment>
        <translation type="vanished">Добавление меток</translation>
    </message>
    <message>
        <source>Configure which tags should be applied.</source>
        <comment>@label:textbox</comment>
        <translation type="vanished">Выберите метки для объектов.</translation>
    </message>
    <message>
        <source>Create new tag:</source>
        <comment>@label</comment>
        <translation type="vanished">Новая метка:</translation>
    </message>
    <message>
        <source>Delete tag</source>
        <comment>@info</comment>
        <translation type="vanished">Удалить метку</translation>
    </message>
    <message>
        <source>Should the tag &lt;resource&gt;%1&lt;/resource&gt; really be deleted for all files?</source>
        <comment>@info</comment>
        <translation type="vanished">Убрать метку &lt;resource&gt;%1&lt;/resource&gt; со всех файлов?</translation>
    </message>
    <message>
        <source>Delete tag</source>
        <comment>@title</comment>
        <translation type="vanished">Удаление метки</translation>
    </message>
    <message>
        <source>Delete</source>
        <comment>@action:button</comment>
        <translation type="vanished">Удалить</translation>
    </message>
    <message>
        <source>Cancel</source>
        <comment>@action:button</comment>
        <translation type="vanished">Отмена</translation>
    </message>
    <message>
        <source>Changing annotations</source>
        <translation type="vanished">Изменение аннотаций</translation>
    </message>
    <message>
        <source>Show all tags...</source>
        <comment>@label</comment>
        <translation type="vanished">Показать все метки...</translation>
    </message>
    <message>
        <source>Add Tags...</source>
        <comment>@label</comment>
        <translation type="vanished">Добавить...</translation>
    </message>
    <message>
        <source>Change...</source>
        <comment>@label</comment>
        <translation type="vanished">Изменить...</translation>
    </message>
    <message>
        <source>Anytime</source>
        <comment>referring to a filter on the modification and usage date of files/resources</comment>
        <translation type="vanished">Дата не важна</translation>
    </message>
    <message>
        <source>Today</source>
        <comment>referring to a filter on the modification and usage date of files/resources</comment>
        <translation type="vanished">Сегодня</translation>
    </message>
    <message>
        <source>Yesterday</source>
        <comment>referring to a filter on the modification and usage date of files/resources</comment>
        <translation type="vanished">Вчера</translation>
    </message>
    <message>
        <source>This Week</source>
        <comment>referring to a filter on the modification and usage date of files/resources</comment>
        <translation type="vanished">На этой неделе</translation>
    </message>
    <message>
        <source>Last Week</source>
        <comment>referring to a filter on the modification and usage date of files/resources</comment>
        <translation type="vanished">На прошлой неделе</translation>
    </message>
    <message>
        <source>This Month</source>
        <comment>referring to a filter on the modification and usage date of files/resources</comment>
        <translation type="vanished">В этом месяце</translation>
    </message>
    <message>
        <source>Last Month</source>
        <comment>referring to a filter on the modification and usage date of files/resources</comment>
        <translation type="vanished">В прошлом месяце</translation>
    </message>
    <message>
        <source>This Year</source>
        <comment>referring to a filter on the modification and usage date of files/resources</comment>
        <translation type="vanished">В этом году</translation>
    </message>
    <message>
        <source>Last Year</source>
        <comment>referring to a filter on the modification and usage date of files/resources</comment>
        <translation type="vanished">В прошлом году</translation>
    </message>
    <message>
        <source>Custom...</source>
        <comment>referring to a filter on the modification and usage date of files/resources that will open a dialog to choose a date range</comment>
        <translation type="vanished">Другая дата...</translation>
    </message>
    <message>
        <source>This Week</source>
        <translation type="vanished">На этой неделе</translation>
    </message>
    <message>
        <source>This Month</source>
        <translation type="vanished">В этом месяце</translation>
    </message>
    <message>
        <source>Anytime</source>
        <translation type="vanished">В любое время</translation>
    </message>
    <message>
        <source>Before</source>
        <translation type="vanished">До</translation>
    </message>
    <message>
        <source>After</source>
        <translation type="vanished">После</translation>
    </message>
    <message>
        <source>More...</source>
        <comment>@option:check An item in a list of resources that allows to query for more resources to put in the list</comment>
        <translation type="vanished">Дополнительно...</translation>
    </message>
    <message>
        <source>Documents</source>
        <comment>@option:check A filter on file type</comment>
        <translation type="vanished">Документы</translation>
    </message>
    <message>
        <source>Audio</source>
        <comment>@option:check A filter on file type - audio files</comment>
        <translation type="vanished">Аудиофайлы</translation>
    </message>
    <message>
        <source>Video</source>
        <comment>@option:check A filter on file type - media video</comment>
        <translation type="vanished">Видеофайлы</translation>
    </message>
    <message>
        <source>Images</source>
        <comment>@option:check A filter on file type</comment>
        <translation type="vanished">Изображения</translation>
    </message>
    <message>
        <source>No priority</source>
        <comment>@option:radio A filter on prioritizing/sorting a selection of resources</comment>
        <translation type="vanished">Без приоритета</translation>
    </message>
    <message>
        <source>Last modified</source>
        <comment>@option:radio A filter on prioritizing/sorting a selection of resources</comment>
        <translation type="vanished">Последние изменённые</translation>
    </message>
    <message>
        <source>Most important</source>
        <comment>@option:radio A filter on prioritizing/sorting a selection of resources</comment>
        <translation type="vanished">Наиболее важные</translation>
    </message>
    <message>
        <source>Never opened</source>
        <comment>@option:radio A filter on prioritizing/sorting a selection of resources</comment>
        <translation type="vanished">Ни разу не открытые</translation>
    </message>
    <message>
        <source>Any Rating</source>
        <comment>@option:radio A filter on the rating of a resource</comment>
        <translation type="vanished">Оценка не важна</translation>
    </message>
    <message>
        <source>1 or more</source>
        <comment>@option:radio A filter on the rating of a resource</comment>
        <translation type="vanished">1 и выше</translation>
    </message>
    <message>
        <source>2 or more</source>
        <comment>@option:radio A filter on the rating of a resource</comment>
        <translation type="vanished">2 и выше</translation>
    </message>
    <message>
        <source>3 or more</source>
        <comment>@option:radio A filter on the rating of a resource</comment>
        <translation type="vanished">3 и выше</translation>
    </message>
    <message>
        <source>4 or more</source>
        <comment>@option:radio A filter on the rating of a resource</comment>
        <translation type="vanished">4 и выше</translation>
    </message>
    <message>
        <source>Max Rating</source>
        <comment>@option:radio A filter on the rating of a resource</comment>
        <translation type="vanished">Максимальная оценка</translation>
    </message>
    <message>
        <source>Miscellaneous</source>
        <comment>@title KCategorizedSortFilterProxyModel grouping for all Nepomukj resources that are of type rdfs:Resource</comment>
        <translation type="vanished">Разное</translation>
    </message>
    <message>
        <source>Resource</source>
        <comment>@title:column The Nepomuk resource label and icon</comment>
        <translation type="vanished">Источник</translation>
    </message>
    <message>
        <source>Resource Type</source>
        <comment>@title:column The Nepomuk resource&apos;s RDF type</comment>
        <translation type="vanished">Тип источника</translation>
    </message>
    <message>
        <source>Enter Search Terms...</source>
        <translation type="vanished">Введите текст для поиска...</translation>
    </message>
    <message>
        <source>Contacts</source>
        <comment>@option:check A filter on resource type</comment>
        <translation type="vanished">Контакты</translation>
    </message>
    <message>
        <source>Emails</source>
        <comment>@option:check A filter on resource type</comment>
        <translation type="vanished">Адреса электронной почты</translation>
    </message>
    <message>
        <source>Tasks</source>
        <comment>@option:check A filter on resource type</comment>
        <translation type="vanished">Задачи</translation>
    </message>
    <message>
        <source>Tags</source>
        <comment>@option:check A filter on resource type</comment>
        <translation type="vanished">Метки</translation>
    </message>
    <message>
        <source>Files</source>
        <comment>@option:check Do filter on type - show only files</comment>
        <translation type="vanished">Файлы</translation>
    </message>
    <message>
        <source>Other</source>
        <comment>@option:check Do filter on type - show everything but files</comment>
        <translation type="vanished">Другое</translation>
    </message>
    <message>
        <source>ThreadWeaver Jobs Examples</source>
        <translation type="vanished">Примеры заданий ThreadWeaver</translation>
    </message>
    <message>
        <source>The program executes 100 jobs in 4 threads. Each job waits for a random number of milliseconds between 1 and 1000.</source>
        <translation type="vanished">Программа запускает 100 заданий в 4 потоках. Каждое задание находится в ожидании случайный период от 1 до 1000 миллисекунд.</translation>
    </message>
    <message>
        <source>Check to see logging information about thread activity. Watch the console output to see the log information.</source>
        <translation type="vanished">Установите флажок для вывода информации по активности программных потоков на консоль.</translation>
    </message>
    <message>
        <source>Log thread activity</source>
        <translation type="vanished">Вывод активности потоков</translation>
    </message>
    <message>
        <source>Displays Thread Activity</source>
        <translation type="vanished">Показывает активность потоков</translation>
    </message>
    <message>
        <source>Start</source>
        <translation type="vanished">Запуск</translation>
    </message>
    <message>
        <source>GUI based example for the Weaver Thread Manager</source>
        <translation type="vanished">Пример использования ThreadWeaver с графическим интерфейсом</translation>
    </message>
    <message>
        <source>Remaining number of jobs:</source>
        <translation type="vanished">Оставшееся число заданий:</translation>
    </message>
    <message>
        <source>What time is it? Click to update.</source>
        <translation type="vanished">Сколько времени? Нажмите для обновления.</translation>
    </message>
    <message>
        <source>&lt;html&gt;&lt;head&gt;&lt;meta name=&quot;qrichtext&quot; content=&quot;1&quot; /&gt;&lt;/head&gt;&lt;body style=&quot; white-space: pre-wrap; font-family:Sans Serif; font-weight:400; font-style:normal; text-decoration:none;&quot;&gt;&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;(do not know yet)&lt;/p&gt;&lt;/body&gt;&lt;/html&gt;</source>
        <translation type="vanished">&lt;html&gt;&lt;head&gt;&lt;meta name=&quot;qrichtext&quot; content=&quot;1&quot; /&gt;&lt;/head&gt;&lt;body style=&quot; white-space: pre-wrap; font-family:Sans Serif; font-weight:400; font-style:normal; text-decoration:none;&quot;&gt;&lt;p style=&quot; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;&quot;&gt;(нет данных)&lt;/p&gt;&lt;/body&gt;&lt;/html&gt;</translation>
    </message>
    <message>
        <source>Select Files...</source>
        <translation type="vanished">Выбор файлов...</translation>
    </message>
    <message>
        <source>Cancel</source>
        <translation type="vanished">Отмена</translation>
    </message>
    <message>
        <source>Suspend</source>
        <translation type="vanished">Приостановить</translation>
    </message>
    <message>
        <source>Anonymous</source>
        <translation type="vanished">Анонимно</translation>
    </message>
</context>
</TS>
