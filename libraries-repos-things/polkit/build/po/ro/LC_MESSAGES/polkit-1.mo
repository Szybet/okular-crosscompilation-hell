��          �   %   �      `  !   a  !   �  #   �     �  ,   �          /  >   6  D   u  ;   �  �   �     �  %   �  #   �     
  $     "   2     U  ,   f  ,   �  %   �     �  )        .  c  ;     �	  x  �	  &   -  0   T  ,   �     �  4   �  "        $  M   -  \   {  H   �  �   !     �  <     *   C     n  ,   q  0   �     �  @   �  2   #  )   V  %   �  3   �     �    �     �                                        	                                                                             
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
 [--action-id ACTION] Project-Id-Version: 
Report-Msgid-Bugs-To: 
PO-Revision-Date: 2021-06-04 00:15+0100
Last-Translator: Sergiu Bivol <sergiu@cip.md>
Language-Team: Romanian
Language: ro
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=3; plural=n==1 ? 0 : (n==0 || (n%100 > 0 && n%100 < 20)) ? 1 : 2;
X-Generator: Lokalize 19.12.3
 %s: Argument așteptat după „%s”
 %s: Valoare nevalidă pentru --process „%s”
 %s: Specificator de proces nevalid „%s”
 %s: Subiect nespecificat
 %s: Două argumente așteptate după „--detail”
 %s: Argument neașteptat „%s”
 ACȚIUNE Este necesară autentificarea pentru a rula „$(program)” ca administrator Este necesară autentificarea pentru a rula „$(program)” ca utilizatorul $(user.display) Este necesară autentificarea pentru a rula un program ca alt utilizator Este necesară autentificarea pentru a rula programul polkit exemplificator Frobnicate (user=$(user), user.gecos=$(user.gecos), user.display=$(user.display), program=$(program), command_line=$(command_line)) DENUMIRE_MAGISTRALĂ Închide descriptorul de fișier la înregistrarea agentului Nu înlocui agentul existent dacă există DF Afișează numai informații despre ACȚIUNE Afișează informații detaliate despre acțiune PID[,TIMP_PORNIRE] Înregistrează agentul pentru proprietarul DENUMIRE_MAGISTRALĂ Înregistrează agentul pentru procesul specificat Raportați defecte la: %s
Pagina %s: <%s> Rulează un program ca alt utilizator Rulează programul polkit exemplificator Frobnicate Arată versiunea Utilizare:
  pkcheck [OPȚIUNE...]

Opțiuni pentru ajutor:
  -h, --help                         Arată opțiunile pentru ajutor

Opțiuni pentru aplicație:
  -a, --action-id=ACȚIUNE            Verifică autorizarea pentru efectuarea ACȚIUNII
  -u, --allow-user-interaction       Interacționează cu utilizatorul dacă e necesar
  -d, --details=CHEIE VALOARE        Adaugă (CHEIE, VALOARE) la informațiile despre acțiune
  --enable-internal-agent            Folosește un agent de autentificare intern dacă e necesar
  --list-temp                        Enumeră autorizările temporare pentru sesiunea actuală
  -p, --process=PID[,TIMP_PORNIRE,UID] Verifică autorizarea procesului specificat
  --revoke-temp                      Revocă toate autorizările temporare din sesiunea actuală
  -s, --system-bus-name=DENUMIRE_MAGISTRALĂ                                      Verifică autorizarea proprietarului DENUMIRE_MAGISTRALĂ
  --version                          Arată versiunea

Raportați defecte la: %s
Pagina %s: <%s>
 [--action-id ACȚIUNE] 