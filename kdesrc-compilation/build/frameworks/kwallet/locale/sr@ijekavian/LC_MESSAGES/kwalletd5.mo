��    Z      �     �      �     �     �     �  !   �  .     �   ;  �  �  K  �
     �  }  
    �  Y   �  �      �   �  �   e  �   �  �   �  �   L  �   �  A   �  �   �  �   a  k   =  7   �  A   �  �   #  Y   �  �   )  �   �  �   �  �   �     =     K     W  3   e      �      �     �     �     �                      A     W  9   k  -   �  6   �  �   
     �     �     �     �  �   �     �      �      �      �      �      !     !     !     6!  2   G!  )   z!     �!  v   �!     !"  D   <"  ^   �"  T   �"  y   5#     �#  5  �#  g   �$     c%  �  r%  Q   '     _'  !   z'  )   �'     �'  �  �'     Z)    k)  $   �*  C   �*     �*     �*    +      -  7   3-     k-  +   w-  =   �-  �   �-  �  |.  |  t1    �4  �  q6  �  @:  �   8<  4  �<    �=  �   ?    �?  �   A  �   �A  �   �B  ^   �C  �   -D  k  -E  �   �F  d   &G  T   �G  �   �G  l   �H  �   GI  �  >J  m  �K  �   @M     �M     �M     N  N   )N  O   xN  >   �N     O     "O  '   ;O     cO     �O     �O  '   �O  0   �O  y   �O  �   wP  o   Q  �   wQ     vR     �R     �R  -   �R  [  �R     XT     nT  A   ~T     �T     �T     �T  %   �T  ,   U  '   LU  U   tU  N   �U     V  �   5V  (   W  ~   7W     �W  9   �W  �   X  -   �X  5  �X  �   .[     �[  �  \  �   �^  /   |_  >   �_  B   �_     .`  �  H`  "   �b  �  �b  6   �d  x   e     e  4   �e             4          P   .   >   K      3           L          #   *   A      Z   /   M   B   +       2   "   !   J   :   ;             R   
   G       S   T           U          1               '                           W   Q       	         D   (      E   8   O   -       I                           7      F             6           =   N          5       )             V       C   0       &       X      ?           ,   %      9                     <   @   $   Y   H        &Advanced setup &Basic setup (recommended) &Deny (C) 2002-2013, The KDE Developers <b>%1</b> has requested to open a wallet (%2). <html><head/><body><p><span style=" font-weight:600;">NOTE:</span> this list shows only "ultimate-level" trusted keys</p></body></html> <html><head/><body><p>The GPG-based wallet use a GPG encryption key to securely encrypt data on disk. The key must be available when decrypting is needed or your wallet will not be accessible. For example, if you choose a SmartCard-based encryption key, the GPG system will prompt you to enter it and its associated PIN when attempting to open the wallet. <span style=" font-weight:600;">NOTE:</span> this list contains only "ultimate-level" trusted keys.</p></body></html> <html><head/><body><p>The KDE Wallet system stores your data in a <span style=" font-style:italic;">wallet</span> file on your local hard disk. The data is only written in the encrypted form of your choice - blowfish algorithm with your password as the key or using a GPG encryption key. When a wallet is opened, the wallet manager application will launch and display an icon in the system tray. You can use this application to manage all of your wallets. It even permits you to drag wallets and wallet contents, allowing you to easily copy a wallet to a remote system.</p></body></html> <html><head/><body><p>The application '<span style=" font-weight:600;">%1</span>' has requested to open the KDE wallet. This is used to store sensitive data in a secure fashion. Please choose the new wallet's type below or click cancel to deny the application's request.</p></body></html> <html><head/><body><p>Various applications may attempt to use the KDE wallet to store passwords or other information such as web form data and cookies. If you would like these applications to use the wallet, you must enable it now and choose method for its encryption.</p><p>GPG method is more secure, but you must have configured at least one encrypting key on your system.</p><p>If you choose the classic format, be warned that the password you choose <span style=" font-style:italic;">cannot</span> be recovered if it is lost, and will allow anyone who knows it to obtain all the information contained in the wallet.</p></body></html> <qt>Encryption error while attempting to save the wallet <b>%1</b>. Error code is <b>%2 (%3)</b>. Please fix your system configuration, then try again. This error may occur if you are not using a full trust GPG key. Please ensure you have the secret key for the key you are using.</qt> <qt>Error opening the wallet '<b>%1</b>'. Please try again.<br />(Error code %2: %3)</qt> <qt>Error when attempting to decrypt the wallet <b>%1</b> using GPG. If you're using a SmartCard, please ensure it's inserted then try again.<br><br>GPG error was <b>%2</b></qt> <qt>Error when attempting to initialize OpenPGP while attempting to open the wallet <b>%1</b>. Error code is <b>%2</b>. Please fix your system configuration, then try again.</qt> <qt>Error when attempting to initialize OpenPGP while attempting to open the wallet <b>%1</b>. Please fix your system configuration, then try again.</qt> <qt>Error when attempting to initialize OpenPGP while attempting to save the wallet <b>%1</b>. Error code is <b>%2</b>. Please fix your system configuration, then try again.</qt> <qt>Error when attempting to initialize OpenPGP while attempting to save the wallet <b>%1</b>. Please fix your system configuration, then try again.</qt> <qt>Error when attempting to open the wallet <b>%1</b>. The wallet was encrypted using the GPG Key ID <b>%2</b> but this key was not found on your system.</qt> <qt>File handling error while attempting to save the wallet <b>%1</b>. Error was <b>%2</b>. Please fix your system configuration, then try again.</qt> <qt>KDE has requested access to the open wallet '<b>%1</b>'.</qt> <qt>KDE has requested to create a new wallet named '<b>%1</b>'. Please choose a password for this wallet, or cancel to deny the application's request.</qt> <qt>KDE has requested to create a new wallet named '<b>%1</b>'. This is used to store sensitive data in a secure fashion. Please choose the new wallet's type below or click cancel to deny the application's request.</qt> <qt>KDE has requested to open the wallet '<b>%1</b>'. Please enter the password for this wallet below.</qt> <qt>Password is empty.  <b>(WARNING: Insecure)</b></qt> <qt>Please choose a new password for the wallet '<b>%1</b>'.</qt> <qt>The <b>%1</b> wallet is encrypted using GPG key <b>%2</b>. Please use <b>GPG</b> tools (such as <b>kleopatra</b>) to change the passphrase associated to that key.</qt> <qt>The application '<b>%1</b>' has requested access to the open wallet '<b>%2</b>'.</qt> <qt>The application '<b>%1</b>' has requested to create a new wallet named '<b>%2</b>'. Please choose a password for this wallet, or cancel to deny the application's request.</qt> <qt>The application '<b>%1</b>' has requested to create a new wallet named '<b>%2</b>'. This is used to store sensitive data in a secure fashion. Please choose the new wallet's type below or click cancel to deny the application's request.</qt> <qt>The application '<b>%1</b>' has requested to open the KDE wallet. This is used to store sensitive data in a secure fashion. Please enter a password to use with this wallet or click cancel to deny the application's request.</qt> <qt>The application '<b>%1</b>' has requested to open the wallet '<b>%2</b>'. Please enter the password for this wallet below.</qt> Allow &Always Allow &Once Already open. An application has requested to open a wallet (%1). Automatically close idle wallets Classic, blowfish encrypted file Corrupt file? D-Bus Interface Decryption error. Deny &Forever E-Mail EMAIL OF TRANSLATORSYour emails Enter a new password: Error opening file. Error re-encrypting the wallet. Password was not changed. Error reopening the wallet. Data may be lost. Error validating wallet integrity. Possibly corrupted. Failed to sync wallet <b>%1</b> to disk. Error codes are:
