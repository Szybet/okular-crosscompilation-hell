��          �   %   �      `  !   a  !   �  #   �     �  ,   �          /  >   6  D   u  ;   �  �   �     �  %   �  #   �     
  $     "   2     U  ,   f  ,   �  %   �     �  )        .  c  ;     �	  ~  �	      3  ,   T  )   �     �  )   �     �       =     L   T  =   �  �   �     �  "   �  *   �     �  !   �  "        A  *   P  )   {  0   �  "   �  .   �     (  �  ;     �                                        	                                                                             
       %s: Argument expected after `%s'
 %s: Invalid --process value `%s'
 %s: Invalid process specifier `%s'
 %s: Subject not specified
 %s: Two arguments expected after `--detail'
 %s: Unexpected argument `%s'
 ACTION Authentication is needed to run `$(program)' as the super user Authentication is needed to run `$(program)' as user $(user.display) Authentication is required to run a program as another user Authentication is required to run the polkit example program Frobnicate (user=$(user), user.gecos=$(user.gecos), user.display=$(user.display), program=$(program), command_line=$(command_line)) BUS_NAME Close FD when the agent is registered Don't replace existing agent if any FD Only output information about ACTION Output detailed action information PID[,START_TIME] Register the agent for the owner of BUS_NAME Register the agent for the specified process Report bugs to: %s
%s home page: <%s> Run a program as another user Run the polkit example program Frobnicate Show version Usage:
  pkcheck [OPTION...]

Help Options:
  -h, --help                         Show help options

Application Options:
  -a, --action-id=ACTION             Check authorization to perform ACTION
  -u, --allow-user-interaction       Interact with the user if necessary
  -d, --details=KEY VALUE            Add (KEY, VALUE) to information about the action
  --enable-internal-agent            Use an internal authentication agent if necessary
  --list-temp                        List temporary authorizations for current session
  -p, --process=PID[,START_TIME,UID] Check authorization of specified process
  --revoke-temp                      Revoke all temporary authorizations for current session
  -s, --system-bus-name=BUS_NAME     Check authorization of owner of BUS_NAME
  --version                          Show version

Report bugs to: %s
%s home page: <%s>
 [--action-id ACTION] Project-Id-Version: polkit
Report-Msgid-Bugs-To: 
PO-Revision-Date: 2020-05-09 18:42+0200
Last-Translator: Karl Ove Hufthammer <karl@huftis.org>
Language-Team: Norwegian Nynorsk <l10n-no@lister.huftis.org>
Language: nn
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=2; plural=(n != 1);
X-Generator: Lokalize 20.04.0
 %s: Venta argument etter «%s»
 %s: Ugyldig verdi til «--process»: «%s»
 %s: Ugyldig prosess-spesifikasjon «%s»
 %s: Prosess må oppgjevast
 %s: Venta to argument etter «--detail»
 %s: Uventa argument «%s»
 HANDLING Krev autentisering for å køyra «$(program)» som rotbrukar Krev autentisering for å køyra «$(program)» som brukaren $(user.display) Krev autentisering for å køyra program som ein annan brukar Krev autentisering for å køyra polkit sitt eksempel­program Frobnicate (user=$(user), user.gecos=$(user.gecos), user.display=$(user.display), program=$(program), command_line=$(command_line)) BUSSNAMN Lukk FD når agenten er registrert Ikkje erstatt eventuell eksisterande agent FD Vis berre informasjon om HANDLING Vis detaljert handlingsinformasjon PID[,STARTTID] Registrer agenten for eigaren til BUSSNAMN Registrer agenten for den valde prosessen Meld frå om feil til: %s
Heimesida til %s: <%s> Køyr program som ein annan brukar Køyr polkit sitt eksempel­program Frobnicate Vis programversjon BRUK:
  pkcheck [VAL …]

Hjelpeval:
  -h, --help                         Vis argumentoversikt

Programval:
  -a, --action-id=HANDLING           Kontroller godkjenning for utføring av HANDLING
  -u, --allow-user-interaction       Samhandla om nødvendig med brukaren
  -d, --details=NØKKEL VERDI         Legg (NØKKEL, VERDI) til informasjon om handlinga
  --enable-internal-agent            Bruk om nødvendig intern autentiserings­agent
  --list-temp                        Vis oversikt over mellombelse godkjenningar for gjeldande økt
  -p, --process=PID[,STARTTID,UID]   Kontroller godkjenning til vald prosess
  --revoke-temp                      Kall tilbake alle mellombelse godkjenningar for gjeldande økt
  -s, --system-bus-name=BUSSNAMN     Kontroller godkjenning til eigaren av BUSSNAMN
  --version                          Vis programversjon

Meld frå om feil til: %s
Heimesida til %s: <%s>
 [--action-id HANDLING] 