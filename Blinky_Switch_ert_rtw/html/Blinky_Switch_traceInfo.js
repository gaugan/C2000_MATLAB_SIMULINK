function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Digital Input */
	this.urlHashMap["Blinky_Switch:15"] = "Blinky_Switch.c:32,145&Blinky_Switch.h:46";
	/* <Root>/LED OFF */
	this.urlHashMap["Blinky_Switch:26"] = "Blinky_Switch.c:37,82,151,177";
	/* <Root>/LED ON */
	this.urlHashMap["Blinky_Switch:28"] = "Blinky_Switch.c:84,130,179,205";
	/* <S1>/Compare */
	this.urlHashMap["Blinky_Switch:24:2"] = "Blinky_Switch.c:40,81";
	/* <S1>/Constant */
	this.urlHashMap["Blinky_Switch:24:3"] = "Blinky_Switch.c:41&Blinky_Switch.h:52&Blinky_Switch_data.c:25";
	/* <S2>/Compare */
	this.urlHashMap["Blinky_Switch:25:2"] = "Blinky_Switch.c:87,129";
	/* <S2>/Constant */
	this.urlHashMap["Blinky_Switch:25:3"] = "Blinky_Switch.c:88&Blinky_Switch.h:55&Blinky_Switch_data.c:28";
	/* <S3>/Enable */
	this.urlHashMap["Blinky_Switch:27"] = "Blinky_Switch.c:38";
	/* <S3>/Constant */
	this.urlHashMap["Blinky_Switch:7"] = "Blinky_Switch.c:42&Blinky_Switch.h:58&Blinky_Switch_data.c:31";
	/* <S3>/Constant1 */
	this.urlHashMap["Blinky_Switch:8"] = "Blinky_Switch.c:43&Blinky_Switch.h:61&Blinky_Switch_data.c:34";
	/* <S3>/Constant2 */
	this.urlHashMap["Blinky_Switch:9"] = "Blinky_Switch.c:44&Blinky_Switch.h:64&Blinky_Switch_data.c:37";
	/* <S3>/Constant3 */
	this.urlHashMap["Blinky_Switch:10"] = "Blinky_Switch.c:45&Blinky_Switch.h:67&Blinky_Switch_data.c:40";
	/* <S3>/LED1 */
	this.urlHashMap["Blinky_Switch:1"] = "Blinky_Switch.c:48,153";
	/* <S3>/LED2 */
	this.urlHashMap["Blinky_Switch:2"] = "Blinky_Switch.c:56,159";
	/* <S3>/LED3 */
	this.urlHashMap["Blinky_Switch:3"] = "Blinky_Switch.c:64,165";
	/* <S3>/LED4 */
	this.urlHashMap["Blinky_Switch:4"] = "Blinky_Switch.c:72,171";
	/* <S4>/Enable */
	this.urlHashMap["Blinky_Switch:29"] = "Blinky_Switch.c:85";
	/* <S4>/Constant4 */
	this.urlHashMap["Blinky_Switch:16"] = "Blinky_Switch.c:89&Blinky_Switch.h:70&Blinky_Switch_data.c:43";
	/* <S4>/Constant5 */
	this.urlHashMap["Blinky_Switch:17"] = "Blinky_Switch.c:90&Blinky_Switch.h:73&Blinky_Switch_data.c:46";
	/* <S4>/Constant6 */
	this.urlHashMap["Blinky_Switch:18"] = "Blinky_Switch.c:91&Blinky_Switch.h:76&Blinky_Switch_data.c:49";
	/* <S4>/Constant7 */
	this.urlHashMap["Blinky_Switch:19"] = "Blinky_Switch.c:92&Blinky_Switch.h:79&Blinky_Switch_data.c:52";
	/* <S4>/LED5 */
	this.urlHashMap["Blinky_Switch:20"] = "Blinky_Switch.c:96,181";
	/* <S4>/LED6 */
	this.urlHashMap["Blinky_Switch:21"] = "Blinky_Switch.c:104,187";
	/* <S4>/LED7 */
	this.urlHashMap["Blinky_Switch:22"] = "Blinky_Switch.c:112,193";
	/* <S4>/LED8 */
	this.urlHashMap["Blinky_Switch:23"] = "Blinky_Switch.c:120,199";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Blinky_Switch"};
	this.sidHashMap["Blinky_Switch"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Blinky_Switch:24"};
	this.sidHashMap["Blinky_Switch:24"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "Blinky_Switch:25"};
	this.sidHashMap["Blinky_Switch:25"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "Blinky_Switch:26"};
	this.sidHashMap["Blinky_Switch:26"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "Blinky_Switch:28"};
	this.sidHashMap["Blinky_Switch:28"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<Root>/Compare To Constant"] = {sid: "Blinky_Switch:24"};
	this.sidHashMap["Blinky_Switch:24"] = {rtwname: "<Root>/Compare To Constant"};
	this.rtwnameHashMap["<Root>/Compare To Constant1"] = {sid: "Blinky_Switch:25"};
	this.sidHashMap["Blinky_Switch:25"] = {rtwname: "<Root>/Compare To Constant1"};
	this.rtwnameHashMap["<Root>/Digital Input"] = {sid: "Blinky_Switch:15"};
	this.sidHashMap["Blinky_Switch:15"] = {rtwname: "<Root>/Digital Input"};
	this.rtwnameHashMap["<Root>/LED OFF"] = {sid: "Blinky_Switch:26"};
	this.sidHashMap["Blinky_Switch:26"] = {rtwname: "<Root>/LED OFF"};
	this.rtwnameHashMap["<Root>/LED ON"] = {sid: "Blinky_Switch:28"};
	this.sidHashMap["Blinky_Switch:28"] = {rtwname: "<Root>/LED ON"};
	this.rtwnameHashMap["<S1>/u"] = {sid: "Blinky_Switch:24:1"};
	this.sidHashMap["Blinky_Switch:24:1"] = {rtwname: "<S1>/u"};
	this.rtwnameHashMap["<S1>/Compare"] = {sid: "Blinky_Switch:24:2"};
	this.sidHashMap["Blinky_Switch:24:2"] = {rtwname: "<S1>/Compare"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "Blinky_Switch:24:3"};
	this.sidHashMap["Blinky_Switch:24:3"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/y"] = {sid: "Blinky_Switch:24:4"};
	this.sidHashMap["Blinky_Switch:24:4"] = {rtwname: "<S1>/y"};
	this.rtwnameHashMap["<S2>/u"] = {sid: "Blinky_Switch:25:1"};
	this.sidHashMap["Blinky_Switch:25:1"] = {rtwname: "<S2>/u"};
	this.rtwnameHashMap["<S2>/Compare"] = {sid: "Blinky_Switch:25:2"};
	this.sidHashMap["Blinky_Switch:25:2"] = {rtwname: "<S2>/Compare"};
	this.rtwnameHashMap["<S2>/Constant"] = {sid: "Blinky_Switch:25:3"};
	this.sidHashMap["Blinky_Switch:25:3"] = {rtwname: "<S2>/Constant"};
	this.rtwnameHashMap["<S2>/y"] = {sid: "Blinky_Switch:25:4"};
	this.sidHashMap["Blinky_Switch:25:4"] = {rtwname: "<S2>/y"};
	this.rtwnameHashMap["<S3>/Enable"] = {sid: "Blinky_Switch:27"};
	this.sidHashMap["Blinky_Switch:27"] = {rtwname: "<S3>/Enable"};
	this.rtwnameHashMap["<S3>/Constant"] = {sid: "Blinky_Switch:7"};
	this.sidHashMap["Blinky_Switch:7"] = {rtwname: "<S3>/Constant"};
	this.rtwnameHashMap["<S3>/Constant1"] = {sid: "Blinky_Switch:8"};
	this.sidHashMap["Blinky_Switch:8"] = {rtwname: "<S3>/Constant1"};
	this.rtwnameHashMap["<S3>/Constant2"] = {sid: "Blinky_Switch:9"};
	this.sidHashMap["Blinky_Switch:9"] = {rtwname: "<S3>/Constant2"};
	this.rtwnameHashMap["<S3>/Constant3"] = {sid: "Blinky_Switch:10"};
	this.sidHashMap["Blinky_Switch:10"] = {rtwname: "<S3>/Constant3"};
	this.rtwnameHashMap["<S3>/LED1"] = {sid: "Blinky_Switch:1"};
	this.sidHashMap["Blinky_Switch:1"] = {rtwname: "<S3>/LED1"};
	this.rtwnameHashMap["<S3>/LED2"] = {sid: "Blinky_Switch:2"};
	this.sidHashMap["Blinky_Switch:2"] = {rtwname: "<S3>/LED2"};
	this.rtwnameHashMap["<S3>/LED3"] = {sid: "Blinky_Switch:3"};
	this.sidHashMap["Blinky_Switch:3"] = {rtwname: "<S3>/LED3"};
	this.rtwnameHashMap["<S3>/LED4"] = {sid: "Blinky_Switch:4"};
	this.sidHashMap["Blinky_Switch:4"] = {rtwname: "<S3>/LED4"};
	this.rtwnameHashMap["<S4>/Enable"] = {sid: "Blinky_Switch:29"};
	this.sidHashMap["Blinky_Switch:29"] = {rtwname: "<S4>/Enable"};
	this.rtwnameHashMap["<S4>/Constant4"] = {sid: "Blinky_Switch:16"};
	this.sidHashMap["Blinky_Switch:16"] = {rtwname: "<S4>/Constant4"};
	this.rtwnameHashMap["<S4>/Constant5"] = {sid: "Blinky_Switch:17"};
	this.sidHashMap["Blinky_Switch:17"] = {rtwname: "<S4>/Constant5"};
	this.rtwnameHashMap["<S4>/Constant6"] = {sid: "Blinky_Switch:18"};
	this.sidHashMap["Blinky_Switch:18"] = {rtwname: "<S4>/Constant6"};
	this.rtwnameHashMap["<S4>/Constant7"] = {sid: "Blinky_Switch:19"};
	this.sidHashMap["Blinky_Switch:19"] = {rtwname: "<S4>/Constant7"};
	this.rtwnameHashMap["<S4>/LED5"] = {sid: "Blinky_Switch:20"};
	this.sidHashMap["Blinky_Switch:20"] = {rtwname: "<S4>/LED5"};
	this.rtwnameHashMap["<S4>/LED6"] = {sid: "Blinky_Switch:21"};
	this.sidHashMap["Blinky_Switch:21"] = {rtwname: "<S4>/LED6"};
	this.rtwnameHashMap["<S4>/LED7"] = {sid: "Blinky_Switch:22"};
	this.sidHashMap["Blinky_Switch:22"] = {rtwname: "<S4>/LED7"};
	this.rtwnameHashMap["<S4>/LED8"] = {sid: "Blinky_Switch:23"};
	this.sidHashMap["Blinky_Switch:23"] = {rtwname: "<S4>/LED8"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