RC <b>%2</b>
SF <b>%3</b>. Please file a BUG report using this information to bugs.kde.org Former Maintainer Former maintainer George Staikos KDE Wallet Service KDE has requested to open the wallet. This is used to store sensitive data in a secure fashion. Please enter a password to use with this wallet or click cancel to deny the application's request. KWallet Key-ID Maintainer, GPG backend support Michael Leupold NAME OF TRANSLATORSYour names Name Not a wallet file. Passwords do not match. Passwords match. Please select the signing key from the list below: Read error - possibly incorrect password. Retry Seems that your system has no keys suitable for encryption. Please set-up at least one encryption key, then try again. Select encryption GPG key: Store network passwords and local passwords in separate wallet files Text of a button for switching to the (unnamed) application requesting a passwordSwitch there Text of a button for switching to the application requesting a passwordSwitch to %1 The GpgME library failed to initialize for the OpenPGP protocol. Please check your system's configuration then try again. The KDE Wallet System The KDE Wallet system allows you to control the level of security of your personal data.  Some of these settings do impact usability.  While the default settings are generally acceptable for most users, you may wish to change some of them.  You may further tune these settings from the KWallet control module. There have been repeated failed attempts to gain access to a wallet. An application may be misbehaving. Thiago Maceira Unable to locate at least one <b>encrypting GPG key</b>. KDE Wallet needs such <b>encrypting key</b> to securely store passwords or other sensitive data on disk. If you still want to setup a GPG-based wallet, then cancel this wizard, set-up an <b>encrypting GPG key</b>, then retry this assistant. Otherwise, you may still click back, then choose a classic, blowfish encrypted file format on the previous page. Unable to open wallet. The wallet must be opened in order to change the password. Unknown encryption scheme. Unsupported file format revision. Use GPG encryption, for better protection Valentin Rusu Various applications may attempt to use the KDE wallet to store passwords or other information such as web form data and cookies.  If you would like these applications to use the wallet, you must enable it now and choose a password.  The password you choose <i>cannot</i> be recovered if it is lost, and will allow anyone who knows it to obtain all the information contained in the wallet. Verify password: Welcome to KWallet, the KDE Wallet System.  KWallet allows you to store your passwords and other personal information on disk in an encrypted file, preventing others from viewing the information.  This wizard will tell you about KWallet and help you configure it for the first time. What kind of encryption do you wish? Yes, I wish to use the KDE wallet to store my personal information. kwalletd kwalletd GPG backend Project-Id-Version: kwalletd5
Report-Msgid-Bugs-To: https://bugs.kde.org
PO-Revision-Date: 2017-09-28 17:58+0200
Last-Translator: Chusslove Illich <caslav.ilic@gmx.net>
Language-Team: Serbian <kde-i18n-sr@kde.org>
Language: sr@ijekavian
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=4; plural=n==1 ? 3 : n%10==1 && n%100!=11 ? 0 : n%10>=2 && n%10<=4 && (n%100<10 || n%100>=20) ? 1 : 2;
X-Accelerator-Marker: &
X-Text-Markup: kde4
X-Environment: kde
 &Напредна постава &Основна постава (препоручено) &Одбиј © 2002–2013, КДЕ програмери <b>%1</b> тражи да отвори новчаник (%2). <html><p><b>Напомена:</b> Овај списак приказује само кључеве безусловне поузданости.</p></html> <html><p>Новчаник на основи ГПГ‑а користи ГПГ шифровање за безбедно одлагање података на диск. Кључ мора бити доступан у тренутку дешифровања, иначе се новчанику  не може приступити. На пример, ако изаберете кључ за шифровање на основу смарт-картице, при покушају отварања новчаника ГПГ систем ће вам затражити да је убаците и унесете њен ПИН. <b>Напомена:</b> Овај списак садржи само кључеве безусловне поузданости.</p></html> <html><p>КДЕ‑ов систем новчаника складишти ваше податке у фајл <i>новчаника</i> на локалном диску. Подаци се уписују само у шифрованом облику по избору — алгоритмом блоуфиш са вашом лозинком као кључем или ГПГ кључем за шифровање. При отварању новчаника, покренуће се програм менаџера новчаника и приказати иконицу у системској касети. Овим програмом можете управљати свим својим новчаницима. Можете чак и превлачити новчанике и њихов садржај, и тако их лако копирати на удаљени систем.</p></html> <html><p>Програм <b>%1</b> затражио је да отвори КДЕ новчаник. Намена овога је безбедно складиштење осетљивих података. Изаберите испод тип новог новчаника, или кликните на <i>Одбиј</i> да одбијете захтев програма.</p></html> <html><p>Разни програми могу покушати да употребе КДЕ новчаник за складиштење лозинки и других података, попут веб формулара и колачића. Ако желите да ови програми користе новчаник, сада га морате активирати и изабрати метод његовог шифровања.</p><p>ГПГ је безбеднији метод, али за њега на систему морате имати подешен бар један кључ за шифровање.</p><p>Ако пак изаберете класични метод, имајте на уму да лозинку <i>не можете</i> повратити ако је заборавите, као и да ће свако ко је буде знао моћи да прибави све податке садржане у новчанику.</p></html> <qt>Грешка у шифровању при покушају уписивања новчаника <b>%1</b>. Ко̂д грешке је <b>%2 (%3)</b>. Поправите поставу система, па покушајте поново. Узрок ове грешке може бити то што ГПГ кључ који користите није потпуне поузданости. Побрините се да имате тајни кључ за кључ који користите.</qt> <qt>Грешка при отварању новчаника <b>%1</b>. Покушајте поново.<br />(Ко̂д грешке %2: %3)</qt> <qt><p>Грешка при покушају дешифровања новчаника <b>%1</b> помоћу ГПГ‑а. Ако користите смарт-картицу, уверите се да је убачена па покушајте поново.</p><p>Грешка ГПГ‑а: <b>%2</b></p></qt> <qt>Грешка при покушају припремања опенПГП‑а ради отварања новчаника <b>%1</b>. Ко̂д грешке је <b>%2</b>. Поправите поставу система, па покушајте поново.</qt> <qt>Грешка при покушају припремања опенПГП‑а ради отварања новчаника <b>%1</b>. Поправите поставу система, па покушајте поново.</qt> <qt>Грешка при покушају припремања опенПГП‑а ради уписивања новчаника <b>%1</b>. Ко̂д грешке је <b>%2</b>. Поправите поставу система, па покушајте поново.</qt> <qt>Грешка при покушају припремања опенПГП‑а ради уписивања новчаника <b>%1</b>. Поправите поставу система, па покушајте поново.</qt> <qt>Грешка при покушају отварања новчаника <b>%1</b>. Новчаник је шифрован ГПГ кључем ИД‑а <b>%2</b>, али овај кључ није нађен на систему.</qt> <qt>Грешка у руковању фајлом при покушају уписивања новчаника <b>%1</b>. Грешка је <b>%2</b>. Поправите поставу система, па покушајте поново.</qt> <qt>Затражен је приступ отвореном новчанику <b>%1</b>.</qt> <qt>Затражено је стварање новог новчаника по имену <b>%1</b>. Изаберите лозинку за овај новчаник, или кликните на <i>Одбиј</i> да одбијете захтев.</qt> <qt>Затражено је стварање новог новчаника по имену <b>%1</b>. Намена овога је безбедно складиштење осетљивих података. Изаберите испод тип новог новчаника, или кликните на <i>Одбиј</i> да одбијете захтев.</qt> <qt>Затражено је отварање новчаника <b>%1</b>. Унесите испод лозинку новчаника.</qt> <qt>Лозинка је празна.  <b>(УПОЗОРЕЊЕ: није безбједно)</b></qt> <qt>Изаберите нову лозинку за новчаник <b>%1</b>.</qt> <qt>Новчаник <b>%1</b> шифрован је ГПГ кључем <b>%2</b>. Употребите неку ГПГ алатку (попут Клеопатре) да измените лозинку придружену овом кључу.</qt> <qt>Програм <b>%1</b> тражи приступ отвореном новчанику <b>%2</b>.</qt> <qt>Програм <b>%1</b> тражи да направи нови новчаник по имену <b>%2</b>. Изаберите лозинку за овај новчаник, или <i>Одбиј</i> да одбијете захтјев.</qt> <qt>Програм <b>%1</b> затражио је стварање новог новчаника по имену <b>%2</b>. Намена овога је безбедно складиштење осетљивих података. Изаберите испод тип новог новчаника, или кликните на <i>Одбиј</i> да одбијете захтев програма.</qt> <qt>Програм <b>%1</b> тражи да отвори КДЕ новчаник. Намјена овога је безбједно складиштење осетљивих података. Унесите лозинку која припада овом новчанику, или кликните на <i>Одбиј</i> да одбијете захтјев.</qt> <qt>Програм <b>%1</b> тражи да отвори новчаник <b>%2</b>. Унесите испод лозинку новчаника.</qt> Дозволи &увијек Дозволи &једном Већ отворен. Програм је затражио отварање новчаника (%1). Аутоматски затварај некоришћене новчанике Класичан, блоуфишом шифрован фајл Искварен фајл? д‑бус сучеље Грешка у дешифровању. Одбиј &заувијек е‑пошта caslav.ilic@gmx.net Унесите нову лозинку: Грешка при отварању фајла. Грешка при поновном шифровању новчаника. Лозинка није измијењена. Грешка при поновном отварању новчанику. Може бити да су неки подаци изгубљени. Грешка при овјери цјеловитости новчаника. Можда је искварен. Не могу да синхронизујем новчаник <b>%1</b> на диск. Кодови грешака:
