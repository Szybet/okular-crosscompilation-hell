��    F      L  a   |         I    D  K    �	  �   �
  `  m  Q  �  �     e    �   |  �   `  �   B  '  �  ?     #   ]     �     �     �  (   �  "     $   %      J     k  W   x  S   �     $     3     G     \  !   p  7   �  B   �  9     L   G     �  %   �     �  T   �     2  A   Q  h   �  S   �  H   P  ;   �  A   �  A     D   Y  0   �  �   �  .   x   K   �   (   �   N   !  >   k!  0   �!  ,   �!  4   "  3   ="  ,   q"  '   �"  7   �"  =   �"  '   <#  �   d#     +$  -   G$  /   u$  �   �$  	   n%     x%  E  �%  X  �'     )  �   ;+  �   *,    -  I  1  �  _2  h  15  �   �6  �   �7  �   h8    9  =   ,:      j:  #   �:  )   �:  '   �:  1   ;  1   3;  $   e;     �;     �;  m   �;  o   <     �<     �<     �<     �<      �<  =   �<  H   ==  B   �=  W   �=     !>  +   1>     ]>  b   q>     �>  B   �>  V   %?  V   |?  M   �?  :   !@  N   \@  6   �@  ;   �@  +   A  �   JA      �A  D    B  ,   eB  R   �B  N   �B  +   4C  ;   `C  8   �C  +   �C  *   D      ,D  5   MD  7   �D  $   �D  �   �D  $   �E  6   �E  5   �E  �   F     �F     �F     ,       *           F      6   B   .   7          +            2              $       4   <   /       '   =       &           D   5      ?   :   9                        	                                            >   !       0                 )             C   A   
   -   %   #         8      E   ;             3      @          (       1   "            

