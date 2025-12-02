set moduleName myproject
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {myproject}
set C_modelType { void 0 }
set C_modelArgList {
	{ layer1_input_V int 1920 regular {pointer 0}  }
	{ layer7_out_0_V int 16 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "layer1_input_V", "interface" : "wire", "bitwidth" : 1920, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]},{"low":16,"up":31,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]},{"low":32,"up":47,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]},{"low":48,"up":63,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]},{"low":64,"up":79,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]},{"low":80,"up":95,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]},{"low":96,"up":111,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]},{"low":112,"up":127,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]},{"low":128,"up":143,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 8,"up" : 8,"step" : 2}]}]},{"low":144,"up":159,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 9,"up" : 9,"step" : 2}]}]},{"low":160,"up":175,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 10,"up" : 10,"step" : 2}]}]},{"low":176,"up":191,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 11,"up" : 11,"step" : 2}]}]},{"low":192,"up":207,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 12,"up" : 12,"step" : 2}]}]},{"low":208,"up":223,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 13,"up" : 13,"step" : 2}]}]},{"low":224,"up":239,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 14,"up" : 14,"step" : 2}]}]},{"low":240,"up":255,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 15,"up" : 15,"step" : 2}]}]},{"low":256,"up":271,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 16,"up" : 16,"step" : 2}]}]},{"low":272,"up":287,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 17,"up" : 17,"step" : 2}]}]},{"low":288,"up":303,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 18,"up" : 18,"step" : 2}]}]},{"low":304,"up":319,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 19,"up" : 19,"step" : 2}]}]},{"low":320,"up":335,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 20,"up" : 20,"step" : 2}]}]},{"low":336,"up":351,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 21,"up" : 21,"step" : 2}]}]},{"low":352,"up":367,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 22,"up" : 22,"step" : 2}]}]},{"low":368,"up":383,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 23,"up" : 23,"step" : 2}]}]},{"low":384,"up":399,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 24,"up" : 24,"step" : 2}]}]},{"low":400,"up":415,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 25,"up" : 25,"step" : 2}]}]},{"low":416,"up":431,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 26,"up" : 26,"step" : 2}]}]},{"low":432,"up":447,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 27,"up" : 27,"step" : 2}]}]},{"low":448,"up":463,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 28,"up" : 28,"step" : 2}]}]},{"low":464,"up":479,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 29,"up" : 29,"step" : 2}]}]},{"low":480,"up":495,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 30,"up" : 30,"step" : 2}]}]},{"low":496,"up":511,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 31,"up" : 31,"step" : 2}]}]},{"low":512,"up":527,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 32,"up" : 32,"step" : 2}]}]},{"low":528,"up":543,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 33,"up" : 33,"step" : 2}]}]},{"low":544,"up":559,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 34,"up" : 34,"step" : 2}]}]},{"low":560,"up":575,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 35,"up" : 35,"step" : 2}]}]},{"low":576,"up":591,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 36,"up" : 36,"step" : 2}]}]},{"low":592,"up":607,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 37,"up" : 37,"step" : 2}]}]},{"low":608,"up":623,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 38,"up" : 38,"step" : 2}]}]},{"low":624,"up":639,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 39,"up" : 39,"step" : 2}]}]},{"low":640,"up":655,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 40,"up" : 40,"step" : 2}]}]},{"low":656,"up":671,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 41,"up" : 41,"step" : 2}]}]},{"low":672,"up":687,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 42,"up" : 42,"step" : 2}]}]},{"low":688,"up":703,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 43,"up" : 43,"step" : 2}]}]},{"low":704,"up":719,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 44,"up" : 44,"step" : 2}]}]},{"low":720,"up":735,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 45,"up" : 45,"step" : 2}]}]},{"low":736,"up":751,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 46,"up" : 46,"step" : 2}]}]},{"low":752,"up":767,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 47,"up" : 47,"step" : 2}]}]},{"low":768,"up":783,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 48,"up" : 48,"step" : 2}]}]},{"low":784,"up":799,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 49,"up" : 49,"step" : 2}]}]},{"low":800,"up":815,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 50,"up" : 50,"step" : 2}]}]},{"low":816,"up":831,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 51,"up" : 51,"step" : 2}]}]},{"low":832,"up":847,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 52,"up" : 52,"step" : 2}]}]},{"low":848,"up":863,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 53,"up" : 53,"step" : 2}]}]},{"low":864,"up":879,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 54,"up" : 54,"step" : 2}]}]},{"low":880,"up":895,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 55,"up" : 55,"step" : 2}]}]},{"low":896,"up":911,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 56,"up" : 56,"step" : 2}]}]},{"low":912,"up":927,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 57,"up" : 57,"step" : 2}]}]},{"low":928,"up":943,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 58,"up" : 58,"step" : 2}]}]},{"low":944,"up":959,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 59,"up" : 59,"step" : 2}]}]},{"low":960,"up":975,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 60,"up" : 60,"step" : 2}]}]},{"low":976,"up":991,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 61,"up" : 61,"step" : 2}]}]},{"low":992,"up":1007,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 62,"up" : 62,"step" : 2}]}]},{"low":1008,"up":1023,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 63,"up" : 63,"step" : 2}]}]},{"low":1024,"up":1039,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 64,"up" : 64,"step" : 2}]}]},{"low":1040,"up":1055,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 65,"up" : 65,"step" : 2}]}]},{"low":1056,"up":1071,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 66,"up" : 66,"step" : 2}]}]},{"low":1072,"up":1087,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 67,"up" : 67,"step" : 2}]}]},{"low":1088,"up":1103,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 68,"up" : 68,"step" : 2}]}]},{"low":1104,"up":1119,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 69,"up" : 69,"step" : 2}]}]},{"low":1120,"up":1135,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 70,"up" : 70,"step" : 2}]}]},{"low":1136,"up":1151,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 71,"up" : 71,"step" : 2}]}]},{"low":1152,"up":1167,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 72,"up" : 72,"step" : 2}]}]},{"low":1168,"up":1183,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 73,"up" : 73,"step" : 2}]}]},{"low":1184,"up":1199,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 74,"up" : 74,"step" : 2}]}]},{"low":1200,"up":1215,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 75,"up" : 75,"step" : 2}]}]},{"low":1216,"up":1231,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 76,"up" : 76,"step" : 2}]}]},{"low":1232,"up":1247,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 77,"up" : 77,"step" : 2}]}]},{"low":1248,"up":1263,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 78,"up" : 78,"step" : 2}]}]},{"low":1264,"up":1279,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 79,"up" : 79,"step" : 2}]}]},{"low":1280,"up":1295,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 80,"up" : 80,"step" : 2}]}]},{"low":1296,"up":1311,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 81,"up" : 81,"step" : 2}]}]},{"low":1312,"up":1327,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 82,"up" : 82,"step" : 2}]}]},{"low":1328,"up":1343,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 83,"up" : 83,"step" : 2}]}]},{"low":1344,"up":1359,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 84,"up" : 84,"step" : 2}]}]},{"low":1360,"up":1375,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 85,"up" : 85,"step" : 2}]}]},{"low":1376,"up":1391,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 86,"up" : 86,"step" : 2}]}]},{"low":1392,"up":1407,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 87,"up" : 87,"step" : 2}]}]},{"low":1408,"up":1423,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 88,"up" : 88,"step" : 2}]}]},{"low":1424,"up":1439,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 89,"up" : 89,"step" : 2}]}]},{"low":1440,"up":1455,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 90,"up" : 90,"step" : 2}]}]},{"low":1456,"up":1471,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 91,"up" : 91,"step" : 2}]}]},{"low":1472,"up":1487,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 92,"up" : 92,"step" : 2}]}]},{"low":1488,"up":1503,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 93,"up" : 93,"step" : 2}]}]},{"low":1504,"up":1519,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 94,"up" : 94,"step" : 2}]}]},{"low":1520,"up":1535,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 95,"up" : 95,"step" : 2}]}]},{"low":1536,"up":1551,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 96,"up" : 96,"step" : 2}]}]},{"low":1552,"up":1567,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 97,"up" : 97,"step" : 2}]}]},{"low":1568,"up":1583,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 98,"up" : 98,"step" : 2}]}]},{"low":1584,"up":1599,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 99,"up" : 99,"step" : 2}]}]},{"low":1600,"up":1615,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 100,"up" : 100,"step" : 2}]}]},{"low":1616,"up":1631,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 101,"up" : 101,"step" : 2}]}]},{"low":1632,"up":1647,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 102,"up" : 102,"step" : 2}]}]},{"low":1648,"up":1663,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 103,"up" : 103,"step" : 2}]}]},{"low":1664,"up":1679,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 104,"up" : 104,"step" : 2}]}]},{"low":1680,"up":1695,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 105,"up" : 105,"step" : 2}]}]},{"low":1696,"up":1711,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 106,"up" : 106,"step" : 2}]}]},{"low":1712,"up":1727,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 107,"up" : 107,"step" : 2}]}]},{"low":1728,"up":1743,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 108,"up" : 108,"step" : 2}]}]},{"low":1744,"up":1759,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 109,"up" : 109,"step" : 2}]}]},{"low":1760,"up":1775,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 110,"up" : 110,"step" : 2}]}]},{"low":1776,"up":1791,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 111,"up" : 111,"step" : 2}]}]},{"low":1792,"up":1807,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 112,"up" : 112,"step" : 2}]}]},{"low":1808,"up":1823,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 113,"up" : 113,"step" : 2}]}]},{"low":1824,"up":1839,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 114,"up" : 114,"step" : 2}]}]},{"low":1840,"up":1855,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 115,"up" : 115,"step" : 2}]}]},{"low":1856,"up":1871,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 116,"up" : 116,"step" : 2}]}]},{"low":1872,"up":1887,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 117,"up" : 117,"step" : 2}]}]},{"low":1888,"up":1903,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 118,"up" : 118,"step" : 2}]}]},{"low":1904,"up":1919,"cElement": [{"cName": "layer1_input.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 119,"up" : 119,"step" : 2}]}]}]} , 
 	{ "Name" : "layer7_out_0_V", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "layer7_out.V","cData": "int16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} ]}
# RTL Port declarations: 
set portNum 10
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ layer1_input_V sc_in sc_lv 1920 signal 0 } 
	{ layer1_input_V_ap_vld sc_in sc_logic 1 invld 0 } 
	{ layer7_out_0_V sc_out sc_lv 16 signal 1 } 
	{ layer7_out_0_V_ap_vld sc_out sc_logic 1 outvld 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "layer1_input_V", "direction": "in", "datatype": "sc_lv", "bitwidth":1920, "type": "signal", "bundle":{"name": "layer1_input_V", "role": "default" }} , 
 	{ "name": "layer1_input_V_ap_vld", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "layer1_input_V", "role": "ap_vld" }} , 
 	{ "name": "layer7_out_0_V", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "layer7_out_0_V", "role": "default" }} , 
 	{ "name": "layer7_out_0_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "layer7_out_0_V", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "69", "70", "71", "72"],
		"CDFG" : "myproject",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "354", "EstimateLatencyMax" : "354",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97"}],
		"Port" : [
			{"Name" : "layer1_input_V", "Type" : "Vld", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "layer1_input_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "layer7_out_0_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "h_state_V_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "h_state_V_0"}]},
			{"Name" : "h_state_V_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "h_state_V_1"}]},
			{"Name" : "h_state_V_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "h_state_V_2"}]},
			{"Name" : "h_state_V_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "h_state_V_3"}]},
			{"Name" : "h_state_V_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "h_state_V_4"}]},
			{"Name" : "h_state_V_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "h_state_V_5"}]},
			{"Name" : "h_state_V_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "h_state_V_6"}]},
			{"Name" : "h_state_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "h_state_V_7"}]},
			{"Name" : "h_state_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "h_state_V_8"}]},
			{"Name" : "h_state_V_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "h_state_V_9"}]},
			{"Name" : "h_state_V_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "h_state_V_10"}]},
			{"Name" : "h_state_V_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "h_state_V_11"}]},
			{"Name" : "h_state_V_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "h_state_V_12"}]},
			{"Name" : "h_state_V_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "h_state_V_13"}]},
			{"Name" : "h_state_V_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "h_state_V_14"}]},
			{"Name" : "h_state_V_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "h_state_V_15"}]},
			{"Name" : "h_state_V_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "h_state_V_16"}]},
			{"Name" : "h_state_V_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "h_state_V_17"}]},
			{"Name" : "h_state_V_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "h_state_V_18"}]},
			{"Name" : "h_state_V_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "h_state_V_19"}]},
			{"Name" : "sigmoid_table5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "sigmoid_table5"}]},
			{"Name" : "tanh_table3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Port" : "tanh_table3"}]},
			{"Name" : "sigmoid_table1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_307", "Port" : "sigmoid_table1"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97", "Parent" : "0", "Child" : ["2"],
		"CDFG" : "gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "339", "EstimateLatencyMax" : "339",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_0", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "h_state_V_0"}]},
			{"Name" : "h_state_V_1", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "h_state_V_1"}]},
			{"Name" : "h_state_V_2", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "h_state_V_2"}]},
			{"Name" : "h_state_V_3", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "h_state_V_3"}]},
			{"Name" : "h_state_V_4", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "h_state_V_4"}]},
			{"Name" : "h_state_V_5", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "h_state_V_5"}]},
			{"Name" : "h_state_V_6", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "h_state_V_6"}]},
			{"Name" : "h_state_V_7", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "h_state_V_7"}]},
			{"Name" : "h_state_V_8", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "h_state_V_8"}]},
			{"Name" : "h_state_V_9", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "h_state_V_9"}]},
			{"Name" : "h_state_V_10", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "h_state_V_10"}]},
			{"Name" : "h_state_V_11", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "h_state_V_11"}]},
			{"Name" : "h_state_V_12", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "h_state_V_12"}]},
			{"Name" : "h_state_V_13", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "h_state_V_13"}]},
			{"Name" : "h_state_V_14", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "h_state_V_14"}]},
			{"Name" : "h_state_V_15", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "h_state_V_15"}]},
			{"Name" : "h_state_V_16", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "h_state_V_16"}]},
			{"Name" : "h_state_V_17", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "h_state_V_17"}]},
			{"Name" : "h_state_V_18", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "h_state_V_18"}]},
			{"Name" : "h_state_V_19", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "h_state_V_19"}]},
			{"Name" : "sigmoid_table5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "sigmoid_table5"}]},
			{"Name" : "tanh_table3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Port" : "tanh_table3"}]}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538", "Parent" : "1", "Child" : ["3", "4", "5", "7", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68"],
		"CDFG" : "gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "17",
		"VariableLatency" : "0", "ExactLatency" : "16", "EstimateLatencyMin" : "16", "EstimateLatencyMax" : "16",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "reset_state", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "h_state_V_0", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_7", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_8", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_9", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_10", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_11", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_12", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_13", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_14", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_15", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_16", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_17", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_18", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "h_state_V_19", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "sigmoid_table5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_sigmoid_ap_fixed_ap_fixed_16_6_5_3_0_sigmoid_config2_recr_s_fu_164", "Port" : "sigmoid_table5"}]},
			{"Name" : "tanh_table3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_fu_210", "Port" : "tanh_table3"}]}]},
	{"ID" : "3", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_fu_124", "Parent" : "2",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "4", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_fu_148", "Parent" : "2",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "5", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.grp_sigmoid_ap_fixed_ap_fixed_16_6_5_3_0_sigmoid_config2_recr_s_fu_164", "Parent" : "2", "Child" : ["6"],
		"CDFG" : "sigmoid_ap_fixed_ap_fixed_16_6_5_3_0_sigmoid_config2_recr_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_33_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_35_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_36_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_37_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_38_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_39_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "sigmoid_table5", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "6", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.grp_sigmoid_ap_fixed_ap_fixed_16_6_5_3_0_sigmoid_config2_recr_s_fu_164.sigmoid_table5_U", "Parent" : "5"},
	{"ID" : "7", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.grp_tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_fu_210", "Parent" : "2", "Child" : ["8"],
		"CDFG" : "tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "tanh_table3", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "8", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.grp_tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s_fu_210.tanh_table3_U", "Parent" : "7"},
	{"ID" : "9", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_16s_16s_26_1_1_U89", "Parent" : "2"},
	{"ID" : "10", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_16s_16s_26_1_1_U90", "Parent" : "2"},
	{"ID" : "11", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_16s_16s_26_1_1_U91", "Parent" : "2"},
	{"ID" : "12", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_16s_16s_26_1_1_U92", "Parent" : "2"},
	{"ID" : "13", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_16s_16s_26_1_1_U93", "Parent" : "2"},
	{"ID" : "14", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_16s_16s_26_1_1_U94", "Parent" : "2"},
	{"ID" : "15", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_16s_16s_26_1_1_U95", "Parent" : "2"},
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_16s_16s_26_1_1_U96", "Parent" : "2"},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_16s_16s_26_1_1_U97", "Parent" : "2"},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_16s_16s_26_1_1_U98", "Parent" : "2"},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_16s_16s_26_1_1_U99", "Parent" : "2"},
	{"ID" : "20", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_16s_16s_26_1_1_U100", "Parent" : "2"},
	{"ID" : "21", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_16s_16s_26_1_1_U101", "Parent" : "2"},
	{"ID" : "22", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_16s_16s_26_1_1_U102", "Parent" : "2"},
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_16s_16s_26_1_1_U103", "Parent" : "2"},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_16s_16s_26_1_1_U104", "Parent" : "2"},
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_16s_16s_26_1_1_U105", "Parent" : "2"},
	{"ID" : "26", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_16s_16s_26_1_1_U106", "Parent" : "2"},
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_16s_16s_26_1_1_U107", "Parent" : "2"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_16s_16s_26_1_1_U108", "Parent" : "2"},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_17s_16s_26_1_1_U109", "Parent" : "2"},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_17s_16s_26_1_1_U110", "Parent" : "2"},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_17s_16s_26_1_1_U111", "Parent" : "2"},
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_17s_16s_26_1_1_U112", "Parent" : "2"},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_17s_16s_26_1_1_U113", "Parent" : "2"},
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_17s_16s_26_1_1_U114", "Parent" : "2"},
	{"ID" : "35", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_17s_16s_26_1_1_U115", "Parent" : "2"},
	{"ID" : "36", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_17s_16s_26_1_1_U116", "Parent" : "2"},
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_17s_16s_26_1_1_U117", "Parent" : "2"},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_17s_16s_26_1_1_U118", "Parent" : "2"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_17s_16s_26_1_1_U119", "Parent" : "2"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_17s_16s_26_1_1_U120", "Parent" : "2"},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_17s_16s_26_1_1_U121", "Parent" : "2"},
	{"ID" : "42", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_17s_16s_26_1_1_U122", "Parent" : "2"},
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_17s_16s_26_1_1_U123", "Parent" : "2"},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_17s_16s_26_1_1_U124", "Parent" : "2"},
	{"ID" : "45", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_17s_16s_26_1_1_U125", "Parent" : "2"},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_17s_16s_26_1_1_U126", "Parent" : "2"},
	{"ID" : "47", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_17s_16s_26_1_1_U127", "Parent" : "2"},
	{"ID" : "48", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mul_mul_17s_16s_26_1_1_U128", "Parent" : "2"},
	{"ID" : "49", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mac_muladd_16s_16s_26s_26_1_1_U129", "Parent" : "2"},
	{"ID" : "50", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mac_muladd_16s_16s_26s_26_1_1_U130", "Parent" : "2"},
	{"ID" : "51", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mac_muladd_16s_16s_26s_26_1_1_U131", "Parent" : "2"},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mac_muladd_16s_16s_26s_26_1_1_U132", "Parent" : "2"},
	{"ID" : "53", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mac_muladd_16s_16s_26s_26_1_1_U133", "Parent" : "2"},
	{"ID" : "54", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mac_muladd_16s_16s_26s_26_1_1_U134", "Parent" : "2"},
	{"ID" : "55", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mac_muladd_16s_16s_26s_26_1_1_U135", "Parent" : "2"},
	{"ID" : "56", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mac_muladd_16s_16s_26s_26_1_1_U136", "Parent" : "2"},
	{"ID" : "57", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mac_muladd_16s_16s_26s_26_1_1_U137", "Parent" : "2"},
	{"ID" : "58", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mac_muladd_16s_16s_26s_26_1_1_U138", "Parent" : "2"},
	{"ID" : "59", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mac_muladd_16s_16s_26s_26_1_1_U139", "Parent" : "2"},
	{"ID" : "60", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mac_muladd_16s_16s_26s_26_1_1_U140", "Parent" : "2"},
	{"ID" : "61", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mac_muladd_16s_16s_26s_26_1_1_U141", "Parent" : "2"},
	{"ID" : "62", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mac_muladd_16s_16s_26s_26_1_1_U142", "Parent" : "2"},
	{"ID" : "63", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mac_muladd_16s_16s_26s_26_1_1_U143", "Parent" : "2"},
	{"ID" : "64", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mac_muladd_16s_16s_26s_26_1_1_U144", "Parent" : "2"},
	{"ID" : "65", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mac_muladd_16s_16s_26s_26_1_1_U145", "Parent" : "2"},
	{"ID" : "66", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mac_muladd_16s_16s_26s_26_1_1_U146", "Parent" : "2"},
	{"ID" : "67", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mac_muladd_16s_16s_26s_26_1_1_U147", "Parent" : "2"},
	{"ID" : "68", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s_fu_97.grp_gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s_fu_538.myproject_mac_muladd_16s_16s_26s_26_1_1_U148", "Parent" : "2"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s_fu_147", "Parent" : "0",
		"CDFG" : "dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0_fu_171", "Parent" : "0",
		"CDFG" : "dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "3", "EstimateLatencyMin" : "3", "EstimateLatencyMax" : "3",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_33_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_35_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_36_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_37_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_38_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_39_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_40_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_41_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_42_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_43_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_44_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_45_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_46_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_47_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_48_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_49_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_50_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_51_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_52_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_53_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_54_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_55_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_56_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_57_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_58_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_59_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_60_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_61_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_62_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_63_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.call_ret2_relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s_fu_239", "Parent" : "0",
		"CDFG" : "relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_0_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_1_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_2_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_3_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_4_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_5_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_6_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_7_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_8_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_9_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_10_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_11_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_12_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_13_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_14_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_15_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_16_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_17_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_18_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_19_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_20_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_21_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_22_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_23_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_24_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_25_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_26_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_27_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_28_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_29_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_30_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_31_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_32_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_33_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_34_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_35_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_36_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_37_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_38_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_39_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_40_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_41_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_42_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_43_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_44_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_45_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_46_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_47_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_48_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_49_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_50_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_51_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_52_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_53_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_54_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_55_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_56_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_57_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_58_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_59_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_60_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_61_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_62_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "data_63_V_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_307", "Parent" : "0", "Child" : ["73"],
		"CDFG" : "sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "data_V_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "sigmoid_table1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s_fu_307.sigmoid_table1_U", "Parent" : "72"}]}


set ArgLastReadFirstWriteLatency {
	myproject {
		layer1_input_V {Type I LastRead 0 FirstWrite -1}
		layer7_out_0_V {Type O LastRead -1 FirstWrite 15}
		h_state_V_0 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_1 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_2 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_3 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_4 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_5 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_6 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_7 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_8 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_9 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_10 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_11 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_12 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_13 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_14 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_15 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_16 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_17 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_18 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_19 {Type IO LastRead -1 FirstWrite -1}
		sigmoid_table5 {Type I LastRead -1 FirstWrite -1}
		tanh_table3 {Type I LastRead -1 FirstWrite -1}
		sigmoid_table1 {Type I LastRead -1 FirstWrite -1}}
	gru_stack_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_s {
		data_V_read {Type I LastRead 0 FirstWrite -1}
		h_state_V_0 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_1 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_2 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_3 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_4 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_5 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_6 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_7 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_8 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_9 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_10 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_11 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_12 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_13 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_14 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_15 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_16 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_17 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_18 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_19 {Type IO LastRead -1 FirstWrite -1}
		sigmoid_table5 {Type I LastRead -1 FirstWrite -1}
		tanh_table3 {Type I LastRead -1 FirstWrite -1}}
	gru_static_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config2_false_s {
		reset_state {Type I LastRead 0 FirstWrite -1}
		data_0_V_read {Type I LastRead 2 FirstWrite -1}
		data_1_V_read {Type I LastRead 2 FirstWrite -1}
		data_2_V_read {Type I LastRead 2 FirstWrite -1}
		data_3_V_read {Type I LastRead 2 FirstWrite -1}
		data_4_V_read {Type I LastRead 2 FirstWrite -1}
		data_5_V_read {Type I LastRead 2 FirstWrite -1}
		h_state_V_0 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_1 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_2 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_3 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_4 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_5 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_6 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_7 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_8 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_9 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_10 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_11 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_12 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_13 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_14 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_15 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_16 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_17 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_18 {Type IO LastRead -1 FirstWrite -1}
		h_state_V_19 {Type IO LastRead -1 FirstWrite -1}
		sigmoid_table5 {Type I LastRead -1 FirstWrite -1}
		tanh_table3 {Type I LastRead -1 FirstWrite -1}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1 {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_7_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_V_read {Type I LastRead 0 FirstWrite -1}
		data_9_V_read {Type I LastRead 0 FirstWrite -1}
		data_10_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_V_read {Type I LastRead 0 FirstWrite -1}
		data_12_V_read {Type I LastRead 0 FirstWrite -1}
		data_13_V_read {Type I LastRead 0 FirstWrite -1}
		data_14_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_V_read {Type I LastRead 0 FirstWrite -1}
		data_16_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_V_read {Type I LastRead 0 FirstWrite -1}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2 {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}}
	sigmoid_ap_fixed_ap_fixed_16_6_5_3_0_sigmoid_config2_recr_s {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_7_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_V_read {Type I LastRead 0 FirstWrite -1}
		data_9_V_read {Type I LastRead 0 FirstWrite -1}
		data_10_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_V_read {Type I LastRead 0 FirstWrite -1}
		data_12_V_read {Type I LastRead 0 FirstWrite -1}
		data_13_V_read {Type I LastRead 0 FirstWrite -1}
		data_14_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_V_read {Type I LastRead 0 FirstWrite -1}
		data_16_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_V_read {Type I LastRead 0 FirstWrite -1}
		data_20_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_V_read {Type I LastRead 0 FirstWrite -1}
		data_22_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_V_read {Type I LastRead 0 FirstWrite -1}
		data_24_V_read {Type I LastRead 0 FirstWrite -1}
		data_25_V_read {Type I LastRead 0 FirstWrite -1}
		data_26_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_V_read {Type I LastRead 0 FirstWrite -1}
		data_28_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_V_read {Type I LastRead 0 FirstWrite -1}
		data_30_V_read {Type I LastRead 0 FirstWrite -1}
		data_31_V_read {Type I LastRead 0 FirstWrite -1}
		data_32_V_read {Type I LastRead 0 FirstWrite -1}
		data_33_V_read {Type I LastRead 0 FirstWrite -1}
		data_34_V_read {Type I LastRead 0 FirstWrite -1}
		data_35_V_read {Type I LastRead 0 FirstWrite -1}
		data_36_V_read {Type I LastRead 0 FirstWrite -1}
		data_37_V_read {Type I LastRead 0 FirstWrite -1}
		data_38_V_read {Type I LastRead 0 FirstWrite -1}
		data_39_V_read {Type I LastRead 0 FirstWrite -1}
		sigmoid_table5 {Type I LastRead -1 FirstWrite -1}}
	tanh_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_tanh_config2_s {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_7_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_V_read {Type I LastRead 0 FirstWrite -1}
		data_9_V_read {Type I LastRead 0 FirstWrite -1}
		data_10_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_V_read {Type I LastRead 0 FirstWrite -1}
		data_12_V_read {Type I LastRead 0 FirstWrite -1}
		data_13_V_read {Type I LastRead 0 FirstWrite -1}
		data_14_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_V_read {Type I LastRead 0 FirstWrite -1}
		data_16_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_V_read {Type I LastRead 0 FirstWrite -1}
		tanh_table3 {Type I LastRead -1 FirstWrite -1}}
	dense_latency_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_s {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_7_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_V_read {Type I LastRead 0 FirstWrite -1}
		data_9_V_read {Type I LastRead 0 FirstWrite -1}
		data_10_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_V_read {Type I LastRead 0 FirstWrite -1}
		data_12_V_read {Type I LastRead 0 FirstWrite -1}
		data_13_V_read {Type I LastRead 0 FirstWrite -1}
		data_14_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_V_read {Type I LastRead 0 FirstWrite -1}
		data_16_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_V_read {Type I LastRead 0 FirstWrite -1}}
	dense_latency_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_config6_0_0 {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_7_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_V_read {Type I LastRead 0 FirstWrite -1}
		data_9_V_read {Type I LastRead 0 FirstWrite -1}
		data_10_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_V_read {Type I LastRead 0 FirstWrite -1}
		data_12_V_read {Type I LastRead 0 FirstWrite -1}
		data_13_V_read {Type I LastRead 0 FirstWrite -1}
		data_14_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_V_read {Type I LastRead 0 FirstWrite -1}
		data_16_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_V_read {Type I LastRead 0 FirstWrite -1}
		data_20_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_V_read {Type I LastRead 0 FirstWrite -1}
		data_22_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_V_read {Type I LastRead 0 FirstWrite -1}
		data_24_V_read {Type I LastRead 0 FirstWrite -1}
		data_25_V_read {Type I LastRead 0 FirstWrite -1}
		data_26_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_V_read {Type I LastRead 0 FirstWrite -1}
		data_28_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_V_read {Type I LastRead 0 FirstWrite -1}
		data_30_V_read {Type I LastRead 0 FirstWrite -1}
		data_31_V_read {Type I LastRead 0 FirstWrite -1}
		data_32_V_read {Type I LastRead 0 FirstWrite -1}
		data_33_V_read {Type I LastRead 0 FirstWrite -1}
		data_34_V_read {Type I LastRead 0 FirstWrite -1}
		data_35_V_read {Type I LastRead 0 FirstWrite -1}
		data_36_V_read {Type I LastRead 0 FirstWrite -1}
		data_37_V_read {Type I LastRead 0 FirstWrite -1}
		data_38_V_read {Type I LastRead 0 FirstWrite -1}
		data_39_V_read {Type I LastRead 0 FirstWrite -1}
		data_40_V_read {Type I LastRead 0 FirstWrite -1}
		data_41_V_read {Type I LastRead 0 FirstWrite -1}
		data_42_V_read {Type I LastRead 0 FirstWrite -1}
		data_43_V_read {Type I LastRead 0 FirstWrite -1}
		data_44_V_read {Type I LastRead 0 FirstWrite -1}
		data_45_V_read {Type I LastRead 0 FirstWrite -1}
		data_46_V_read {Type I LastRead 0 FirstWrite -1}
		data_47_V_read {Type I LastRead 0 FirstWrite -1}
		data_48_V_read {Type I LastRead 0 FirstWrite -1}
		data_49_V_read {Type I LastRead 0 FirstWrite -1}
		data_50_V_read {Type I LastRead 0 FirstWrite -1}
		data_51_V_read {Type I LastRead 0 FirstWrite -1}
		data_52_V_read {Type I LastRead 0 FirstWrite -1}
		data_53_V_read {Type I LastRead 0 FirstWrite -1}
		data_54_V_read {Type I LastRead 0 FirstWrite -1}
		data_55_V_read {Type I LastRead 0 FirstWrite -1}
		data_56_V_read {Type I LastRead 0 FirstWrite -1}
		data_57_V_read {Type I LastRead 0 FirstWrite -1}
		data_58_V_read {Type I LastRead 0 FirstWrite -1}
		data_59_V_read {Type I LastRead 0 FirstWrite -1}
		data_60_V_read {Type I LastRead 0 FirstWrite -1}
		data_61_V_read {Type I LastRead 0 FirstWrite -1}
		data_62_V_read {Type I LastRead 0 FirstWrite -1}
		data_63_V_read {Type I LastRead 0 FirstWrite -1}}
	relu_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_relu_config5_s {
		data_0_V_read {Type I LastRead 0 FirstWrite -1}
		data_1_V_read {Type I LastRead 0 FirstWrite -1}
		data_2_V_read {Type I LastRead 0 FirstWrite -1}
		data_3_V_read {Type I LastRead 0 FirstWrite -1}
		data_4_V_read {Type I LastRead 0 FirstWrite -1}
		data_5_V_read {Type I LastRead 0 FirstWrite -1}
		data_6_V_read {Type I LastRead 0 FirstWrite -1}
		data_7_V_read {Type I LastRead 0 FirstWrite -1}
		data_8_V_read {Type I LastRead 0 FirstWrite -1}
		data_9_V_read {Type I LastRead 0 FirstWrite -1}
		data_10_V_read {Type I LastRead 0 FirstWrite -1}
		data_11_V_read {Type I LastRead 0 FirstWrite -1}
		data_12_V_read {Type I LastRead 0 FirstWrite -1}
		data_13_V_read {Type I LastRead 0 FirstWrite -1}
		data_14_V_read {Type I LastRead 0 FirstWrite -1}
		data_15_V_read {Type I LastRead 0 FirstWrite -1}
		data_16_V_read {Type I LastRead 0 FirstWrite -1}
		data_17_V_read {Type I LastRead 0 FirstWrite -1}
		data_18_V_read {Type I LastRead 0 FirstWrite -1}
		data_19_V_read {Type I LastRead 0 FirstWrite -1}
		data_20_V_read {Type I LastRead 0 FirstWrite -1}
		data_21_V_read {Type I LastRead 0 FirstWrite -1}
		data_22_V_read {Type I LastRead 0 FirstWrite -1}
		data_23_V_read {Type I LastRead 0 FirstWrite -1}
		data_24_V_read {Type I LastRead 0 FirstWrite -1}
		data_25_V_read {Type I LastRead 0 FirstWrite -1}
		data_26_V_read {Type I LastRead 0 FirstWrite -1}
		data_27_V_read {Type I LastRead 0 FirstWrite -1}
		data_28_V_read {Type I LastRead 0 FirstWrite -1}
		data_29_V_read {Type I LastRead 0 FirstWrite -1}
		data_30_V_read {Type I LastRead 0 FirstWrite -1}
		data_31_V_read {Type I LastRead 0 FirstWrite -1}
		data_32_V_read {Type I LastRead 0 FirstWrite -1}
		data_33_V_read {Type I LastRead 0 FirstWrite -1}
		data_34_V_read {Type I LastRead 0 FirstWrite -1}
		data_35_V_read {Type I LastRead 0 FirstWrite -1}
		data_36_V_read {Type I LastRead 0 FirstWrite -1}
		data_37_V_read {Type I LastRead 0 FirstWrite -1}
		data_38_V_read {Type I LastRead 0 FirstWrite -1}
		data_39_V_read {Type I LastRead 0 FirstWrite -1}
		data_40_V_read {Type I LastRead 0 FirstWrite -1}
		data_41_V_read {Type I LastRead 0 FirstWrite -1}
		data_42_V_read {Type I LastRead 0 FirstWrite -1}
		data_43_V_read {Type I LastRead 0 FirstWrite -1}
		data_44_V_read {Type I LastRead 0 FirstWrite -1}
		data_45_V_read {Type I LastRead 0 FirstWrite -1}
		data_46_V_read {Type I LastRead 0 FirstWrite -1}
		data_47_V_read {Type I LastRead 0 FirstWrite -1}
		data_48_V_read {Type I LastRead 0 FirstWrite -1}
		data_49_V_read {Type I LastRead 0 FirstWrite -1}
		data_50_V_read {Type I LastRead 0 FirstWrite -1}
		data_51_V_read {Type I LastRead 0 FirstWrite -1}
		data_52_V_read {Type I LastRead 0 FirstWrite -1}
		data_53_V_read {Type I LastRead 0 FirstWrite -1}
		data_54_V_read {Type I LastRead 0 FirstWrite -1}
		data_55_V_read {Type I LastRead 0 FirstWrite -1}
		data_56_V_read {Type I LastRead 0 FirstWrite -1}
		data_57_V_read {Type I LastRead 0 FirstWrite -1}
		data_58_V_read {Type I LastRead 0 FirstWrite -1}
		data_59_V_read {Type I LastRead 0 FirstWrite -1}
		data_60_V_read {Type I LastRead 0 FirstWrite -1}
		data_61_V_read {Type I LastRead 0 FirstWrite -1}
		data_62_V_read {Type I LastRead 0 FirstWrite -1}
		data_63_V_read {Type I LastRead 0 FirstWrite -1}}
	sigmoid_ap_fixed_16_6_5_3_0_ap_fixed_16_6_5_3_0_sigmoid_config7_s {
		data_V_read {Type I LastRead 0 FirstWrite -1}
		sigmoid_table1 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "354", "Max" : "354"}
	, {"Name" : "Interval", "Min" : "355", "Max" : "355"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	layer1_input_V { ap_vld {  { layer1_input_V in_data 0 1920 }  { layer1_input_V_ap_vld in_vld 0 1 } } }
	layer7_out_0_V { ap_vld {  { layer7_out_0_V out_data 1 16 }  { layer7_out_0_V_ap_vld out_vld 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
