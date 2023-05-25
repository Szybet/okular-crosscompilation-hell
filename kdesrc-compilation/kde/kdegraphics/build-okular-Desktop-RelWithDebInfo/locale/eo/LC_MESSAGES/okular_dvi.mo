��    E      D  a   l      �  I  �  D  ;    �	  �   �
  Q  ]  �  �  e  �  �     �   �  �   �  '  �  ?   �  #   �          0     N  (   h  "   �  $   �      �     �  W     S   _     �     �     �     �  !   �  7   !  B   Y  9   �  L   �     #  %   2     X  T   l     �  A   �  h   "  S   �  H   �  ;   (  A   d  A   �  D   �  0   -  �   ^  .     K   6  (   �  N   �  >   �  0   9  ,   j  4   �  3   �  ,      '   -  7   U  =   �  '   �  �   �     �  -   �  /      �   4   	   �      !  �  !  8  �"  O  �#     '&  �   ('  K  �'  �  F)  h  A,  �   �-  �   y.  �   F/  1  �/  E   +1     q1  )   �1  ,   �1  (   �1  3   2  3   E2  )   y2  3   �2     �2  f   �2  \   N3     �3     �3     �3     �3  $   
4  G   /4  V   w4  H   �4  R   5     j5  9   x5  !   �5  S   �5  #   (6  G   L6  `   �6  P   �6  >   F7  >   �7  8   �7  =   �7  D   ;8  4   �8  �   �8  2   `9  I   �9  *   �9  ^   :  K   g:  .   �:  *   �:  /   ;  1   =;  &   o;  &   �;  0   �;  6   �;     %<  �   C<     =  8   $=  :   ]=  �   �=     Q>     e>     +       )           E      5   A   -   6          *            1              #      3   ;   .       &   <       %           C   4       >   9   8                           
                                         =           /                 (             B   @   	   ,   $   "         7      D   :             2      ?          '       0   !            

This probably means that either you found a bug in Okular,
or that the DVI file, or auxiliary files (such as font files, 
or virtual font files) were really badly broken.
Okular will abort after this message. If you believe that you 
found a bug, or that Okular should behave better in this situation
please report the problem. <qt><p>Okular could not locate the program <em>dvipdfm</em> on your computer. This program is essential for the export function to work. You can, however, convert the DVI-file to PDF using the print function of Okular, but that will often produce documents which print okay, but are of inferior quality if viewed in Acrobat Reader. It may be wise to upgrade to a more recent version of your TeX distribution which includes the <em>dvipdfm</em> program.</p><p>Hint to the perplexed system administrator: Okular uses the PATH environment variable when looking for programs.</p></qt> <qt><p>Okular could not locate the program <em>dvips</em> on your computer. That program is essential for the export function to work.</p><p>Hint to the perplexed system administrator: Okular uses the PATH environment variable when looking for programs.</p></qt> <qt><p>Okular was not able to locate all the font files which are necessary to display the current DVI file. Your document might be unreadable.</p><p><small><b>PATH:</b> %1</small></p><p><small>%2</small></p></qt> <qt><p>The PDF-file %1 could not be converted to PostScript. Some graphic elements in your document will therefore not be displayed.</p><p><b>Possible reason:</b> The file %1 might be broken, or might not be a PDF-file at all. This is the output of the <strong>pdf2ps</strong> program that Okular used:</p><p><strong>%2</strong></p></qt> <qt><p>The external program <strong>pdf2ps</strong> could not be started. As a result, the PDF-file %1 could not be converted to PostScript. Some graphic elements in your document will therefore not be displayed.</p><p><b>Possible reason:</b> The program <strong>pdf2ps</strong> may not be installed on your system, or cannot be found in the current search path.</p><p><b>What you can do:</b> The program <strong>pdf2ps</strong> is normally contained in distributions of the ghostscript PostScript interpreter system. If ghostscript is not installed on your system, you could install it now. If you are sure that ghostscript is installed, try to use <strong>pdf2ps</strong> from the command line to check if it really works.</p><p><em>PATH:</em> %2</p></qt> <qt><p>There were problems running <em>kpsewhich</em>. As a result, some font files could not be located, and your document might be unreadable.<br/>Possible reason: the <em>kpsewhich</em> program is perhaps not installed on your system, or it cannot be found in the current search path.</p><p><small><b>PATH:</b> %1</small></p><p><small>%2</small></p></qt> <qt>The external program 'dvipdfm', which was used to export the file, reported an error. You might wish to look at the <strong>document info dialog</strong> which you will find in the File-Menu for a precise error report.</qt> <qt>The external program 'dvips', which was used to export the file, reported an error. You might wish to look at the <strong>document info dialog</strong> which you will find in the File-Menu for a precise error report.</qt> <qt>The font generation by <em>kpsewhich</em> was aborted (exit code %1, error %2). As a result, some font files could not be located, and your document might be unreadable.</qt> <qt>This DVI file refers to external graphic files which are not in PostScript format, and cannot be handled by the <em>dvips</em> program that Okular uses internally to print or to export to PostScript. The functionality that you require is therefore unavailable in this version of Okular.</qt> All external PostScript files were embedded into your document. An illegal command was encountered. Bad pk file (%1), too many bits Cannot find font %1, file %2. Cannot open font file %1. Cannot recognize format for font file %1 Checksum mismatch for font file %1 Currently generating %1 at %2 dpi... EMAIL OF TRANSLATORSYour emails Embedding %1 Error in DVIfile '%1', page %2. Color pop command issued when the color stack is empty. Error in DVIfile '%1', page %2. Could not interpret angle in text rotation special. Fatal error.

 File corruption. %1 File not found: 
 %1 Font file not found Font has non-square aspect ratio  FreeType is unable to load glyph #%1 from font file %2. FreeType is unable to load metric for glyph #%1 from font file %2. FreeType is unable to render glyph #%1 from font file %2. FreeType reported an error when setting the character size for font file %1. Generator/Date Glyph #%1 from font file %2 is empty. Glyph #%1 is empty. Malformed parameter in the epsf special command.
Expected a float to follow %1 in %2 NAME OF TRANSLATORSYour names Not all PostScript files could be embedded into your document. %1 Okular was not able to locate the place in the DVI file which corresponds to line %1 in the TeX-file %2. Page %1: The PDF file <strong>%2</strong> could not be converted to PostScript.<br> Page %1: The PostScript file <strong>%2</strong> could not be found.<br> TexFont_PK::operator[]: Character %1 not defined in font %2 That makes 25 errors. Further error messages will not be printed. The DVI code referred to a font which was not previously defined. The DVI code referred to font #%1, which was not previously defined. The DVI code set a character of an unknown font. The DVI file contains the wrong version of DVI output for this program. Hint: If you use the typesetting system Omega, you have to use a special program, such as oxdvi. The DVI file does not start with the preamble. The DVI file is badly corrupted. Okular was not able to find the postamble. The character %1 is too large in file %2 The font file %1 could be opened and read, but its font format is unsupported. The font file %1 is broken, or it could not be opened or read. The page %1 does not start with the BOP command. The papersize data '%1' could not be parsed. The postamble contained a command other than FNTDEF. The postamble does not begin with the POST command. The special command '%1' is not implemented. The specified file '%1' does not exist. The stack was empty when a POP command was encountered. The stack was not empty when the EOP command was encountered. The unknown op-code %1 was encountered. The version of Ghostview that is installed on this computer does not contain any of the Ghostview device drivers that are known to Okular. PostScript support has therefore been turned off in Okular. Unexpected %1 in PK file %2 Wrong command byte found in VF macro list: %1 Wrong number of bits stored:  char. %1, font %2 You have asked Okular to locate the place in the DVI file which corresponds to line %1 in the TeX-file %2. It seems, however, that the DVI file does not contain the necessary source file information.  landscape portrait Project-Id-Version: okular_dvi
Report-Msgid-Bugs-To: https://bugs.kde.org
PO-Revision-Date: 2023-04-07 10:09+0100
Last-Translator: Oliver Kellogg <okellogg@users.sourceforge.net>
Language-Team: Esperanto <kde-i18n-doc@kde.org>
Language: eo
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Generator: Lokalize 1.0
Plural-Forms: nplurals=2; plural=n != 1;
 

Tio verŝajne signifas, ke vi trovis cimon en okular,
aŭ ke la DVI dosiero, aŭ iuj neĉefaj dosieroj (ekz. tiparoj aŭ virtualaj tiparoj),
estas tre difektitaj.
Okular finos post tiu mesaĝo. Se vi kredas, ke vi trovis
cimon, aŭ ke okular devus konduti pli dece en tiu situacio
bonvolu raporti la problemon. <qt><p>Okular ne povis trovi la programon <em>dvipdfm</em> en via komputilo. Ĉi tiu programo estas esenca por ke la eksporta funkcio funkcias. Vi povas, tamen, konverti la DVI-dosieron al PDF uzante la presitan funkcion de Okular, sed tio ofte produktos dokumentojn kiuj presas bone, sed estas de malsupera kvalito se rigardataj en Acrobat Reader. Eble estas saĝe ĝisdatigi al pli lastatempa versio de via TeX-distribuo kiu inkluzivas la programon <em>dvipdfm</em>.</p><p>Konsilo al la perpleksa sistemadministranto: Okular uzas la mediovariablon PATH kiam serĉas por programoj.</p></qt> <qt><p>Okular ne povis trovi la programon <em>dvips</em> en via komputilo. Tiu programo estas esenca por ke la eksporta funkcio funkciu.</p><p>Konsilo al la perpleksa sistemadministranto: Okular uzas la mediovariablon PATH kiam serĉas programojn.</p></qt> <qt><p>Okular ne povis trovi ĉiujn tipardosierojn kiuj estas necesaj por montri la nunan DVI-dosieron. Via dokumento eble estas nelegebla.</p><p><small><b>VODO:</b> %1</small></p><p><small>%2</small></p></qt> <qt><p>La PDF-dosiero %1 ne povis esti konvertita al PostScript. Kelkaj grafikaj elementoj en via dokumento do ne estos montrataj.</p><p><b>Ebla kialo:</b> La dosiero %1 eble estas rompita, aŭ eble tute ne estas PDF-dosiero. Jen la eligo de la programo <strong>pdf2ps</strong>, kiun Okular uzis:</p><p><strong>%2</strong></p></qt> <qt><p>La ekstera programo <strong>pdf2ps</strong> ne povis esti komencita. Kiel rezulto, la PDF-dosiero %1 ne povis esti konvertita al PostScript. Kelkaj grafikaj elementoj en via dokumento do ne estos montrataj.</p><p><b>Ebla kialo:</b> La programo <strong>pdf2ps</strong> eble ne estas instalita en via sistemo, aŭ ne povas esti trovita en la nuna serĉvojo.</p><p><b>Kion vi povas fari:</b> La programo <strong>pdf2ps</strong> estas normale enhavita en distribuaĵoj de la fantoma PostScript interpretistosistemo. Se ghostscript ne estas instalita en via sistemo, vi povus instali ĝin nun. Se vi certas, ke ghostscript estas instalita, provu uzi <strong>pdf2ps</strong> de la komandlinio por kontroli ĉu ĝi vere funkcias.</p><p><em>PATH:</em> %2</p></qt> <qt><p>Estis problemoj pri funkciado de <em>kpsewhich</em>. Rezulte, kelkaj tipardosieroj ne eblis troviĝi, kaj via dokumento eble estas nelegebla.<br/>Ebla kialo: la programo <em>kpsewhich</em> eble ne estas instalita en via sistemo, aŭ ĝi ne troveblas en via sistemo. la nuna serĉvojo.</p><p><small><b>VOJ:</b> %1</small></p><p><small>%2</small></p></qt> <qt>La ekstera programo 'dvipdfm' uzata por eksporti la dosieron raportis eraron. Vi povus rigardi la <strong>dokumentinforman fenestron</strong> en la Dosiero menuo por ricevi detalan eraroprotokolon.</qt> <qt>La ekstera programo 'dvips' uzata por eksporti la dosieron raportis eraron. Vi povus rigardi la <strong>dokumentinforman fenestron</strong> en la Dosiero menuo por ricevi detalan eraroprotokolon.</qt> <qt>La tiparogenerado de <em>kpsekiu</em> estis ĉesigita (eliro %1, eraro %2). Kiel rezulto, kelkaj tipardosieroj ne povis troviĝi, kaj via dokumento eble estos nelegebla.</qt> <qt>Ĉi tiu DVI-dosiero rilatas al eksteraj grafikaj dosieroj kiuj ne estas en PostScript-formato, kaj ne povas esti pritraktitaj de la programo <em>dvips</em>, kiun Okular uzas interne por presi aŭ eksporti al PostScript. La funkcio, kiun vi postulas, do ne disponeblas en ĉi tiu versio de Okular.</qt> Ĉiuj eksteraj PostScript-dosieroj estis enigitaj en vian dokumenton. Malpermesita komando troviĝis. Malbona PK dosiero (%1), tro multaj bitoj Ne eblas trovi la tiparon %1, en dosiero %2. Ne eblas malfermi la tiparan dosieron %1 Ne eblas rekoni la formaton de la tipara dosiero %1 La kontrolsumo ne kongruas pri la tipara dosiero %1 Aktuale kreante %1 per %2 punktoj/colo... pedrotpmx@wanadoo.fr,okellogg@users.sourceforge.net Enkorpigante %1 Eraro en la DVI dosiero '%1', paĝo %2. Kolora pop-komando okazis kiam la kolora stako estis malplena. Eraro en la DVI dosiero '%1', paĝo %2. Ne eblis interpreti la angulon en la teksta rotacio. Neriparebla eraro.

 Dosiera korupto. %1 Dosiero ne troviĝis:
 %1 Tipara dosiero ne troviĝis Tiparo havas nekvadratan proporcion  FreeType ne kapablas ŝargi la signobildon #%1 el la tipara dosiero %2. FreeType ne kapablas ŝargi la metraĵon por la signobildo #%1 el la fonta dosiero %2. FreeType ne kapablas bildigi la signobildon #%1 el la tipara dosiero %2. FreeType raportis eraron aplikante la signan grandecon por la tiparan dosieron %1. Generilo/Dato La signobildo #%1 el la tipara dosiero %2 estas malplena. La signobildo #%1 estas malplena. Misformita parametro en la speciala komando epsf.
Atendis reelon sekvintan %1 en %2 Pierre-Marie Pédrot,Oliver Kellogg Ne ĉiuj PostScript-dosieroj povus esti enigitaj en vian dokumenton. %1 Okular ne povis trovi la lokon en la DVI-dosiero kiu respondas al linio %1 en la TeX-dosiero %2. Paĝo %1: La PDF dosiero <strong>%2</strong> ne konverteblis al postskripto.<br> Paĝo %1: La PDF dosiero <strong>%2</strong> ne troveblis.<br> exFont_PK::operator[]: signo %1 ne estas difinita en tiparo %2 Ĝis nun estis 25 eraroj. La pliaj eraroj ne montriĝos. La DVI kodo referis al tiparon kiu ne estis difinita antaŭe. La DVI kodo referis al la tiparo #%1, kiu ne estis difinita antaŭe. La DVI kodoprezento havas signon el nekonata tiparo. La DVI dosiero enhavas la malĝustan version de la DVI eligo por tiu programo. Indiko: Se vi uzas la formatsistemon Omega, vi bezonas uzi specialan programon, kiel oxdvi. La DVI dosiero ne komenciĝas per la antaŭteksto. La DVI dosiero estas ege koruptita. Okular ne eblis trovi la posttekston. La signo %1 estas tro granda en dosiero %2 La tipara dosiero %1 ne malfermeblis kaj legeblis, sed ĝia tipara formato ne estas subtenata. La tipara dosiero %1 estas koruptita, aŭ ĝi ne malfermeblis aŭ legeblis. La paĝo %1 ne komenciĝas per la BOP komando. La papergranda datumo '%1' ne analizeblis. La postteksto enhavas komandon alian ol FNTDEF. La postteksto ne komenciĝas per la POST komando. La speciala komando '%1' ne realiĝis. La specifita dosiero '%1' ne ekzistas. La stako estis malplena kiam POP komando okazis. La stako ne estis malplena kiam la EOP komando okazis. La nekonata opkodo %1 okazis. La versio de Ghostview kiu estas instalita sur ĉi tiu komputilo enhavas neniun el la Ghostview-aparataj peliloj kiuj estas konataj de Okular. PostScript-subteno do estas malŝaltita en Okular. Neatendita %1 en PK-dosiero %2 Malĝusta komanda bitoko troviĝis en VF-makro-listo: %1 Malĝusta nombro da bitoj konservitaj: signo %1, tiparo %2 Vi petis al Okular lokalizi la lokon en la DVI-dosiero kiu respondas al linio %1 en la TeX-dosiero %2. Ŝajnas, tamen, ke la DVI-dosiero ne enhavas la necesajn fontdosierajn informojn. horizontala formato vertikala formato 