This probably means that either you found a bug in Okular,
or that the DVI file, or auxiliary files (such as font files, 
or virtual font files) were really badly broken.
Okular will abort after this message. If you believe that you 
found a bug, or that Okular should behave better in this situation
please report the problem. <qt><p>Okular could not locate the program <em>dvipdfm</em> on your computer. This program is essential for the export function to work. You can, however, convert the DVI-file to PDF using the print function of Okular, but that will often produce documents which print okay, but are of inferior quality if viewed in Acrobat Reader. It may be wise to upgrade to a more recent version of your TeX distribution which includes the <em>dvipdfm</em> program.</p><p>Hint to the perplexed system administrator: Okular uses the PATH environment variable when looking for programs.</p></qt> <qt><p>Okular could not locate the program <em>dvips</em> on your computer. That program is essential for the export function to work.</p><p>Hint to the perplexed system administrator: Okular uses the PATH environment variable when looking for programs.</p></qt> <qt><p>Okular was not able to locate all the font files which are necessary to display the current DVI file. Your document might be unreadable.</p><p><small><b>PATH:</b> %1</small></p><p><small>%2</small></p></qt> <qt><p>The Ghostview program, which Okular uses internally to display the PostScript graphics that is included in this DVI file, is generally able to write its output in a variety of formats. The sub-programs that Ghostview uses for these tasks are called 'device drivers'; there is one device driver for each format that Ghostview is able to write. Different versions of Ghostview often have different sets of device drivers available. It seems that the version of Ghostview that is installed on this computer does not contain <strong>any</strong> of the device drivers that are known to Okular.</p><p>It seems unlikely that a regular installation of Ghostview would not contain these drivers. This error may therefore point to a serious misconfiguration of the Ghostview installation on your computer.</p><p>If you want to fix the problems with Ghostview, you can use the command <strong>gs --help</strong> to display the list of device drivers contained in Ghostview. Among others, Okular can use the 'png256', 'jpeg' and 'pnm' drivers. Note that Okular needs to be restarted to re-enable PostScript support.</p></qt> <qt><p>The PDF-file %1 could not be converted to PostScript. Some graphic elements in your document will therefore not be displayed.</p><p><b>Possible reason:</b> The file %1 might be broken, or might not be a PDF-file at all. This is the output of the <strong>pdf2ps</strong> program that Okular used:</p><p><strong>%2</strong></p></qt> <qt><p>The external program <strong>pdf2ps</strong> could not be started. As a result, the PDF-file %1 could not be converted to PostScript. Some graphic elements in your document will therefore not be displayed.</p><p><b>Possible reason:</b> The program <strong>pdf2ps</strong> may not be installed on your system, or cannot be found in the current search path.</p><p><b>What you can do:</b> The program <strong>pdf2ps</strong> is normally contained in distributions of the ghostscript PostScript interpreter system. If ghostscript is not installed on your system, you could install it now. If you are sure that ghostscript is installed, try to use <strong>pdf2ps</strong> from the command line to check if it really works.</p><p><em>PATH:</em> %2</p></qt> <qt><p>There were problems running <em>kpsewhich</em>. As a result, some font files could not be located, and your document might be unreadable.<br/>Possible reason: the <em>kpsewhich</em> program is perhaps not installed on your system, or it cannot be found in the current search path.</p><p><small><b>PATH:</b> %1</small></p><p><small>%2</small></p></qt> <qt>The external program 'dvipdfm', which was used to export the file, reported an error. You might wish to look at the <strong>document info dialog</strong> which you will find in the File-Menu for a precise error report.</qt> <qt>The external program 'dvips', which was used to export the file, reported an error. You might wish to look at the <strong>document info dialog</strong> which you will find in the File-Menu for a precise error report.</qt> <qt>The font generation by <em>kpsewhich</em> was aborted (exit code %1, error %2). As a result, some font files could not be located, and your document might be unreadable.</qt> <qt>This DVI file refers to external graphic files which are not in PostScript format, and cannot be handled by the <em>dvips</em> program that Okular uses internally to print or to export to PostScript. The functionality that you require is therefore unavailable in this version of Okular.</qt> All external PostScript files were embedded into your document. An illegal command was encountered. Bad pk file (%1), too many bits Cannot find font %1, file %2. Cannot open font file %1. Cannot recognize format for font file %1 Checksum mismatch for font file %1 Currently generating %1 at %2 dpi... EMAIL OF TRANSLATORSYour emails Embedding %1 Error in DVIfile '%1', page %2. Color pop command issued when the color stack is empty. Error in DVIfile '%1', page %2. Could not interpret angle in text rotation special. Fatal error.

 File corruption. %1 File not found: 
 %1 Font file not found Font has non-square aspect ratio  FreeType is unable to load glyph #%1 from font file %2. FreeType is unable to load metric for glyph #%1 from font file %2. FreeType is unable to render glyph #%1 from font file %2. FreeType reported an error when setting the character size for font file %1. Generator/Date Glyph #%1 from font file %2 is empty. Glyph #%1 is empty. Malformed parameter in the epsf special command.
