import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Window 2.1
import org.kde.kirigami 2.4 as Kirigami
import QtTest 1.0
import "../tests"

TestCase {
    id: testCase

    Kirigami.MnemonicData.enabled: true
    Kirigami.MnemonicData.label: "设置(&S)"

    width: 400
    height: 400

    function test_press() {
        compare(Kirigami.MnemonicData.richTextLabel, "设置")
    }
}
