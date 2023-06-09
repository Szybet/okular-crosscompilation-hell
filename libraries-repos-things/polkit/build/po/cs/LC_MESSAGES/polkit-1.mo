��          �   %   �      `  !   a  !   �  #   �     �  ,   �          /  >   6  D   u  ;   �  �   �     �  %   �  #   �     
  $     "   2     U  ,   f  ,   �  %   �     �  )        .  c  ;     �	  �  �	  (   B  3   k  .   �     �  6   �  %   !     G  P   P  [   �  J   �  �   H       #   %  $   I     n  "   q  &   �     �  <   �  &     /   6  $   f  ,   �     �  �  �     �                                        	                                                                             
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
PO-Revision-Date: 2018-09-25 16:34+0200
Last-Translator: Marek Černocký <marek@manet.cz>
Language-Team: čeština <gnome-cs-list@gnome.org>
Language: cs
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=3; plural=(n==1) ? 0 : (n>=2 && n<=4) ? 1 : 2;
X-Generator: Gtranslator 2.91.7
 %s: po „%s“ je očekáván argument
 %s: neplatná hodnota „%s“ pro „--process“
 %s: neplatný identifikátor procesu „%s“
 %s: není určen předmět
 %s: po „--detail“ jsou očekávány dva argumenty
 %s: neočekávaný argument „%s“
 ČINNOST Pro spuštění „$(program)“ pod účtem správce je vyžadováno ověření Pro spuštění „$(program)“ pod uživatelem $(user.display) je vyžadováno ověření Pro spuštění programu pod jiným uživatelem je vyžadováno ověření Pro spuštění ukázkového programu polkit Frobnicate je vyžadováno ověření (user=$(user), user.gecos=$(user.gecos), user.display=$(user.display), program=$(program), command_line=$(command_line)) NÁZEV_SBĚRNICE Uzavřít FD při registraci agenta Nenahrazovat již bežícího agenta FD Pouze vypsat informace o ČINNOSTI Vypsat podrobné informace o činnosti PID[,ČAS_SPUŠTĚNÍ] Registrovat agenta pro vlastníka sběrnice NÁZEV_SBĚRNICE Registrovat agenta pro určený proces Chyby hlaste na: %s
%s domovská stránka: <%s> Spustit program jako jiný uživatel Spustit ukázkový program polkit Frobnicate Vypsat verzi Použití:
  pkcheck [VOLBY…]

Volby nápovědy:
  -h, --help                         Zobrazit nápovědu k volbám

Volby aplikace:
  -a, --action-id=ČINNOST            Zkontrolovat oprávnění pro vykonání ČINNOSTI
  -u, --allow-user-interaction       Povolit interakci s uživatelem, pokud je potřeba
  -d, --details=KLÍČ HODNOTA         Přidat (KLÍČ, HODNOTA) do informací o činnosti
  --enable-internal-agent            Použít interního ověřovacího agenta, pokud je potřeba
  --list-temp                        Vypsat dočasná oprávnění pro aktuální sezení
  -p, --process=PID[,ČAS_SPUŠTĚNÍ]   Zkontrolovat oprávnění vybraného procesu
  --revoke-temp                      Zrušit všechna dočasná oprávnění pro aktuální sezení
  -s, --system-bus-name=NÁZEV_SBĚRNICE
                                     Zkontrolovat oprávnění vlastníka sběrnice NÁZEV_SBĚRNICE
  --version                          Vypsat verzi

Chyby hlaste na: %s
%s domovská stránka: <%s>
 [--action-id ČINNOST] 