Expected a float to follow %1 in %2 NAME OF TRANSLATORSYour names Not all PostScript files could be embedded into your document. %1 Okular was not able to locate the place in the DVI file which corresponds to line %1 in the TeX-file %2. Page %1: The PDF file <strong>%2</strong> could not be converted to PostScript.<br> Page %1: The PostScript file <strong>%2</strong> could not be found.<br> TexFont_PK::operator[]: Character %1 not defined in font %2 That makes 25 errors. Further error messages will not be printed. The DVI code referred to a font which was not previously defined. The DVI code referred to font #%1, which was not previously defined. The DVI code set a character of an unknown font. The DVI file contains the wrong version of DVI output for this program. Hint: If you use the typesetting system Omega, you have to use a special program, such as oxdvi. The DVI file does not start with the preamble. The DVI file is badly corrupted. Okular was not able to find the postamble. The character %1 is too large in file %2 The font file %1 could be opened and read, but its font format is unsupported. The font file %1 is broken, or it could not be opened or read. The page %1 does not start with the BOP command. The papersize data '%1' could not be parsed. The postamble contained a command other than FNTDEF. The postamble does not begin with the POST command. The special command '%1' is not implemented. The specified file '%1' does not exist. The stack was empty when a POP command was encountered. The stack was not empty when the EOP command was encountered. The unknown op-code %1 was encountered. The version of Ghostview that is installed on this computer does not contain any of the Ghostview device drivers that are known to Okular. PostScript support has therefore been turned off in Okular. Unexpected %1 in PK file %2 Wrong command byte found in VF macro list: %1 Wrong number of bits stored:  char. %1, font %2 You have asked Okular to locate the place in the DVI file which corresponds to line %1 in the TeX-file %2. It seems, however, that the DVI file does not contain the necessary source file information.  landscape portrait Project-Id-Version: okular_dvi
Report-Msgid-Bugs-To: https://bugs.kde.org
PO-Revision-Date: 2017-09-28 17:59+0200
Last-Translator: Chusslove Illich <caslav.ilic@gmx.net>
Language-Team: Serbian <kde-i18n-sr@kde.org>
Language: sr@ijekavianlatin
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Generator: Lokalize 1.0
Plural-Forms: nplurals=4; plural=n==1 ? 3 : n%10==1 && n%100!=11 ? 0 : n%10>=2 && n%10<=4 && (n%100<10 || n%100>=20) ? 1 : 2;
X-Accelerator-Marker: &
X-Text-Markup: kde4
X-Environment: kde
X-Associated-UI-Catalogs: okular
 
