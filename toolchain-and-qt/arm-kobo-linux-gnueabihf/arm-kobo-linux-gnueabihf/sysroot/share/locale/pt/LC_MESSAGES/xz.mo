��   �   0     �    
     |     �  �      ,  �   -  7  �  �  7  -      F   .     u     �  7   �  �   �  �   q  �   $  I      �   j  �   �  �   �  �  ~  H   -     v  E   �  �   <    �  >   �  �   (  9   �  �   �  �   �  �      �   �   �   a!  �   �!  l   �"      #     :#     T#     n#     �#     �#     �#     �#     �#  z   $     �$     �$     �$  .   �$  6   %     ;%     N%     b%     g%  !   }%  !   �%  '   �%     �%     	&     )&  *   H&  /   s&  %   �&     �&  /   �&  ,   '     8'  4   N'  $   �'     �'     �'     �'     �'     (      0(      Q(  h   r(  <   �(     )  :   +)  &   f)  $   �)     �)  2   �)      *  $   *  /   B*  I   r*     �*     �*  3   �*  =   +  6   X+  d   �+  [   �+      P,  O   q,  .   �,  /   �,      -  A   ;-  .   }-  0   �-  )   �-     .     .     ).  ;   C.  <   .  8   �.  6   �.     ,/     I/     d/  (   y/  I   �/  !   �/  '   0  '   60  9   ^0     �0     �0  0   �0     �0  <   �0  -   )1  @   W1  8   �1  >   �1  /   2  7   @2  D   x2  5   �2  &   �2  '   3     B3  %   J3     p3     �3  
   �3  
   �3  
   �3  
   �3  
   �3  	   �3  	   �3  	   �3  	   �3  	   �3  	   �3  	   	4  "   4  *   64     a4  A   u4  Q   �4  *   	5  @   45  !   u5     �5  �  �5  �   �7  2  �8    �<  :   �>  U   �>      Q?     r?  8   �?  �   �?  �   g@    7A  A   VB  �   �B  "  C  �   BD  �  E  R   �F  �   HG  F   �G  �   H  F  �H  A   .J  �   pJ  7   0K  �   hK  �   L  �   �L  /  M  �   NN  �   �N  m   �O     2P     LP     hP     �P  "   �P     �P     �P     �P     Q  {   0Q     �Q     �Q     �Q  5   �Q  D   ,R     qR     �R     �R     �R  /   �R  7   �R  6   /S  "   fS  %   �S  #   �S  /   �S  =   T  3   AT     uT  ;   �T  7   �T     U  G   U  )   gU  (   �U  "   �U     �U     �U     V  *   6V  )   aV  j   �V  D   �V     ;W  <   SW  +   �W  .   �W     �W  7   
X  ,   BX  7   oX  4   �X  T   �X     1Y     IY  0   _Y  C   �Y  <   �Y  y   Z  `   �Z  *   �Z  T   [  5   l[  6   �[  '   �[  D   \  3   F\  6   z\  2   �\     �\  !   �\     ]  ;   .]  F   j]  ?   �]  C   �]     5^  $   P^     u^  ,   �^  _   �^  &   _  /   =_  /   m_  Q   �_  $   �_     `  I   `     c`  =   j`  }   �`  I   &a  <   pa  J   �a  .   �a  8   'b  O   `b  8   �b  %   �b  /   c     ?c  *   Gc     rc     �c  
   �c  
   �c  
   �c  
   �c  
   �c  	   �c  	   �c  	   �c  	   �c  	   �c  	   d  	   d  -   d  7   Id     �d  d   �d  W   �d  ;   We  @   �e  &   �e     �e     �   V                       l   /       K       	          4   ^   O   �      y   E   �      k   @   o      p   J           M   h   �       $       G       %   |   ]       R       s   ~              e      N   #          &   �      Q   �          b           
   \      6   c       _           Y       "   i   >   .   S                  w          t           u   D       5   r       X               q   �      )      �           !   1   �   A               (       :   C   F   }   B   H   m   +       '   �               f   Z           �      �      �   �                  {   �             �   <   a   �   �   -   *   `   g   n   �   0           ?                   T          z           �       L      �       ,       3   x       �   �   �   �   d   �   j       I   �      [   �   �   9   �   2   7      8   W              U   ;      =   P           v      �e     f  �  �  �  �  �    f         
   ����$f  2          ����Wf  0               �����f         	   �����f  G          �����f  2               ���� 
  --delta[=OPTS]      Delta filter; valid OPTS (valid values; default):
                        dist=NUM   distance between bytes being subtracted
                                   from each other (1-256; 1) 
  --lzma1[=OPTS]      LZMA1 or LZMA2; OPTS is a comma-separated list of zero or
  --lzma2[=OPTS]      more of the following options (valid values; default):
                        preset=PRE reset options to a preset (0-9[e])
                        dict=NUM   dictionary size (4KiB - 1536MiB; 8MiB)
                        lc=NUM     number of literal context bits (0-4; 3)
                        lp=NUM     number of literal position bits (0-4; 0)
                        pb=NUM     number of position bits (0-4; 2)
                        mode=MODE  compression mode (fast, normal; normal)
                        nice=NUM   nice length of a match (2-273; 64)
                        mf=NAME    match finder (hc3, hc4, bt2, bt3, bt4; bt4)
                        depth=NUM  maximum search depth; 0=automatic (default) 
  --x86[=OPTS]        x86 BCJ filter (32-bit and 64-bit)
  --powerpc[=OPTS]    PowerPC BCJ filter (big endian only)
  --ia64[=OPTS]       IA-64 (Itanium) BCJ filter
  --arm[=OPTS]        ARM BCJ filter (little endian only)
  --armthumb[=OPTS]   ARM-Thumb BCJ filter (little endian only)
  --sparc[=OPTS]      SPARC BCJ filter
                      Valid OPTS for all BCJ filters:
                        start=NUM  start offset for conversions (default=0) 
 Basic file format and compression options:
 
 Custom filter chain for compression (alternative for using presets): 
 Operation modifiers:
 
 Other options:
 
