Ţ          ô   %   Ě      `  !   a  !     #   Ľ     É  ,   ä          /  >   6  D   u  ;   ş  Ŕ   ö     ˇ  %   Ŕ  #   ć     
  $     "   2     U  ,   f  ,     %   Ŕ     ć  )        .  c  ;     	  Ľ  ´	  X   Z  V   ł  \   
  =   g  ~   Ľ  D   $     i                    '     H  m   Q  c   ż     #  q   &  l          o     {     `     T   c  G   ¸  +        ,     8                                        	                                                                             
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
 [--action-id ACTION] Project-Id-Version: polkit master
Report-Msgid-Bugs-To: https://gitlab.freedesktop.org/polkit/polkit/issues
PO-Revision-Date: 2022-09-14 09:24+0200
Last-Translator: Temuri Doghonadze <temuri.doghonadze@gmail.com>
Language-Team: Georgian (<nothing>)
Language: ka
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=2; plural=(n != 1);
X-Generator: Poedit 3.1.1
 %s: `%s'-ááĄ á¨ááááá áááááááá áá ááŁáááá˘áĄ
 %s: --process -ááĄ áá ááĄáŹáá á áááá¨ááááááá `%s'
 %s: áá ááŞááĄááĄ áá ááĄáŹáá á ááááááááááá: %s
 %s: áááá ááááááááŁáá áá áá
 %s: `--detail'-ááĄ á¨ááááá áĄáá­áá áá áá á áá ááŁáááá˘ááĄ ááááááá
 %s: áááŁááááááá áá ááŁáááá˘á `%s'
 [áĽáááááá] `$(program)'-ááĄ áĄáŽáá áĄááŽáááá ááá¨áááááĄ áááááá˘ááááŞáá áĄá­áá áááá `$(program)'-ááĄ $(user.display)-áá ááá¨áááááĄ áááááá˘ááááŞáá áĄá­áá áááá áá ááá ááááĄ áĄáŽáá áĄááŽáááá ááá¨áááááĄ áááááá˘ááááŞáá áĄá­áá áááá Polkit áááááááááĄ áá ááá ááááĄ Frobnicate-ááĄ áááĄáá¨ááááá áĄáá­áá áá ááá˘áá ááááŞáá (user=$(user), user.gecos=$(user.gecos), user.display=$(user.display), program=$(program), command_line=$(command_line)) BUS_NAME FD-ááĄ áááŽáŁá áá ááááá˘ááĄ á ááááĄá˘á ááŞáááĄ á¨ááááá ááŁ ááááá˘á áá áĄáááááĄ, ááĄ áá  áŠááááŞáááááá FD ááá¤áá áááŞáááĄ ááŽáááá ACTION-ááĄ á¨ááĄááŽáá ááááá˘ááá áĽáááááááĄ ááá˘áááŁá á ááá¤áá áááŞáááĄ ááááá˘ááá PID[,START_TIME] ááááá˘ááĄ á ááááĄá˘á ááŞáá BUS_NAME-ááĄ áá¤áááááááĄááááĄ ááááá˘ááĄ á ááááĄá˘á ááŞáá ááááááááŁáá áá ááŞááĄááĄááááĄ á¨ááŞááááááá áááĄáŹáá áá: %s
%s ááááááá áá: <%s> áá ááá ááááĄ áĄáŽáá áĄááŽáááá ááá¨áááá áááŁá¨ááá polkit-ááĄ áááááááá Frobnicate ááá áĄáááĄ áŠáááááá ááááá§ááááá:
   pkcheck [OPTION...]

áááŽááá ááááĄ ááá áááá˘á ááá:
   -h, --help áááŽááá ááááĄ ááá áááá˘á ááááĄ áŠáááááá

áááááŞáŽááááĄ ááá áááá˘á ááá:
   -a, --action-id=ACTION ACTION-ááĄ á¨ááĄááĄá áŁáááááá ááá˘áá ááááŞáááĄ á¨ááááŹáááá 
   -u, --allow-user-interaction áĄáá­áá áááááĄ á¨ááááŽááááá¨á ááááŽááá ááááááá áŁá ááá áááá
   -d, --details=KEY VALUE áĽáááááááĄ á¨ááĄááŽáá ááá¤áá áááŞáááĄááááĄ (KEY, VALUE) ááááá˘ááá
   --enable-internal-agent áĄáá­áá áááááĄ á¨ááááŽááááá¨á á¨ááá áááááá˘áá¤ááááŞáááĄ ááááá˘ááĄ ááááá§ááááá
   --list-temp áááááááá á áĄááĄáááĄááááĄ áá áááááá ááá˘áá ááááŞáááááĄ áĄáá 
   -p, --process=PID[,START_TIME,UID] ááááááááŁáá áá ááŞááĄááĄ ááá˘áá ááááŞáááĄ á¨ááááŹáááá
   --revoke-temp áááááááá á áĄááĄáááĄááááĄ á§áááá áá áááááá ááá˘áá ááááŞáááĄ áááŁáĽáááá 
   -s, --system-bus-name=BUS_NAME BUS_NAME-ááĄ áá¤áááááááĄ ááá˘áá ááááŞáááĄ á¨ááááŹáááá
   --version ááá áĄáááĄ áŠáááááá

á¨ááá˘á§áááááá á¨ááŞáááááááĄ á¨ááĄááŽáá: %s
%s áááááá á áááá áá: <%s>
 [--action-id ACTION] 