<html>Ovo vjerovatno znači da ste ili našli grešku u Okularu, ili da su DVI fajl ili dopunski fajlovi (poput fajlova fontova ili virtuelnih fontova) ozbiljno iskvareni. Okular će obustaviti rad poslije ove poruke. Ako mislite da ste pronašli grešku, ili da Okular treba bolje da se snađe u ovoj situaciji, prijavite ovaj problem.</html> <qt><p>Okular ne može da nađe naredbu <tt>dvipdfm</tt> na ovom računaru. Ona je neophodna za rad funkcije izvoza. DVI fajl možete da pretvorite u PDF i upotrebom funkcije izvoza u Okularu, ali će takav dokument dobro izgledati samo na papiru, dok će biti lošijeg kvaliteta u Akrobatu čitaču. Zato je ipak najbolje da dogradite distribuciju TeX‑a na noviju verziju, koja sadrži i naredbu <tt>dvipdfm</tt>.</p><p>Savjet zbunjenom sistem-administratoru: Okular traži naredbe kroz promjenljivu okruženja <tt>$PATH</tt>.</p></qt> <qt><p>Okular ne može da pronađe naredbu <tt>dvips</tt> na ovom računaru. Ona je ključna za rad funkcije izvoza.</p><p>Savjet zbunjenom sistem-administratoru: Okular traži naredbe kroz promjenljivu okruženja <tt>$PATH</tt>.</p></qt> <qt><p>Okular ne može da pronađe sve fajlove fontove koji su potrebni za prikazivanje tekućeg DVI fajla. Dokument može biti nečitljiv.</p><p><small><b><tt>$PATH</tt>:</b> %1</small></p><p><small>%2</small></p></qt> <qt><p>Za prikazivanje PostScript grafike uključene u ovaj DVI fajl Okular interno koristi program GhostView, koji može da proizvede mnoge različite formate na izlazu. Potprogrami koje GhostView koristi u ovu svrhu nazivaju se „drajverima uređaja“, po jedan za svaki format koji GhostView može da zapiše. Različita izdanja GhostViewa često imaju različite skupove drajvera. Izgleda da izdanje GhostViewa instalirano na ovom računaru ne sadrži <strong>nijedan</strong> drajver poznat Okularu.</p><p>Malo je vjerovatno da ispravna instalacija GhostViewa ne sadrži nijedan drajver. Stoga ova greška vjerovatno ukazuje na ozbiljne greške u postavi GhostViewa na ovom računaru.</p><p>Ukoliko želite da otklonite probleme sa GhostViewom, možete izvršiti naredbu <tt>gs --help</tt> da dobijete spisak drajvera koje GhostView sadrži. Između ostalih, Okular može da koristi drajvere <tt>png256</tt>, <tt>jpeg</tt> i <tt>pnm</tt>. Okular mora biti ponovo pokrenut da bi se ponovo provjerila podrška za PostScript.</p></qt> <qt><p>PDF fajl <tt>%1</tt> ne može da se pretvori u PostScript. Zbog ovoga neće biti prikazani neki grafički elementi dokumenta.</p><p><b>Mogući razlozi:</b> Fajl je možda iskvaren, ili možda uopšte nije PDF fajl. Naredba <tt>pdf2ps</tt>, koju je Okular upotrebio, ispisala je sledeće:</p><p><strong>%2</strong></p></qt> <qt><p>Spoljašnja naredba <tt>pdf2ps</tt> ne može da se izvrši, te nije moguće pretvoriti PDF fajl <tt>%1</tt> u PostScript. Zbog ovoga neće biti prikazani neki grafički elementi dokumenta.</p><p><b>Mogući razlozi:</b> Naredba <tt>pdf2ps</tt> možda nije instalirana, ili se ne može naći kroz trenutnu putanju pretrage.</p><p><b>Šta možete da uradite:</b> Naredba <tt>pdf2ps</tt> obično stiže u distribucijama GhostScripta, interpretatorskog sistema za PostScript. Ako GhostScript nije instaliran, mogli biste ga instalirati sada. Ako ste sigurni da je GhostScript instaliran, pokušajte da izvršite <tt>pdf2ps</tt> iz komandne linije da proverite da li zaista radi.</p><p><b><tt>$PATH</tt>:</b> %2</p></qt> <qt><p>Bilo je problema pri izvršavanju <tt>kpsewhich</tt>. Posledica je da neki fajlovi fontova nisu nađeni, i dokument može biti nečitljiv.</p><p>Mogući razlog: naredba <tt>kpsewhich</tt> možda nije instalirana na sistemu, ili nije dostupna kroz trenutnu putanju pretrage.</p><p><small><b><tt>$PATH</tt>:</b> %1</small></p><p><small>%2</small></p></qt> <qt>Spoljašnja naredba <tt>dvipdfm</tt>, upotrijebljena za izvoz fajla, prijavila je grešku. Detaljniji izvještaj o grešci možete naći u <strong>dijalogu podataka o dokumentu</strong>, koji pozivate kroz meni <i>Fajl</i>.</qt> <qt>Spoljašnja naredba <tt>dvips</tt>, upotrebljena za izvoz fajla, prijavila je grešku. Detaljniji izvještaj o grešci možete naći u <strong>dijalogu podataka o dokumentu</strong>, koji pozivate kroz meni <i>Fajl</i>.</qt> <qt>Prekinuto je generisanje fontova pomoću <tt>kpsewhich</tt> (izlazni kô̂d %1, greška %2). Zbog ovoga neki fontovi nisu pronađeni, i dokument može biti nečitljiv.</qt> <qt>Ovaj DVI fajl ukazuje na spoljašnje grafičke fajlove koji nisu u formatu PostScript, te ne mogu biti obrađeni naredbom <tt>dvips</tt>, koju Okular interno koristi za štampanje i izvoz u PostScript. Funkcionalnost koju zahtevate nedostaje u ovoj verziji Okulara.</qt> Svi spoljašnji PostScript fajlovi ugnežđeni su u dokument. Naišla je nedozvoljena naredba. Loš PK fajl (%1), previše bitova. Ne mogu da nađem font %1, fajl ‘%2’. Ne mogu da otvorim fajl fonta ‘%1’. Ne mogu da prepoznam format fajla fonta ‘%1’. Neslaganje kontrolne sume za fajl fonta ‘%1’. Trenutno generišem %1 pri %2 tpi... olujicz@gmail.com Ugnježđujem %1 Greška u DVI fajlu ‘%1’, na stranici %2. Izdata je naredba „POP“ za boju dok je stek za boje prazan. Greška u DVI fajlu ‘%1’, stranica %2. Ne mogu da interpretiram ugao u specijalnoj naredbi rotacije teksta. Kobna greška.

 Fajl je iskvaren. %1 Fajl nije pronađen:
 %1 Font nije pronađen Font ima nekvadratnu proporciju. FreeType ne može da učita glif #%1 iz fajla fonta ‘%2’. FreeType ne može da učita metriku za glif #%1 iz fajla fonta ‘%2’. FreeType ne može da izrenderuje glif #%1 iz fajla fonta ‘%2’. FreeType prijavljuje grešku pri postavljanju veličine znakova za fajl fonta ‘%1’. Generator/datum Glif #%1 iz fajla fonta ‘%2’ je prazan. Glif #%1 je prazan. Loše formiran parametar u specijalnoj naredbi „epsf“.