RC <b>%2</b>
SF <b>%3</b>. Поднесите извештај о грешци са овим подацима на https://bugs.kde.org . бивши одржавалац бивши одржавалац Џорџ Стајкос КДЕ‑ов сервис новчаника <qt>Затражено је отварање новчаника. Намјена овога је безбједно складиштење осетљивих података. Унесите лозинку која припада овом новчанику, или кликните на <i>Одбиј</i> да одбијете захтјев.</qt> К‑новчаник ИД кључа одржавалац, подршка за ГПГ позадину Михаел Лојполд Часлав Илић име Није фајл новчаника. Лозинке се не поклапају. Лозинке се поклапају. Изаберите кључ за потписивање са доњег списка: Грешка читања — можда је лозинка погрешна. Покушај поново Изгледа да на систему нема кључева погодних за шифровање. Припремите бар један кључ за шифровање, па покушајте поново. ГПГ кључ за шифровање: Складишти мрежне и локалне лозинке у различитим фајловима новчаника Пребаци тамо Пребаци на %1|/|Пребаци на $[аку %1] Библиотека ГПГМЕ не може да припреми протокол опенПГП‑а. Проверите поставу система, па покушајте поново. КДЕ‑ов систем новчаника У КДЕ‑овом систему новчаника можете управљати степеном безбједности личних података. Неке од ових поставки пак утичу на употребљивост. Док су подразумијеване поставке начелно прихватљиве већини корисника, можете жељети да измијените неке. Поставке даље можете штеловати из контролног модула К‑новчаника. Било је више узастопних пропалих захтјева за приступ новчанику. Можда се неки програм лоше понаша. Тијаго Масијеира Нема ниједног <b>ГПГ кључа за шифровање</b>. К‑новчанику треба <b>кључ за шифровање</b> ради безбедног складиштења лозинки и осталих осетљивих података на диску. Ако и даље желите да поставите новчаник на основу ГПГ‑а, напустите овај чаробњак, припремите <b>ГПГ кључ за шифровање</b>, па поново покрените чаробњак. Иначе, вратите се страницу назад у чаробњаку, па изаберите класични шифровани фајл преко блоуфиша. <qt>Не могу да отворим новчаник. Мора бити отворен да би се измијенила лозинка.</qt> Непозната шема шифровања. Неподржана ревизија фајл формата. Шифровање ГПГ‑ом, ради боље заштите Валантен Ризи Разни програми могу покушати да употријебе КДЕ новчаник за складиштење лозинки и других података, попут веб формулара и колачића. Ако желите да ови програми користе новчаник, сада га морате активирати и изабрати лозинку. Изабрану лозинку <i>не можете</i> повратити ако је изгубите, и свако ко је сазна моћи ће да прибави све податке садржане у новчанику. Потврдите лозинку: Добро дошли у К‑новчаник, КДЕ‑ов систем новчаника. К‑новчаником можете складиштити лозинке и друге личне податке у шифровани фајл на диску, тако да их друга лица не могу прибавити. Овај чаробњак ће вам испричати о К‑новчанику и помоћи да га подесите по први пут. Какву врсту шифровања желите? Да, желим да користим КДЕ новчаник за складиштење личних података kwalletd Позадина К‑новчаника за ГПГ 