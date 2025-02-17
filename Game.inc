IS_ONLINE    dd FALSE
IS_HOST      dd FALSE
IS_GENERATED dd FALSE

IS_READ_FROM_FILE dd TRUE


IS_CLIENT_GAME   dd   FALSE
;========= Grafic params =============== 
Dayly_Kof        dw     0  
CircleCount      dd     0
LightsCount      dd     0 ;[0-14] 
LightsPositions:
                 dd     ?, ?, ? ;1
                 dd     ?, ?, ? ;2
                 dd     ?, ?, ? ;3
                 dd     ?, ?, ? ;4
                 dd     ?, ?, ? ;5
                 dd     ?, ?, ? ;6
                 dd     ?, ?, ? ;7
                 dd     ?, ?, ? ;8
                 dd     ?, ?, ? ;9
                 dd     ?, ?, ? ;10
                 dd     ?, ?, ? ;11
                 dd     ?, ?, ? ;12
                 dd     ?, ?, ? ;13
                 dd     ?, ?, ? ;14  ;MAX
                 dd     ?, ?, ? ;14  ;save
                 dd     ?, ?, ? ;14  ;save
                 dd     ?, ?, ? ;14  ;save
;=======================================

;==== Worls params ===========
WorldPower       dd      10 
WorldLength      dd      ?     
WorldWidth       dd      ?     
WorldHeight      dd      150  
SizeWorld        dd      ?
;=============================

FileNames        dd      ?
FileCount        dd      ?
ChosenFile       dd      ?


;==== Water params ===========
WaterLvl         dd      60 
;=============================

;==== Sky params =============
;Sky data
SkyLand          dd       ?
;Sky params
SkyLength        dd       ?
SkyWidth         dd       ?
SkyHieght        dd       120  
SizeSky          dd       ? 
;==============================

Inventory           dd    ?
InventorySize       dd    ?
InventoryMainOffset =     9*3*4

SmallCraft          dd    ?
BigCraft            dd    ?
SMALL_CRAFT_SIZE    =     5
BIG_CRAFT_SIZE      =     10

    ; 0     1     2     3      4
    ;       bigBag_craft_arr_example   positions:     
    ; ======= =======
    ; =  1  = =  2  =
    ; =     = =     =         =======
    ; ======= =======         =  0  =
    ; ======= =======  === >  =     =
    ; =  3  = =  4  =         =======
    ; =     = =     = 
    ; ======= =======

;=======================================
ServerIp         db       "134.17.135.124", 0
ServerPortUDP    dd       9999
ServerPortTCP    dd       10000
;=======================================

;=============================================
DEFAULT_WORLD    db       "menu_map.txt", 0 
filenameSky      db       "testSaveSky.txt", 0
;==============================================

;== Controller Global varibales ===============
PlayerPos        dd       0.0, 0.0, 0.0
PlayerTurn       dd       0.0, 0.0, 0.0
;Data for destroying blocks
UnderWater       dd       0

selectCubeData   dd       0.0, 0.0, 0.0
prevCubePos      dd       0, 0, 0

flag             dd       0
;==============================================

;== Animations Global Variables =============
Anim_Hand_Position dd     0.0, 0.0, 0.0
Anim_Hand_Turn     dd     0.0, 0.0, 0.0
XAxisMuliplier     dd     0.1
animate            dd     1
toolInHand         dd     0

prevToolKoeff      dd     0.0

result_pos         dd     0.0, 0.0, 0.0

animVectorOffset   dd     0.0

animate_tool       dd     0

animate_building   dd     0

prev_build_anim_time  dd  0
build_anim_time    dd     0
ready_to_build     dd     1
block_builded      dd     0
;============================================== 

;== Global variables for destroyed blocks =====
destrHeap             dd 0
arrayOfDroppedBlocks  dd 0
destroyedBlocksVector dd 0.0, 0.0, 0.0
;==============================================

;== Global vars for inventory=================
currentChosenCell     dd 0
chosenBlockFromInv    dd 0
currentNumOfHearts    dd 10
;=============================================  

;=========== UI data ========================
UI_MODE            dd        UI_GAME
IS_MAP_READY       dd        FALSE
;==============================================

;========== Other ========================
ZERO_VEC_3       dd        0.0, 0.0, 0.0
;=========================================

blocksTurn       dd        0.0, 0.0, 0.0

;========= Interface ======================
died_text        db        'You Died...'
died_text_len    dd        $ - died_text

Respawn_text     db        'Respawn'
IsPlayerDied     dd        0

set_radius_text  db        'Set the render radius'
set_radius_text_len dd     $ - set_radius_text
RenderRadius_input  db   0,  20   dup  (?)


ConnectionIP_input       db   0, 20   dup  (?)
ConnectionUdpPort_input  db   0, 20   dup  (?)
ConnectionTcpPort_input  db   0, 20   dup  (?)

host_error       dd   0 ;<-- adress to text  (0 - without text)
host_error_len   dd   0 ;<-- len of text 

connect_error     dd   0 ;<-- adress to text  (0 - without text)
connect_error_len dd   0 ;<-- len of text 

not_implemented_text  db 'not implemented yet..'
not_implemented_text_len  dd  $ - not_implemented_text


connection_error  db 'connection failed..'
connection_error_len  dd  $ - connection_error

client_error  db 'client cannot become host..'
client_error_len  dd  $ - client_error


;===========================================

RENDER_RADIUS   dd  20


global_building_time  dd  1000

_IS_SERVER_DEBUD  dd   FALSE

Is_connected  dd  ?


ChatBuffer   db   15 * 5 dup (?)
ChatMessagesCount  dd   0