Očekivan je realan broj nakon %1 u %2. Zoran Olujić Neki PostScript fajlovi ne mogu da budu ugnežđeni u dokument. %1 Okular ne može da nađe mesto u DVI fajlu koje odgovara redu %1 u tex fajlu ‘%2’. <html>Stranica %1: Ne mogu da pretvorim PDF fajl <tt>%2</tt> u PostScript.<br/></html> <html>Stranica %1: Ne mogu da nađem PostScript fajl <tt>%2</tt>.<br/></html> TexFont_PK::operator[]: Znak %1 nije definisan u fontu %2. Nađeno je 25 grešaka do sada. Dalje poruke o greškama neće biti prikazane. DVI kô̂d pominje font koji nije prethodno definisan. DVI kô̂d pominje font #%1, koji nije prethodno definisan. DVI kô̂d navodi znak iz nepoznatog fonta. DVI fajl sadrži pogrešnu verziju DVI izlaza za ovu naredbu. Savet: Ako koristite slovoslagački sistem Omega, tada ćete morati da koristite i posebnu naredbu, kao što je oxdvi. DVI fajl ne počinje preambulom. DVI fajl je znatno iskvaren. Okular ne može da pronađe postambulu. Znak %1 je previše veliki u fajlu ‘%2’. Fajl fonta ‘%1’ može da se otvori i pročita, ali format fonta nije podržan. Fajl fonta ‘%1’ ili je pokvaren, ili ne može da se otvorili ili pročita. Stranica %1 ne počinje naredbom „BOP“. Ne mogu da raščlanim podatke o veličini papira „%1“. Postambula sadrži neku drugu naredbu osim „FNTDEF“. Postambula ne počinje naredbom „POST“. Specijalna naredba „%1“ nije izvedena. Zadati fajl ‘%1’ ne postoji. Stek je bio prazan kada je naišla naredba „POP“. Stek nije bio prazan kada je naišla naredba „EOP“. Naišao je nepoznati op‑kô̂d %1. Verzija GhostViewa instalirana na ovom računaru ne sadrži nijedan drajver uređaja koji Okular poznaje. Zbog ovoga je isključena podrška za PostScript u Okularu. Neočekivano %1 u PK fajlu ‘%2’. Pogrešan komandni bajt pronađen u VF makro listi: %1 Uskladišten pogrešan broj bitova: znak %1, font %2. Zatražili ste od Okulara da nađe mesto u DVI fajlu koje odgovara redu %1 u tex fajlu ‘%2’. Izgleda, međutim, da DVI fajl ne sadrži neophodne podatke o izvornom fajlu. pejzaž portret 