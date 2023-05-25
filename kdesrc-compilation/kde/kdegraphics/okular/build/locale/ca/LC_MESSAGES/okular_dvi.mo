��    E      D  a   l      �  I  �  D  ;    �	  �   �
  Q  ]  �  �  e  �  �     �   �  �   �  '  �  ?   �  #   �          0     N  (   h  "   �  $   �      �     �  W     S   _     �     �     �     �  !   �  7   !  B   Y  9   �  L   �     #  %   2     X  T   l     �  A   �  h   "  S   �  H   �  ;   (  A   d  A   �  D   �  0   -  �   ^  .     K   6  (   �  N   �  >   �  0   9  ,   j  4   �  3   �  ,      '   -  7   U  =   �  '   �  �   �     �  -   �  /      �   4   	   �      !  �  !  �  �"  �  S$  '  �&  �   	(  E  �(  �  /*  �  +-  �   �.  �   �/  �   �0  9  x1  I   �2  !   �2  %   3  3   D3  0   x3  @   �3  @   �3  *   +4     V4     g4  o   }4  h   �4     V5     e5     �5  +   �5  :   �5  J   6  W   P6  M   �6  e   �6     \7  9   k7     �7  \   �7     8  D   +8  d   p8  W   �8  H   -9  N   v9  8   �9  P   �9  W   O:  G   �:  �   �:  +   �;  D   �;  /    <  r   P<  M   �<  *   =  ;   <=  .   x=  '   �=  .   �=  )   �=  2   (>  5   [>  "   �>  �   �>     �?  E   �?  L   �?  �   >@     A     A     +       )           E      5   A   -   6          *            1              #      3   ;   .       &   <       %           C   4       >   9   8                           
                                         =           /                 (             B   @   	   ,   $   "         7      D   :             2      ?          '       0   !            

This probably means that either you found a bug in Okular,
or that the DVI file, or auxiliary files (such as font files, 
or virtual font files) were really badly broken.
Okular will abort after this message. If you believe that you 
found a bug, or that Okular should behave better in this situation
please report the problem. <qt><p>Okular could not locate the program <em>dvipdfm</em> on your computer. This program is essential for the export function to work. You can, however, convert the DVI-file to PDF using the print function of Okular, but that will often produce documents which print okay, but are of inferior quality if viewed in Acrobat Reader. It may be wise to upgrade to a more recent version of your TeX distribution which includes the <em>dvipdfm</em> program.</p><p>Hint to the perplexed system administrator: Okular uses the PATH environment variable when looking for programs.</p></qt> <qt><p>Okular could not locate the program <em>dvips</em> on your computer. That program is essential for the export function to work.</p><p>Hint to the perplexed system administrator: Okular uses the PATH environment variable when looking for programs.</p></qt> <qt><p>Okular was not able to locate all the font files which are necessary to display the current DVI file. Your document might be unreadable.</p><p><small><b>PATH:</b> %1</small></p><p><small>%2</small></p></qt> <qt><p>The PDF-file %1 could not be converted to PostScript. Some graphic elements in your document will therefore not be displayed.</p><p><b>Possible reason:</b> The file %1 might be broken, or might not be a PDF-file at all. This is the output of the <strong>pdf2ps</strong> program that Okular used:</p><p><strong>%2</strong></p></qt> <qt><p>The external program <strong>pdf2ps</strong> could not be started. As a result, the PDF-file %1 could not be converted to PostScript. Some graphic elements in your document will therefore not be displayed.</p><p><b>Possible reason:</b> The program <strong>pdf2ps</strong> may not be installed on your system, or cannot be found in the current search path.</p><p><b>What you can do:</b> The program <strong>pdf2ps</strong> is normally contained in distributions of the ghostscript PostScript interpreter system. If ghostscript is not installed on your system, you could install it now. If you are sure that ghostscript is installed, try to use <strong>pdf2ps</strong> from the command line to check if it really works.</p><p><em>PATH:</em> %2</p></qt> <qt><p>There were problems running <em>kpsewhich</em>. As a result, some font files could not be located, and your document might be unreadable.<br/>Possible reason: the <em>kpsewhich</em> program is perhaps not installed on your system, or it cannot be found in the current search path.</p><p><small><b>PATH:</b> %1</small></p><p><small>%2</small></p></qt> <qt>The external program 'dvipdfm', which was used to export the file, reported an error. You might wish to look at the <strong>document info dialog</strong> which you will find in the File-Menu for a precise error report.</qt> <qt>The external program 'dvips', which was used to export the file, reported an error. You might wish to look at the <strong>document info dialog</strong> which you will find in the File-Menu for a precise error report.</qt> <qt>The font generation by <em>kpsewhich</em> was aborted (exit code %1, error %2). As a result, some font files could not be located, and your document might be unreadable.</qt> <qt>This DVI file refers to external graphic files which are not in PostScript format, and cannot be handled by the <em>dvips</em> program that Okular uses internally to print or to export to PostScript. The functionality that you require is therefore unavailable in this version of Okular.</qt> All external PostScript files were embedded into your document. An illegal command was encountered. Bad pk file (%1), too many bits Cannot find font %1, file %2. Cannot open font file %1. Cannot recognize format for font file %1 Checksum mismatch for font file %1 Currently generating %1 at %2 dpi... EMAIL OF TRANSLATORSYour emails Embedding %1 Error in DVIfile '%1', page %2. Color pop command issued when the color stack is empty. Error in DVIfile '%1', page %2. Could not interpret angle in text rotation special. Fatal error.

 File corruption. %1 File not found: 
 %1 Font file not found Font has non-square aspect ratio  FreeType is unable to load glyph #%1 from font file %2. FreeType is unable to load metric for glyph #%1 from font file %2. FreeType is unable to render glyph #%1 from font file %2. FreeType reported an error when setting the character size for font file %1. Generator/Date Glyph #%1 from font file %2 is empty. Glyph #%1 is empty. Malformed parameter in the epsf special command.
Expected a float to follow %1 in %2 NAME OF TRANSLATORSYour names Not all PostScript files could be embedded into your document. %1 Okular was not able to locate the place in the DVI file which corresponds to line %1 in the TeX-file %2. Page %1: The PDF file <strong>%2</strong> could not be converted to PostScript.<br> Page %1: The PostScript file <strong>%2</strong> could not be found.<br> TexFont_PK::operator[]: Character %1 not defined in font %2 That makes 25 errors. Further error messages will not be printed. The DVI code referred to a font which was not previously defined. The DVI code referred to font #%1, which was not previously defined. The DVI code set a character of an unknown font. The DVI file contains the wrong version of DVI output for this program. Hint: If you use the typesetting system Omega, you have to use a special program, such as oxdvi. The DVI file does not start with the preamble. The DVI file is badly corrupted. Okular was not able to find the postamble. The character %1 is too large in file %2 The font file %1 could be opened and read, but its font format is unsupported. The font file %1 is broken, or it could not be opened or read. The page %1 does not start with the BOP command. The papersize data '%1' could not be parsed. The postamble contained a command other than FNTDEF. The postamble does not begin with the POST command. The special command '%1' is not implemented. The specified file '%1' does not exist. The stack was empty when a POP command was encountered. The stack was not empty when the EOP command was encountered. The unknown op-code %1 was encountered. The version of Ghostview that is installed on this computer does not contain any of the Ghostview device drivers that are known to Okular. PostScript support has therefore been turned off in Okular. Unexpected %1 in PK file %2 Wrong command byte found in VF macro list: %1 Wrong number of bits stored:  char. %1, font %2 You have asked Okular to locate the place in the DVI file which corresponds to line %1 in the TeX-file %2. It seems, however, that the DVI file does not contain the necessary source file information.  landscape portrait Project-Id-Version: okular
Report-Msgid-Bugs-To: https://bugs.kde.org
PO-Revision-Date: 2021-11-03 18:53+0100
Last-Translator: Josep M. Ferrer <txemaq@gmail.com>
Language-Team: Catalan <kde-i18n-ca@kde.org>
Language: ca
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Generator: Lokalize 20.12.0
Plural-Forms: nplurals=2; plural=n != 1;
X-Accelerator-Marker: &
 

Això probablement significa que, o bé heu trobat una errada a l'Okular,
o que el fitxer DVI, o els fitxers auxiliars (com ara els fitxers de tipus de lletra, 
o els fitxers de tipus de lletra virtuals) estaven fets malbé de mala manera.
L'Okular s'aturarà després d'aquest missatge. Si penseu que heu trobat una 
errada, o que l'Okular s'hauria de comportar millor en aquesta situació,
informeu del problema, si us plau. <qt><p>L'Okular no ha pogut trobar el programa <em>dvipdfm</em> a l'ordinador. Aquest programa és essencial perquè funcioni la funció exportar. Malgrat tot, podeu convertir el fitxer DVI a PDF usant la funció d'impressió de l'Okular, però això molt sovint produeix documents que s'imprimeixen bé, però són de qualitat inferior si es visualitzen amb l'Acrobat Reader. Seria desitjable actualitzar-lo a una versió més recent del TeX de la vostra distribució que inclogui el programa <em>dvipdfm</em>.</p><p>Consell per a l'administrador de sistema perplex: l'Okular usa la variable PATH de l'intèrpret d'ordres quan cerca programes.</p></qt> <qt><p>L'Okular no ha pogut localitzar el programa <em>dvips</em> a l'ordinador. Aquest programa és essencial perquè funcioni la funció d'exportació.</p><p>Consell per a l'administrador de sistema perplex: l'Okular usa la variable PATH de l'intèrpret d'ordres quan cerca programes.</p></qt> <qt><p>L'Okular no ha pogut localitzar tots els fitxers de tipus de lletra necessaris per a mostrar el fitxer DVI actual. El document pot ser illegible.</p><p><small><b>CAMÍ:</b> %1</small></p><p><small>%2</small></p></qt> <qt><p>El fitxer PDF %1 no s'ha pogut convertir a PostScript. Alguns elements gràfics no es visualitzaran.</p><p><b>Un possible motiu:</b> el fitxer %1 podria estar fet malbé, o potser no és un fitxer PDF. Aquesta és la sortida del programa <strong>pdf2ps</strong> que ha usat l'Okular:</p><p><strong>%2</strong></p></qt> <qt><p>No s'ha pogut iniciar el programa extern <strong>pdf2ps</strong>. Com a resultat, el fitxer PDF %1 no s'ha pogut convertir a PostScript. Alguns elements gràfics del document no es visualitzaran.</p><p><b>Un possible motiu:</b> el programa <strong>pdf2ps</strong> potser no està instal·lat en el sistema, o no es troba al camí actual de cerca.</p><p><b>Què podeu fer:</b> el programa <strong>pdf2ps</strong> normalment està en distribucions del sistema de l'intèrpret PostScript. Si el ghostscript no està instal·lat en el sistema, el podeu instal·lar ara. Si esteu segur que el ghostscript està instal·lat, intenteu usar el <strong>pdf2ps</strong> des de la línia d'ordres per a comprovar si realment funciona.</p><p><em>PATH:</em> %2</p></qt> <qt><p>Hi ha hagut problemes executant el <em>kpsewhich</em>. Com a resultat, no s'han pogut localitzar alguns fitxers de tipus de lletra, el document podria ser illegible.<br/>Un possible motiu: El programa <em>kpsewhich</em> potser no està instal·lat en el sistema, o no s'ha pogut trobar en el camí de cerca actual.</p><p><small><b>CAMÍ:</b> %1</small></p><p><small>%2</small></p></qt> <qt>El programa extern «dvipdfm», el qual s'usa per a exportar el fitxer, ha informat d'un error. Podeu cercar al <strong>diàleg d'informació del document</strong> que trobareu al menú Fitxer per a un llistat detallat de l'error.</qt> <qt>El programa extern «dvip per as», el qual s'ha usat exportar el fitxer, ha informat d'un error. Podeu cercar al <strong>diàleg d'informació del document</strong> que trobareu al menú Fitxer per a un llistat detallat de l'error.</qt> <qt>S'ha interromput la generació dels tipus de lletra per al <em>kpsewhich</em> (codi de sortida %1, error %2). Com a resultat, alguns fitxers de tipus de lletra no es poden localitzar, i el document pot ser illegible.</qt> <qt>Aquest fitxer DVI té referències a fitxers gràfics externs que no estan en format PostScript, i no es poden manipular amb el programa <em>dvips</em> que l'Okular usa internament per a imprimir o exportar a PostScript. La funcionalitat que necessiteu no està disponible en aquesta versió de l'Okular.</qt> No es poden incrustar tots els fitxers PostScript externs en el document. S'ha trobat una ordre no permesa. Fitxer pk incorrecte (%1), massa bits No s'ha trobat el tipus de lletra %1, al fitxer %2. No es pot obrir el fitxer de tipus de lletra %1. No es pot reconèixer el format del fitxer de tipus de lletra %1 Error a la suma de verificació del fitxer de tipus de lletra %1 Actualment s'està generant %1 a %2 ppp... txemaq@gmail.com S'està incrustant %1 Error en el fitxer DVI «%1», pàgina %2. S'ha emès l'ordre «color pop» quan la pila de color estava buida. Error en el fitxer DVI «%1», pàgina %2. No s'ha pogut interpretar l'angle en un gir especial de text. Error fatal.

 S'ha malmès el fitxer. %1 No s'ha trobat el fitxer:
 %1 No s'ha trobat el fitxer de tipus de lletra El tipus de lletra té una relació d'aspecte no quadrada  El FreeType no pot carregar el tipus #%1 del fitxer de tipus de lletra %2. El FreeType no pot carregar la mètrica del tipus #%1 del fitxer de tipus de lletra %2. El FreeType no pot representar el tipus #%1 del fitxer de tipus de lletra %2. El FreeType ha informat d'un error en establir la mida del caràcter al fitxer de tipus de lletra %1. Generador/Data El tipus #%1 del fitxer de tipus de lletra %2 està buit. El tipus #%1 està buit. Paràmetre incorrecte a l'ordre especial «epsf».
S'esperava un flotant després de %1 a %2 Josep M. Ferrer No es poden incrustar tots els fitxers PostScript en el document. %1 L'Okular no ha pogut situar el punt en el fitxer DVI que correspon a la línia %1 del fitxer TeX %2. Pàgina %1: el fitxer PDF <strong>%2</strong> no s'ha pogut convertir a PostScript.<br> Pàgina %1: no s'ha trobat el fitxer PostScript <strong>%2</strong>.<br> TexFont_PK::operator[]: El caràcter %1 no està definit al tipus de lletra %2 Hi ha 25 errors. No s'imprimiran més missatges d'error. El codi DVI fa referència a un tipus de lletra que no s'ha definit prèviament. El codi DVI fa referència al tipus de lletra #%1, el qual no s'ha definit prèviament. El codi DVI ha configurat un caràcter d'un tipus de lletra desconegut. El fitxer DVI conté la versió incorrecta de la sortida DVI d'aquest programa. Consell: Si empreu el sistema de procés de tipografia Omega, heu d'usar un programa especial, com l'«oxdvi». El fitxer DVI no s'inicia amb el preàmbul. El fitxer DVI està corrupte. L'Okular no ha pogut trobar l'epíleg. El caràcter %1 és massa gran, en el fitxer %2 El fitxer de tipus de lletra %1 s'ha pogut obrir i llegir, però el seu format de tipus de lletra no està admès. El fitxer de tipus de lletra %1 està fet malbé, o no es pot obrir o llegir. La pàgina %1 no s'inicia amb l'ordre BOP. La dada «%1» de la mida de paper no s'ha pogut analitzar. L'epíleg conté una ordre diferent de FNTDEF. L'epíleg no comença amb l'ordre POST. L'ordre especial «%1» no està implementada. El fitxer «%1» especificat no existeix. La pila estava buida quan s'ha trobat l'ordre POP. La pila no estava buida quan s'ha trobat l'ordre EOP. S'ha trobat el codi %1 desconegut. La versió del Ghostview que està instal·lada en aquest ordinador no conté cap dels controladors de dispositiu del Ghostview reconeguts per l'Okular. El funcionament del PostScript es desactivarà ara de l'Okular. %1 no esperat al fitxer PK %2 S'ha trobat una ordre de byte incorrecta a la llista VF de macros: %1 S'han emmagatzemat un nombre incorrecte de bits: car. %1, tipus de lletra %2 Heu demanat a l'Okular que situï el punt en el fitxer DVI que correspon a la línia %1 del fitxer TeX %2. Tanmateix, sembla que el fitxer DVI no conté la informació del fitxer font necessària.  apaïsat vertical 