��          �   %   �      p  !   q  !   �  #   �  C   �       ,   8     e     �  >   �  D   �  ;     �   J       %     #   :     ^  $   a  "   �     �  ,   �  ,   �  %        :  )   X     �  c  �     �	  �  
  "   �  /   �  $     Y   &     �  8   �  !   �     �  L   �  [   L  U   �  �   �     �  A   �  "        <  $   ?  +   d     �  7   �  .   �  &     0   .  1   _     �  �  �     ^                                       
                                          	                                          %s: Argument expected after `%s'
 %s: Invalid --process value `%s'
 %s: Invalid process specifier `%s'
 %s: Options --process and --system-bus-name are mutually exclusive
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
 [--action-id ACTION] Project-Id-Version: polkit master
Report-Msgid-Bugs-To: https://gitlab.freedesktop.org/polkit/polkit/issues
PO-Revision-Date: 2023-01-28 14:37+0100
Last-Translator: Jürgen Benvenuti <gastornis@posteo.org>
Language-Team: German <gnome-de@gnome.org>
Language: de
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=2; plural=(n != 1);
X-Generator: Poedit 3.1.1
 %s: Argument erwartet nach »%s«
 %s: Ungültiger Wert »%s« für »--process«
 %s: Ungültige Prozessangabe »%s«
 %s: Die Optionen »--process« und »--system-bus-name« schließen sich gegenseitig aus
 %s: Betreff nicht angegeben
 %s: Es werden zwei Argumente nach »--detail« erwartet
 %s: Unerwartetes Argument »%s«
 AKTION Legitimierung ist erforderlich, um »$(program)« als Superuser auszuführen Legitimierung ist erforderlich, um »$(program)« als Benutzer $(user.display) auszuführen Legitimierung ist erforderlich, um ein Programm als ein anderer Benutzer auszuführen Legitimierung ist erforderlich, um das polkit-Beispielprogramm Frobnicate auszuführen (user=$(user), user.gecos=$(user.gecos), user.display=$(user.display), program=$(program), command_line=$(command_line)) BUS_NAME Dateideskriptor (FD) schließen, sobald der Agent registriert ist Vorhandenen Agenten nicht ersetzen FD Nur Informationen zu AKTION ausgeben Detaillierte Aktions-Informationen ausgeben PID[,STARTZEIT] Den Agenten für den Besitzer von BUS_NAME registrieren Agenten des angegebenen Prozesses registrieren Fehler melden an: %s
%s Homepage: <%s> Ein Programm als ein anderer Benutzer ausführen Das polkit-Beispielprogramm Frobnicate ausführen Version anzeigen Aufruf:
  pkcheck [OPTION …]

Hilfeoptionen:
  -h, --help                         Hilfeoptionen anzeigen

Programmoptionen:
  -a, --action-id=ACTION             Legitimierung prüfen, um AKTION durchzuführen
  -u, --allow-user-interaction       Interaktion mit Benutzer, falls erforderlich
  -d, --details=KEY VALUE            (KEY, VALUE) zur Information über die Aktion hinzufügen
  --enable-internal-agent            Internen Legitimierungsagenten verwenden, falls erforderlich
  --list-temp                        Temporäre Legitimierungen für die aktuelle Sitzung auflisten
  -p, --process=PID[,START_TIME,UID] Legitimierung des angegebenen Prozesses prüfen
  --revoke-temp                      Alle temporären Legitimierungen der aktuellen Sitzung aufheben
  -s, --system-bus-name=BUS_NAME     Legitimierung des Eigentümers von BUS_NAME prüfen
  --version                          Version anzeigen

Fehler melden an: %s
%s Homepage: <%s>
 [--action-id AKTION] 