With no FILE, or when FILE is -, read standard input.
       --block-list=SIZES
                      start a new .xz block after the given comma-separated
                      intervals of uncompressed data       --block-size=SIZE
                      start a new .xz block after every SIZE bytes of input;
                      use this to set the block size for threaded compression       --flush-timeout=TIMEOUT
                      when compressing, if more than TIMEOUT milliseconds has
                      passed since the previous flush and reading more input
                      would block, all pending data is flushed out       --ignore-check  don't verify the integrity check when decompressing       --info-memory   display the total amount of RAM and the currently active
                      memory usage limits, and exit       --memlimit-compress=LIMIT
      --memlimit-decompress=LIMIT
  -M, --memlimit=LIMIT
                      set memory usage limit for compression, decompression,
                      or both; LIMIT is in bytes, % of RAM, or 0 for defaults       --no-adjust     if compression settings exceed the memory usage limit,
                      give an error instead of adjusting the settings downwards       --no-sparse     do not create sparse files when decompressing
  -S, --suffix=.SUF   use the suffix `.SUF' on compressed files
      --files[=FILE]  read filenames to process from FILE; if FILE is
                      omitted, filenames are read from the standard input;
                      filenames must be terminated with the newline character
      --files0[=FILE] like --files but use the null character as terminator       --robot         use machine-parsable messages (useful for scripts)       --single-stream decompress only the first stream, and silently
                      ignore possible remaining input data       CheckVal %*s Header  Flags        CompSize    MemUsage  Filters   -0 ... -9           compression preset; default is 6; take compressor *and*
                      decompressor memory usage into account before using 7-9!   -F, --format=FMT    file format to encode or decode; possible values are
                      `auto' (default), `xz', `lzma', and `raw'
  -C, --check=CHECK   integrity check type: `none' (use with caution),
                      `crc32', `crc64' (default), or `sha256'   -Q, --no-warn       make warnings not affect the exit status   -T, --threads=NUM   use at most NUM threads; the default is 1; set to 0
                      to use as many threads as there are processor cores   -V, --version       display the version number and exit   -e, --extreme       try to improve compression ratio by using more CPU time;
                      does not affect decompressor memory requirements   -h, --help          display the short help (lists only the basic options)
  -H, --long-help     display this long help and exit   -h, --help          display this short help and exit
  -H, --long-help     display the long help (lists also the advanced options)   -k, --keep          keep (don't delete) input files
  -f, --force         force overwrite of output file and (de)compress links
  -c, --stdout        write to standard output and don't delete input files   -q, --quiet         suppress warnings; specify twice to suppress errors too
  -v, --verbose       be verbose; specify twice for even more verbose   -z, --compress      force compression
  -d, --decompress    force decompression
  -t, --test          test compressed file integrity
  -l, --list          list information about .xz files   Blocks:
    Stream     Block      CompOffset    UncompOffset       TotalSize      UncompSize  Ratio  Check   Blocks:             %s
   Check:              %s
   Compressed size:    %s
   Memory needed:      %s MiB
   Minimum XZ Utils version: %s
   Number of files:    %s
   Ratio:              %s
   Sizes in headers:   %s
   Stream padding:     %s
   Streams:
    Stream    Blocks      CompOffset    UncompOffset        CompSize      UncompSize  Ratio  Check      Padding   Streams:            %s
   Uncompressed size:  %s
  Operation mode:
 %s MiB of memory is required. The limit is %s. %s MiB of memory is required. The limiter is disabled. %s file
 %s files
 %s home page: <%s>
 %s:  %s: Cannot remove: %s %s: Cannot set the file group: %s %s: Cannot set the file owner: %s %s: Cannot set the file permissions: %s %s: Closing the file failed: %s %s: Error reading filenames: %s %s: Error seeking the file: %s %s: File already has `%s' suffix, skipping %s: File has setuid or setgid bit set, skipping %s: File has sticky bit set, skipping %s: File is empty %s: File seems to have been moved, not removing %s: Filename has an unknown suffix, skipping %s: Filter chain: %s
 %s: Input file has more than one hard link, skipping %s: Invalid argument to --block-list %s: Invalid filename suffix %s: Invalid multiplier suffix %s: Invalid option name %s: Invalid option value %s: Is a directory, skipping %s: Is a symbolic link, skipping %s: Not a regular file, skipping %s: Null character found when reading filenames; maybe you meant to use `--files0' instead of `--files'? %s: Options must be `name=value' pairs separated with commas %s: Read error: %s %s: Seeking failed when trying to create a sparse file: %s %s: Too many arguments to --block-list %s: Too small to be a valid .xz file %s: Unexpected end of file %s: Unexpected end of input when reading filenames %s: Unknown file format type %s: Unsupported integrity check type %s: Value is not a non-negative decimal integer %s: With --format=raw, --suffix=.SUF is required unless writing to stdout %s: Write error: %s %s: poll() failed: %s --list does not support reading from standard input --list works only on .xz files (--format=xz or --format=auto) 0 can only be used as the last element in --block-list Adjusted LZMA%c dictionary size from %s MiB to %s MiB to not exceed the memory usage limit of %s MiB Adjusted the number of threads from %s to %s to not exceed the memory usage limit of %s MiB Cannot establish signal handlers Cannot read data from standard input when reading filenames from standard input Compressed data cannot be read from a terminal Compressed data cannot be written to a terminal Compressed data is corrupt Compression and decompression with --robot are not supported yet. Compression support was disabled at build time Decompression support was disabled at build time Decompression will need %s MiB of memory. Disabled Empty filename, skipping Error creating a pipe: %s Error getting the file status flags from standard input: %s Error getting the file status flags from standard output: %s Error restoring the O_APPEND flag to standard output: %s Error restoring the status flags to standard input: %s Failed to enable the sandbox File format not recognized Internal error (bug) LZMA1 cannot be used with the .xz format Mandatory arguments to long options are mandatory for short options too.
 Maximum number of filters is four Memory usage limit for compression:     Memory usage limit for decompression:   Memory usage limit is too low for the given filter setup. Memory usage limit reached No No integrity check; not verifying file integrity None Only one file can be specified with `--files' or `--files0'. Report bugs to <%s> (in English or Finnish).
 Strms  Blocks   Compressed Uncompressed  Ratio  Check   Filename Switching to single-threaded mode due to --flush-timeout THIS IS A DEVELOPMENT VERSION NOT INTENDED FOR PRODUCTION USE. The .lzma format supports only the LZMA1 filter The environment variable %s contains too many arguments The exact options of the presets may vary between software versions. The filter chain is incompatible with --flush-timeout The sum of lc and lp must not exceed 4 Total amount of physical memory (RAM):  Totals: Try `%s --help' for more information. Unexpected end of input Unknown error Unknown-11 Unknown-12 Unknown-13 Unknown-14 Unknown-15 Unknown-2 Unknown-3 Unknown-5 Unknown-6 Unknown-7 Unknown-8 Unknown-9 Unsupported LZMA1/LZMA2 preset: %s Unsupported filter chain or filter options Unsupported options Unsupported type of integrity check; not verifying file integrity Usage: %s [OPTION]... [FILE]...
Compress or decompress FILEs in the .xz format.

 Using a preset in raw mode is discouraged. Valid suffixes are `KiB' (2^10), `MiB' (2^20), and `GiB' (2^30). Writing to standard output failed Yes Project-Id-Version: xz 5.2.4
Report-Msgid-Bugs-To: lasse.collin@tukaani.org
PO-Revision-Date: 2019-09-27 08:08+0100
Last-Translator: Pedro Albuquerque <palbuquerque73@gmail.com>
Language-Team: Portuguese <translation-team-pt@lists.sourceforge.net>
Language: pt
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
Plural-Forms: nplurals=2; plural=(n != 1);
X-Generator: Gtranslator 2.91.7
 
  --delta[=OPÇÕES]    filtro delta; OPÇÕES válidas (valores válidos,
                      predefinição):
                        dist=NÚM   distância entre bytes a serem subtraídos
                                   de cada um (1-256; 1) 
  --lzma1[=OPÇÕES]    LZMA1 ou LZMA2; OPÇÕES é uma lista separada por vírgulas
                      de zero ou mais das opções abaixo (valores válidos,
  --lzma2[=OPÇÕES]    predefinição):
                        preset=PRE repõe as opções para predefinição (0-9[e])
                        dict=NÚM   tamanho do dicionário (4KiB - 1536MiB; 8MiB)
                        lc=NÚM     número de bits de contexto literal (0-4; 3)
                        lp=NÚM     número de bits de posição literal (0-4; 0)
                        pb=NÚM     número de bits de posição (0-4; 2)
                        mode=MODO  modo de compressão (fast, normal; normal)
                        nice=NÚM   tamanho agradável de correspondência (2-273;
                                   64)
                        mf=NOME    localizador de correspondência (hc3, hc4,
                                   bt2, bt3, bt4; bt4)
                        depth=NUM  máximo de profundidade de pesquisa;
                                   0=automatic (predefinição) 
  --x86[=OPÇÕES]      filtro BCJ x86 (32 bits e 64 bits)
  --powerpc[=OPÇÕES]  filtro BCJ PowerPC (só big endian)
  --ia64[=OPÇÕES]     filtro BCJ IA-64 (Itanium)
  --arm[=OPÇÕES]      filtro BCJ ARM (só little endian)
  --armthumb[=OPÇÕES] filtro BCJ ARM-Thumb (só little endian)
  --sparc[=OPÇÕES]    filtro BCJ SPARC
                      OPÇÕES válidas para todos os filtros BCJ:
                        start=NUM  desvio inicial para conversões
                                   (predefinição=0) 
 Opções básicas de formato e compressão de ficheiro:
 
 Cadeia de filtros personalizada para compressão (alternativa às predefinições): 
 Modificadores de operações:
 
 Outras opções:
 
Sem FICH, ou quando FICH é -, lê da entrada padrão.
       --block-list=TAM
                      inicia um novo bloco .xz após os intervalos dados,
                      separados por vírgulas, de dados descomprimidos       --block-size=TAM
                      inicia novo bloco .xz após cada TAM bytes de entrada;
                      use para definir o tamanho de bloco para compressão com
                      linhas       --flush-timeout=EXPIRA
                      ao comprimir, se mais de EXPIRA milissegundos tiverem
                      passado desde o despejo anterior e ler mais dados da
                      entrada bloquearia, todos os dados pendentes serão
                      despejados       --ignore-check  não verifica a integridade ao descomprimir       --info-memory   mostra a quantidade total de RAM e os limites de uso
                      de memória actualmente activos e sai       --memlimit-compress=LIMITE
      --memlimit-decompress=LIMITE
  -M, --memlimit=LIMITE
                      define o limite de uso de memória para compressão,
                      descompressão ou ambos; LIMITE é em bytes, % de RAM ou 0
                      para predefinições       --no-adjust     se as configurações de compressão excederem o limite de
                      uso de memória, devolve um erro em vez de reduzir as
                      configurações       --no-sparse     não cria ficheiros escassos ao descomprimir
  -S, --suffix=.SUF   usa o sufixo ".SUF" em ficheiros comprimidos
      --files[=FICH]  lê nomes de ficheiros para processar de FICH;
                      se FICH for omitido, os nomes de ficheiros são
                      lidos da entrada padrão; os nomes de ficheiros
                      devem ser terminados com o carácter de nova linha
      --files0[=FICH] igual a --files, mas usa o carácter nulo como terminador       --robot         usa mensagens analisáveis por máquina (útil para scripts)       --single-stream descomprime só o primeiro fluxo e ignora silenciosamente
                      possíveis dados de entrada restantes       ValVerif %*s Cabeç.  Band.        Tam.Comp     UsoMem.  Filtros   -0 ... -9           predefinição de compressão; a predefinição é 6; tenha em
                      conta o uso de memória do compressor *e* descompressor
                      antes de usar 7-9!   -F, --format=FMT    formato de ficheiro a codificar ou descodificar; os
                      valores possíveis são "auto" (predefinição), "xz",
                      "lzma" e "raw"
  -C, --check=TESTE   tipo de teste de integridade: "none" (cuidado!),
                      "crc32", "crc64" (predefinição) ou "sha256"   -Q, --no-warn       fazer avisos não afecta o estado da saída   -T, --threads=NÚM   usa no máximo NÚM linhas; a predefinição é 1; defina para
                      0 para usar tantas linhas como núcleos de processadores
                      haja   -V, --version       mostra o número da versão e sai   -e, --extreme       tenta melhorar o rácio de compressão usando mais tempo de
                      CPU; não afecta os requisitos de memória do descompressor   -h, --help          mostra a ajuda curta (lista só as opções básicas)
  -H, --long-help     mostra esta mensagem de ajuda e sai   -h, --help          mostra esta mensagem de ajuda e sai
  -H, --long-help     mostra a ajuda longa (lista também as opções avançadas)   -k, --keep          mantém (não elimina) os ficheiros de entrada
  -f, --force         força a sobreposição do ficheiro de saída e a 
                      (des)compressão de ligações
  -c, --stdout        escreve na saída padrão e não elimina os ficheiros de
                      entrada   -q, --quiet         suprime avisos, use duas vezes para suprimir também erros
  -v, --verbose       é verboso; use duas vezes para ainda mais verbosidade   -z, --compress      força a compressão
  -d, --decompress    força a descompressão
  -t, --test          testa a integridade do ficheiro comprimido
  -l, --list          lista informações sobre ficheiros .xz   Blocos:
     Fluxo     Bloco      DesvioComp   DesvioDescomp       Tam.Total      TamDescomp  Rácio  Verif   Blocos:             %s
   Verificação:        %s
   Tam. comprimido:    %s
   Memória requerida:  %s MiB
   Versão mínima do XZ Utils: %s
   Nº. de ficheiros:   %s
   Rácio:              %s
   Tam. em cabeçalhos: %s
   Espaço do fluxo:    %s
   Fluxos:
    Fluxo     Blocos      DesvioComp   DesvioDescomp        Tam.Comp      TamDescomp  Rácio  Verif       Espaço   Fluxos:             %s
   Tam. descomprimido: %s
  Modo de operação:
 São necessários %s MiB de memória. O limite é %s. São necessários %s MiB de memória. O limitador está desactivado. %s ficheiro
 %s ficheiros
 Página inicial %s: <%s>
 %s:  %s: impossível remover: %s %s: impossível definir o grupo do ficheiro: %s %s: impossível definir o proprietário do ficheiro: %s %s: impossível definir as permissões do ficheiro: %s %s: falha ao fechar o ficheiro: %s %s: erro ao ler nomes de ficheiro: %s %s: erro ao procurar o ficheiro: %s %s: o ficheiro já tem o sufixo "%s", a ignorar %s: o ficheiro tem o bit setuid ou setgid definido, a ignorar %s: o ficheiro tem o bit sticky definido, a ignorar %s: o ficheiro está vazio %s: o ficheiro parece ter sido movido, não será eliminado %s: nome de ficheiro com sufixo desconhecido, a ignorar %s: cadeia de filtros: %s
 %s: o ficheiro de entrada tem mais de uma ligação absoluta, a ignorar %s: argumento inválido para --block-list %s: sufixo de nome de ficheiro inválido %s: sufixo multiplicador inválido %s: nome de opção inválido %s: valor de opção inválido %s: é uma pasta, a ignorar %s: é uma ligação simbólica, a ignorar %s: não é um ficheiro normal, a ignorar %s: encontrado carácter nulo ao ler nomes de ficheiro; talvez queira usar "--files0" em vez de "--files"? %s: as opções devem ser pares "nome=valor" separados por vírgulas %s: erro de leitura: %s %s: falha na procura ao tentar criar um ficheiro escasso: %s %s: demasiados argumentos para --block-list %s: muito pequeno para um ficheiro .xz válido %s: fim de ficheiro inesperado %s: fim de entrada inesperado ao ler nomes de ficheiros %s: tipo de formato de ficheiro desconhecido %s: tipo de verificação de integridade não suportado %s: o valor não é um inteiro decimal não-negativo %s: com --format=raw, --suffix=.SUF é requerido, a menos que seja escrito em stdout %s: erro de escrita: %s %s: poll() falhou: %s --list não suporta a leitura da entrada padrão --list só funciona em ficheiros .xz (--format=xz ou --format=auto) 0 só pode ser usado como o último elemento em --block-list Ajustado o tamanho de dicionário de LZMA%c de %s MiB para %s MiB para não exceder o limite de uso de memória de %s MiB Ajustado o número de linhas de %s de %s para não exceder o limite de uso de memória de %s MiB Impossível estabelecer gestores de sinais Impossível ler dados da entrada padrão ao ler nomes de ficheiro da entrada padrão Dados comprimidos não podem ser lidos de um terminal Dados comprimidos não podem ser escritos num terminal Os dados comprimidos estão corrompidos Compressão e descompressão com --robot ainda não são suportadas. O suporte a compressão foi desactivado ao compilar O suporte a descompressão foi desactivado ao compilar A descompressão precisará de %s MiB de memória. Desactivado Nome de ficheiro vazio, a ignorar Erro ao criar um túnel: %s Erro ao obter as bandeiras de estado da entrada padrão: %s Erro ao obter as bandeiras de estado do ficheiro da saída padrão: %s Erro ao restaurar a bandeira O_APPEND para a saída padrão: %s Erro ao restaurar as bandeiras de estado para a entrada padrão: %s Falha ao activar a Sandbox Formato de ficheiro não reconhecido Erro interno (erro) Impossível utilizar LZMA1 com o formato .xz Argumentos obrigatórios para opções longas são também obrigatórios para
opções curtas.
 O número máximo de filtros é quatro Limite de uso de memória para compressão:     Limite de uso de memória para descompressão:  O limite de uso de memória é baixo demais para a configuração de filtro dada. Limite de uso de memória alcançado Não Sem teste de integridade; a integridade do ficheiro não será verificada Nenhum Só pode especificar um ficheiro com "--files" ou "--files0". Reporte erros em <%s> (em inglês ou finlandês).
Relate erros de tradução em <translation-team-pt@lists.sourceforge.net>.
 Fluxos Blocos   Comprimido Descomprimido Rácio  Verif.  Nome de ficheiro A mudar para o modo de linha única devido a --flush-timeout ESTA É UMA VERSÃO DE DESENVOLVIMENTO NÃO DESTINADA A USO EM PRODUÇÃO. O formato .lzma tem só suporta o filtro LZMA1 A variável de ambiente %s contém demasiados argumentos As opções exactas de predefinições podem variar entre versões do programa. A cadeia de filtros é incompatível com --flush-timeout A soma de lc e lp não deve exceder 4 Quantidade total de memória física (RAM):     Totais: Tente "%s --help" para mais informações. Fim de entrada inesperado Erro desconhecido SemNome-11 SemNome-12 SemNome-13 SemNome-14 SemNome-15 SemNome-2 SemNome-3 SemNome-5 SemNome-6 SemNome-7 SemNome-8 SemNome-9 Predefinição LZMA1/LZMA2 não suportada: %s Opções de filtro ou cadeia de filtros não suportadas Opções não suportadas Tipo de verificação de integridade não suportada; a integridade do ficheiro não será verificada Uso: %s [OPÇÕES]... [FICHEIRO]...
Comprime ou descomprime FICHEIROs no formato .xz.

 O uso de uma predefinição em modo bruto é desencorajado. Sufixos válidos são "KiB" (2^10), "MiB" (2^20) e "GiB" (2^30). A escrita para a saída padrão falhou Sim PRIu32 PRIu64 Using up to % threads. The selected match finder requires at least nice=% Value of the option `%s' must be in the range [%, %] A usar até % linhas. O localizador de correspondência seleccionado requer pelo menos nice=% O valor da opção "%s" deve estar no intervalo [%, %] 