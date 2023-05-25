��    Y      �     �      �     �     �     �  !   �  .   �  �   +  �  �  K  �
     �  }      �  Y   �  �     �   �  �   i  �     �   �  �   P  �   �  A   �  �   �  �   e  k   A  7   �  A   �  �   '  Y   �  �   -  �   �  �   �  �   �     A     O     [  3   i      �      �     �     �     �                $     E     [  9   o  -   �  6   �  �        �     �     �     �  �   �     �      �      �      �      �      
!     !     "!     :!  2   K!  )   ~!     �!  v   �!     %"  D   @"  ^   �"  T   �"  y   9#     �#  5  �#  g   �$     g%  �  v%  Q   '     c'  !   ~'  )   �'     �'  �  �'     ^)    o)  $   �*  C   �*     �*  ~  +     �,     �,     �,  #   �,  J   �,  �   --  :  �-  �  0  [  �2  �  	4  K  �6  o   �7  �   i8  �   H9  �   �9  �   u:  �   ;  �   �;  �   D<  H   �<  �   $=  (  �=     ?  /   �?  D   �?  �   @  \   �@  �   0A  "   B  )  #C  �   MD     �D     �D     E  E   E  ,   eE  (   �E     �E     �E     �E     �E     F  ?   F     OF      fF  S   �F  N   �F  G   *G  �   rG     H     )H     >H     MH    aH  	   mI     wI  (   �I     �I  (   �I     �I     �I     J     #J  8   6J  4   oJ     �J  �   �J  #   FK  I   jK  
   �K     �K  �   �K     `L  P  tL  ~   �M     DN  �  SN  d   ?P     �P  '   �P  -   �P     Q  �  (Q     �R  ;  �R  $   (T  P   MT     �T             4          P   .   >   K      3           L          #   *   A      Y   /   M   B   +       2   "   !   J   :   ;             R   
   G          T   8       U                          '              1             W   Q       	         D   (      E          -       I                           7      F          O   6           =   N          5       )             V   S   C   0       &       X      ?           ,   %      9                     <   @   $       H        &Advanced setup &Basic setup (recommended) &Deny (C) 2002-2013, The KDE Developers <b>%1</b> has requested to open a wallet (%2). <html><head/><body><p><span style=" font-weight:600;">NOTE:</span> this list shows only &quot;ultimate-level&quot; trusted keys</p></body></html> <html><head/><body><p>The GPG-based wallet use a GPG encryption key to securely encrypt data on disk. The key must be available when decrypting is needed or your wallet will not be accessible. For example, if you choose a SmartCard-based encryption key, the GPG system will prompt you to enter it and its associated PIN when attempting to open the wallet. <span style=" font-weight:600;">NOTE:</span> this list contains only &quot;ultimate-level&quot; trusted keys.</p></body></html> <html><head/><body><p>The KDE Wallet system stores your data in a <span style=" font-style:italic;">wallet</span> file on your local hard disk. The data is only written in the encrypted form of your choice - blowfish algorithm with your password as the key or using a GPG encryption key. When a wallet is opened, the wallet manager application will launch and display an icon in the system tray. You can use this application to manage all of your wallets. It even permits you to drag wallets and wallet contents, allowing you to easily copy a wallet to a remote system.</p></body></html> <html><head/><body><p>The application '<span style=" font-weight:600;">%1</span>' has requested to open the KDE wallet. This is used to store sensitive data in a secure fashion. Please choose the new wallet's type below or click cancel to deny the application's request.</p></body></html> <html><head/><body><p>Various applications may attempt to use the KDE wallet to store passwords or other information such as web form data and cookies. If you would like these applications to use the wallet, you must enable it now and choose method for its encryption.</p><p>GPG method is more secure, but you must have configured at least one encrypting key on your system.</p><p>If you choose the classic format, be warned that the password you choose <span style=" font-style:italic;">cannot</span> be recovered if it is lost, and will allow anyone who knows it to obtain all the information contained in the wallet.</p></body></html> <qt>Encryption error while attempting to save the wallet <b>%1</b>. Error code is <b>%2 (%3)</b>. Please fix your system configuration, then try again. This error may occur if you are not using a full trust GPG key. Please ensure you have the secret key for the key you are using.</qt> <qt>Error opening the wallet '<b>%1</b>'. Please try again.<br />(Error code %2: %3)</qt> <qt>Error when attempting to decrypt the wallet <b>%1</b> using GPG. If you're using a SmartCard, please ensure it's inserted then try again.<br><br>GPG error was <b>%2</b></qt> <qt>Error when attempting to initialize OpenPGP while attempting to open the wallet <b>%1</b>. Error code is <b>%2</b>. Please fix your system configuration, then try again.</qt> <qt>Error when attempting to initialize OpenPGP while attempting to open the wallet <b>%1</b>. Please fix your system configuration, then try again.</qt> <qt>Error when attempting to initialize OpenPGP while attempting to save the wallet <b>%1</b>. Error code is <b>%2</b>. Please fix your system configuration, then try again.</qt> <qt>Error when attempting to initialize OpenPGP while attempting to save the wallet <b>%1</b>. Please fix your system configuration, then try again.</qt> <qt>Error when attempting to open the wallet <b>%1</b>. The wallet was encrypted using the GPG Key ID <b>%2</b> but this key was not found on your system.</qt> <qt>File handling error while attempting to save the wallet <b>%1</b>. Error was <b>%2</b>. Please fix your system configuration, then try again.</qt> <qt>KDE has requested access to the open wallet '<b>%1</b>'.</qt> <qt>KDE has requested to create a new wallet named '<b>%1</b>'. Please choose a password for this wallet, or cancel to deny the application's request.</qt> <qt>KDE has requested to create a new wallet named '<b>%1</b>'. This is used to store sensitive data in a secure fashion. Please choose the new wallet's type below or click cancel to deny the application's request.</qt> <qt>KDE has requested to open the wallet '<b>%1</b>'. Please enter the password for this wallet below.</qt> <qt>Password is empty.  <b>(WARNING: Insecure)</b></qt> <qt>Please choose a new password for the wallet '<b>%1</b>'.</qt> <qt>The <b>%1</b> wallet is encrypted using GPG key <b>%2</b>. Please use <b>GPG</b> tools (such as <b>kleopatra</b>) to change the passphrase associated to that key.</qt> <qt>The application '<b>%1</b>' has requested access to the open wallet '<b>%2</b>'.</qt> <qt>The application '<b>%1</b>' has requested to create a new wallet named '<b>%2</b>'. Please choose a password for this wallet, or cancel to deny the application's request.</qt> <qt>The application '<b>%1</b>' has requested to create a new wallet named '<b>%2</b>'. This is used to store sensitive data in a secure fashion. Please choose the new wallet's type below or click cancel to deny the application's request.</qt> <qt>The application '<b>%1</b>' has requested to open the KDE wallet. This is used to store sensitive data in a secure fashion. Please enter a password to use with this wallet or click cancel to deny the application's request.</qt> <qt>The application '<b>%1</b>' has requested to open the wallet '<b>%2</b>'. Please enter the password for this wallet below.</qt> Allow &Always Allow &Once Already open. An application has requested to open a wallet (%1). Automatically close idle wallets Classic, blowfish encrypted file Corrupt file? D-Bus Interface Decryption error. Deny &Forever E-Mail EMAIL OF TRANSLATORSYour emails Enter a new password: Error opening file. Error re-encrypting the wallet. Password was not changed. Error reopening the wallet. Data may be lost. Error validating wallet integrity. Possibly corrupted. Failed to sync wallet <b>%1</b> to disk. Error codes are:
RC <b>%2</b>
SF <b>%3</b>. Please file a BUG report using this information to bugs.kde.org Former Maintainer Former maintainer George Staikos KDE Wallet Service KDE has requested to open the wallet. This is used to store sensitive data in a secure fashion. Please enter a password to use with this wallet or click cancel to deny the application's request. KWallet Key-ID Maintainer, GPG backend support Michael Leupold NAME OF TRANSLATORSYour names Name Not a wallet file. Passwords do not match. Passwords match. Please select the signing key from the list below: Read error - possibly incorrect password. Retry Seems that your system has no keys suitable for encryption. Please set-up at least one encryption key, then try again. Select encryption GPG key: Store network passwords and local passwords in separate wallet files Text of a button for switching to the (unnamed) application requesting a passwordSwitch there Text of a button for switching to the application requesting a passwordSwitch to %1 The GpgME library failed to initialize for the OpenPGP protocol. Please check your system's configuration then try again. The KDE Wallet System The KDE Wallet system allows you to control the level of security of your personal data.  Some of these settings do impact usability.  While the default settings are generally acceptable for most users, you may wish to change some of them.  You may further tune these settings from the KWallet control module. There have been repeated failed attempts to gain access to a wallet. An application may be misbehaving. Thiago Maceira Unable to locate at least one <b>encrypting GPG key</b>. KDE Wallet needs such <b>encrypting key</b> to securely store passwords or other sensitive data on disk. If you still want to setup a GPG-based wallet, then cancel this wizard, set-up an <b>encrypting GPG key</b>, then retry this assistant. Otherwise, you may still click back, then choose a classic, blowfish encrypted file format on the previous page. Unable to open wallet. The wallet must be opened in order to change the password. Unknown encryption scheme. Unsupported file format revision. Use GPG encryption, for better protection Valentin Rusu Various applications may attempt to use the KDE wallet to store passwords or other information such as web form data and cookies.  If you would like these applications to use the wallet, you must enable it now and choose a password.  The password you choose <i>cannot</i> be recovered if it is lost, and will allow anyone who knows it to obtain all the information contained in the wallet. Verify password: Welcome to KWallet, the KDE Wallet System.  KWallet allows you to store your passwords and other personal information on disk in an encrypted file, preventing others from viewing the information.  This wizard will tell you about KWallet and help you configure it for the first time. What kind of encryption do you wish? Yes, I wish to use the KDE wallet to store my personal information. kwalletd GPG backend Project-Id-Version: kwalletd
Report-Msgid-Bugs-To: https://bugs.kde.org
PO-Revision-Date: 2023-01-21 15:32+0300
Last-Translator: Emir SARI <emir_sari@icloud.com>
Language-Team: Turkish <kde-l10n-tr@kde.org>
Language: tr
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=2; plural=(n > 1);
X-Generator: Lokalize 22.12.1
 &Gelişmiş ayarlar &Temel kurulum (önerilen) &Reddet (C) 2002-2013, KDE Geliştiricileri <b>%1</b> uygulaması bu cüzdana erişerek açma isteğinde bulundu (%2). <html><head/><body><p><span style=" font-weight:600;">NOT:</span> Bu liste yalnızca &quot;en üst düzeyde&quot; güvenilen anahtarları gösterir</p></body></html> <html><head/><body><p>GPG tabanlı cüzdan, veriyi güvenle şifreleyebilmek için bi GPG şifreleme anahtarı kullanır. Anahtar, şifre çözme işlemi gerektiğinde veya cüzdanınız erişilemez olduğunda kullanılabilir olmalıdır. Örneğin bir Akıllı Kart tabanlı şifreleme anahtarı seçerseniz GPG sistemi cüzdanı açmaya çalışırken size bunu ve ilişkili PIN numarasını girmenizi isteyecektir. <span style=" font-weight:600;">NOT:</span> Bu listede yalnızca &quot;en üst düzeyde&quot; güvenilen anahtarlar gösterilmektedir.</p></body></html> <html><head/><body><p>KDE Cüzdan sistemi, verilerinizi yerel sabit diskinizdeki <span style=" font-style:italic;">cüzdanlarda</span> tutar. Veriler yalnızca seçtiğiniz şifrelenmiş bir şekilde, blowfish algoritmasında parolanız anahtar olarak kullanılarak veya GPG şifreleme anahtarı kullanılarak depolanır. Bir cüzdan açıldığı zaman cüzdan yöneticisi sistem panelinde bir simge görüntüler. Bu uygulamayı, cüzdanlarınıza erişmek için kullanabilirsiniz. Aynı program cüzdanları ve cüzdan içeriklerini sürükleyip bırakmanızı da sağlayabilir. Böylece cüzdanları uzaktaki bir sisteme kolayca gönderebilirsiniz.</p></body></html> <html><head/><body><p>'<span style=" font-weight:600;">%1</span>' uygulaması KDE cüzdan uygulamasının açılmasını istiyor. Bu işlem hassas verilerin güvenli bir şekilde depolanmasını sağlar. Lütfen bu yeni cüzdan için bir tür seçin veya uygulamanın isteğini geri çevirmek için İptal düğmesine tıklayın.</p></body></html> <html><head/><body><p>Çeşitli uygulamalar, parolalarını veya web formu verileri veya çerez gibi bilgilerini saklamak için KDE Cüzdan'ı kullanmaya teşebbüs edebilir. Eğer bu uygulamaların cüzdanı kullanmasını istiyorsanız, cüzdanı etkinleştirmeli ve şifrelemesi için bir yöntem seçmelisiniz.</p><p>GPG yöntemi daha güvenli olmasının yanında, sisteminizde en az bir adet yapılandırılmış şifreleme anahtarı gerektirir.</p><p>Eğer klasik biçimi seçerseniz, parolanız kaybedildiğinde <span style=" font-style:italic;">kurtarılamaz</span> ve parolayı bilen herkes cüzdan içerisinde saklı tüm bilgileri elde edebilir.</p></body></html> <qt><b>%1</b> cüzdanı kaydedilirken şifreleme hatası. Hata kodu <b>%2 (%3)</b>. Lütfen sistem yapılandırmanızı onarın ve yeniden deneyin. Bu hata tam güvenli bir GPG anahtarı kullanmadığınız için oluşmuş olabilir. Lütfen kullandığınız anahtar için gerekli gizli anahtara sahip olduğunuzdan emin olun.</qt> <qt>'<b>%1</b>' cüzdanı açılırken bir hata oluştu. Lütfen yeniden deneyin. <br />(Hata kodu %2: %3)</qt> <qt>GPG kullanılırken <b>%1</b> cüzdanı şifre çözmesi sırasında hata oluştu. Eğer bir Akıllı Kart kullanıyorsanız, takılı olduğundan emin olun ve yeniden deneyin.<br><br>GPG hatası şuydu: <b>%2</b></qt> <qt><b>%1</b> cüzdanı açılırken OpenPGP başlatmada hata oluştu. Hata kodu <b>%2</b>. Lütfen sistem yapılandırmanızı onarın ve yeniden deneyin.</qt> <qt><b>%1</b> cüzdanı açılırken OpenPGP başlatmada hata oluştu. Lütfen sistem yapılandırmanızı onarın ve yeniden deneyin.</qt> <qt><b>%1</b> cüzdanına kaydedilirken OpenPGP başlatmada hata oluştu. Hata kodu <b>%2</b>. Lütfen sistem yapılandırmanızı onarın ve yeniden deneyin.</qt> <qt><b>%1</b> cüzdanına kaydedilirken OpenPGP başlatmada hata oluştu. Lütfen sistem yapılandırmanızı onarın ve yeniden deneyin.</qt> <qt><b>%1</b> cüzdanı açılırken bir hata oluştu. Cüzdan GPG Anahtar Kimliği <b>%2</b> ile şifrelenmiş ancak bu anahtar sistemde bulunamadı.</qt> <qt><b>%1</b> cüzdanı kaydedilirken dosya ele alma hatası. Hata <b>%2</b> idi. Lütfen sistem yapılandırmanızı onarın ve yeniden deneyin.</qt> <qt>KDE '<b>%1</b>' cüzdanına erişerek açma isteğinde bulundu.</qt> <qt>KDE, '<b>%1</b>' adlı bir cüzdanın oluşturulmasını istiyor. Lütfen bu cüzdan için bir parola seçin veya uygulamanın isteğini geri çevirmek için İptal düğmesine tıklayın.</qt> <qt>KDE, '<b>%1</b>' adında bir cüzdanın açılması talebinde bulundu. Bu işlem, gizli verilerin güvenli bir şekilde depolanmasına imkan tanır. Lütfen bu cüzdan için kullanacağınız parolayı girin ya da uygulamanın talebini geri çevirmek için İptal düğmesine tıklayın.</qt> <qt>KDE, '<b>%1</b>' cüzdanını açmak istiyor. Lütfen bu cüzdan için gerekli parolayı aşağıdaki kutucuğa girin.</qt> <qt>Parola boş. <b>(UYARI: Güvensiz)</b></qt> <qt>Lütfen '<b>%1</b>' cüzdanı için yeni bir parola seçin.</qt> <qt><b>%1</b> cüzdanı <b>%2</b> GPG anahtarı kullanılarak şifrelenmiş. Lütfen bu anahtarla ilişkili parolayı değiştirmek için <b>GPG</b> araçları kullanın (<b>kleopatra</b> benzeri).</qt> <qt>'<b>%1</b>' uygulaması '<b>%2</b>' cüzdanına erişerek açma isteğinde bulundu.</qt> <qt>'<b>%1</b>' uygulaması, '<b>%2</b>' adlı bir cüzdan oluşturmak istiyor. Lütfen bu cüzdan için bir parola seçin veya uygulamanın isteğini geri çevirmek için İptal düğmesine tıklayın.</qt> <qt>'<b>%1</b>' uygulaması '<b>%2</b>' adında yeni bir cüzdan oluşturmak istiyor. Bu işlem hassas verilerin güvenli bir şekilde depolanmasını sağlar. Lütfen bu yeni cüzdan için bir tür seçin veya uygulamanın isteğini geri çevirmek için İptal düğmesine tıklayın.</qt> <qt>'<b>%1</b>' uygulaması KDE cüzdan uygulamasının açılmasını istiyor. Bu işlem hassas verilerin güvenli bir şekilde depolanmasını sağlar. Lütfen bu cüzdan için kullanacağınız parolayı girin veya uygulamanın isteğini geri çevirmek için İptal düğmesine tıklayın.</qt> <qt>'<b>%1</b>' uygulaması '<b>%2</b>' cüzdanının açılmasını istiyor. Lütfen bu cüzdan için gerekli parolayı aşağıdaki kutucuğa girin.</qt> &Her Zaman İzin Ver &Bir Kez İzin Ver Zaten açık. Bir uygulama bir cüzdana (%1) erişim isteğinde isteğinde bulundu. Uzun süre kullanılmayan cüzdanları kapat Klasik, blowfish ile şifrelenmiş dosya Dosya bozuk mu? D-Bus Arayüzü Şifreleme açma hatası. &Her Zaman Reddet E-Posta tulliana@gmail.com, volkangezer@gmail.com, emir_sari@icloud.com Yeni bir parola girin: Dosya açılırken hata oluştu. Cüzdanın yeniden şifrelenmesi sırasında hata oluştu. Parola değiştirilmedi. Cüzdanın yeniden açılması sırasında hata oluştu. Veri kaybı olabilir. Cüzdan bütünlüğü doğrulanamadı. Olasılıkla cüzdan bozulmuş. <b>%1</b> cüzdanı diske eşitlenemedi. Hata kodları:
RC <b>%2</b>
SF <b>%3</b>. Lütfen bu bilgiyi kullanarak bugs.kde.org sitesine bir HATA kaydı gönderin. Önceki Geliştirici Önceki geliştirici George Staikos KDE Cüzdan Servisi KDE, bir cüzdanın açılması talebinde bulundu. Bu işlem, gizli verilerin güvenli bir şekilde depolanmasına imkan tanır. Lütfen bu cüzdan için kullanacağınız parolayı girin ya da uygulamanın talebini geri çevirmek için İptal düğmesine tıklayın. K Cüzdan Anahtar Kimliği Projeyi yürüten, GPG arka uç desteği Michael Leupold Serdar Soytetir, Volkan Gezer, Emir SARI Ad Bu bir cüzdan dosyası değil. Parolalar uyuşmadı. Parolalar uyuştu. Lütfen aşağıdaki listeden imzalama anahtarı seçin: Okuma hatası - büyük olasılıkla parola hatalı. Yeniden Dene Sisteminiz şifreleme için uygun bir anahtar bulundurmuyor gibi görünüyor. Lütfen en az bir şifreleme anahtarı ayarlayın ve yeniden deneyin. Şifreleme GPG anahtarını seçin: Ağ parolalarını ve yerel parolaları ayrı cüzdan dosyalarında sakla Oraya geç %1 uygulamasına geç GpgME kitaplığı, OpenPGP protokolünü başlatırken başarısız oldu. Lütfen sistem yapılandırmanızı onarın ve yeniden deneyin! KDE Cüzdan Sistemi KDE Cüzdan sistemi, kişisel verilerinizin güvenlik düzeyini kontrol etmenizi de sağlar. Bu ayarlardan bazıları sistemin kullanışlığına etki edebilir. Öntanımlı ayarlar pek çok kullanıcı için kabul edilebilir bir ortam sağlar. Tüm bu ayarları istendiği anda KWallet kontrol modülünden değiştirmek mümkündür. Arka arkaya, Cüzdan'a erişmeye çalışan başarısız girişimler yapıldı. Bir uygulama yanlış çalışıyor olabilir.  Thiago Maceira En az bir <b>şifreleme GPG anahtarı</b> bulunamadı. KDE Cüzdanı, parola ve diğer gizli verileri diske güvenle kaydedebilmek için benzer bir <b>şifreleme anahtarı</b> gerektirir. Eğer hala GPG tabanlı bir cüzdan ayarlamak isterseniz bu sihirbazı iptal edin, bir <b>şifreleme GPG anahtarı</b> ayarlayın ve bu yardımcıyı yeniden deneyin. Aksi halde hala geri tıklayabilir ve önceki sayfadan bir klasik blowfish algoritması ile şifrelenmiş dosya biçimi seçebilirsiniz. Cüzdan açılamadı. Parolanın değiştirilebilmesi için önce cüzdanın açılması gereklidir. Bilinmeyen şifreleme yapısı. Desteklenmeyen dosya biçimi sürümü. Daha iyi koruma için GPG şifrelemesi kullan Valentin Rusu Çeşitli uygulamalar, parolalarını ya da örneğin web formu verileri ya da çerezler gibi bilgilerini saklamak için KDE Cüzdan'ı kullanmaya teşebbüs edebilir. Eğer bu uygulamaların cüzdanı kullanmasını istiyorsanız, cüzdanı etkinleştirmeli ve bir parola belirlemelisiniz. Bu parola kaybedildiğinde <i>kurtarılabilir değildir</i>, parolayı bilen herkes cüzdan içerisinde saklı tüm bilgileri elde edebilir. Parolayı doğrula: KDE Cüzdan Sistemine hoş geldiniz. K Cüzdan, hassas ve güvenli olması gereken tüm bilgilerinizin disk üzerinde şifrelenmiş bir şekilde tutulmasına olanak verir. Bu süre içinde başkası, size ait bu bilgilere erişemez. Bu sihirbaz K Cüzdan hakkında bilgi verecek ve sizin için yapılandıracaktır. Ne tür bir şifreleme istiyorsunuz? Evet, gizli bilgilerimi korumak için KDE cüzdan sistemini kullanmak istiyorum. kwalletd GPG arka ucu 