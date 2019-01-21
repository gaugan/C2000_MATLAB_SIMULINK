function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Analog Input */
	this.urlHashMap["ADC_Blinky_Test:15"] = "ADC_Blinky_Test.c:184,192,213,317&ADC_Blinky_Test.h:152&ADC_Blinky_Test_data.c:31";
	/* <Root>/LED */
	this.urlHashMap["ADC_Blinky_Test:6"] = "ADC_Blinky_Test.c:201,325,365&ADC_Blinky_Test.h:155&ADC_Blinky_Test_data.c:35";
	/* <Root>/LED1 */
	this.urlHashMap["ADC_Blinky_Test:9"] = "ADC_Blinky_Test.c:205,328,368&ADC_Blinky_Test.h:158&ADC_Blinky_Test_data.c:41";
	/* <Root>/LED2 */
	this.urlHashMap["ADC_Blinky_Test:10"] = "ADC_Blinky_Test.c:222,336,371&ADC_Blinky_Test.h:161&ADC_Blinky_Test_data.c:47";
	/* <Root>/LED3 */
	this.urlHashMap["ADC_Blinky_Test:11"] = "ADC_Blinky_Test.c:226,339,374&ADC_Blinky_Test.h:164&ADC_Blinky_Test_data.c:53";
	/* <Root>/SDL Video Display */
	this.urlHashMap["ADC_Blinky_Test:69"] = "ADC_Blinky_Test.c:137,346,380";
	/* <Root>/Subsystem */
	this.urlHashMap["ADC_Blinky_Test:18"] = "ADC_Blinky_Test.c:68,80,91,100,121,188,199,320,323,349,353&ADC_Blinky_Test.h:87,92,95,107,113,124,167&ADC_Blinky_Test_types.h:24&ADC_Blinky_Test_data.c:79,97";
	/* <Root>/Subsystem1 */
	this.urlHashMap["ADC_Blinky_Test:23"] = "ADC_Blinky_Test.c:69,81,92,209,220,331,334,355,359&ADC_Blinky_Test.h:106,112,166&ADC_Blinky_Test_data.c:58,76";
	/* <Root>/V4L2 Video Capture */
	this.urlHashMap["ADC_Blinky_Test:70"] = "ADC_Blinky_Test.c:131,342,377&ADC_Blinky_Test.h:100,101,102,119&ADC_Blinky_Test_data.c:103";
	/* <S1>/Compare */
	this.urlHashMap["ADC_Blinky_Test:16:2"] = "ADC_Blinky_Test.c:190";
	/* <S1>/Constant */
	this.urlHashMap["ADC_Blinky_Test:16:3"] = "ADC_Blinky_Test.c:191&ADC_Blinky_Test.h:146&ADC_Blinky_Test_data.c:25";
	/* <S2>/Compare */
	this.urlHashMap["ADC_Blinky_Test:22:2"] = "ADC_Blinky_Test.c:211";
	/* <S2>/Constant */
	this.urlHashMap["ADC_Blinky_Test:22:3"] = "ADC_Blinky_Test.c:212&ADC_Blinky_Test.h:149&ADC_Blinky_Test_data.c:28";
	/* <S3>/Enable */
	this.urlHashMap["ADC_Blinky_Test:20"] = "ADC_Blinky_Test.c:101";
	/* <S3>/Data Type Conversion */
	this.urlHashMap["ADC_Blinky_Test:8"] = "ADC_Blinky_Test.c:116&ADC_Blinky_Test.h:89";
	/* <S3>/Pulse
Generator */
	this.urlHashMap["ADC_Blinky_Test:17"] = "ADC_Blinky_Test.c:85,104,114&ADC_Blinky_Test.h:94,127,130,133,136&ADC_Blinky_Test_data.c:82,85,88,91";
	/* <S3>/Out1 */
	this.urlHashMap["ADC_Blinky_Test:19"] = "ADC_Blinky_Test.c:74&ADC_Blinky_Test.h:139&ADC_Blinky_Test_data.c:94";
	/* <S4>/Enable */
	this.urlHashMap["ADC_Blinky_Test:24"] = "msg=rtwMsg_reusableFunction&block=ADC_Blinky_Test:24";
	/* <S4>/Data Type Conversion */
	this.urlHashMap["ADC_Blinky_Test:25"] = "msg=rtwMsg_reusableFunction&block=ADC_Blinky_Test:25";
	/* <S4>/Pulse
Generator */
	this.urlHashMap["ADC_Blinky_Test:26"] = "ADC_Blinky_Test_data.c:61,64,67,70";
	/* <S4>/Out1 */
	this.urlHashMap["ADC_Blinky_Test:27"] = "ADC_Blinky_Test_data.c:73";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "ADC_Blinky_Test"};
	this.sidHashMap["ADC_Blinky_Test"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "ADC_Blinky_Test:16"};
	this.sidHashMap["ADC_Blinky_Test:16"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "ADC_Blinky_Test:22"};
	this.sidHashMap["ADC_Blinky_Test:22"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "ADC_Blinky_Test:18"};
	this.sidHashMap["ADC_Blinky_Test:18"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "ADC_Blinky_Test:23"};
	this.sidHashMap["ADC_Blinky_Test:23"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<Root>/Analog Input"] = {sid: "ADC_Blinky_Test:15"};
	this.sidHashMap["ADC_Blinky_Test:15"] = {rtwname: "<Root>/Analog Input"};
	this.rtwnameHashMap["<Root>/Compare To Constant"] = {sid: "ADC_Blinky_Test:16"};
	this.sidHashMap["ADC_Blinky_Test:16"] = {rtwname: "<Root>/Compare To Constant"};
	this.rtwnameHashMap["<Root>/Compare To Constant1"] = {sid: "ADC_Blinky_Test:22"};
	this.sidHashMap["ADC_Blinky_Test:22"] = {rtwname: "<Root>/Compare To Constant1"};
	this.rtwnameHashMap["<Root>/LED"] = {sid: "ADC_Blinky_Test:6"};
	this.sidHashMap["ADC_Blinky_Test:6"] = {rtwname: "<Root>/LED"};
	this.rtwnameHashMap["<Root>/LED1"] = {sid: "ADC_Blinky_Test:9"};
	this.sidHashMap["ADC_Blinky_Test:9"] = {rtwname: "<Root>/LED1"};
	this.rtwnameHashMap["<Root>/LED2"] = {sid: "ADC_Blinky_Test:10"};
	this.sidHashMap["ADC_Blinky_Test:10"] = {rtwname: "<Root>/LED2"};
	this.rtwnameHashMap["<Root>/LED3"] = {sid: "ADC_Blinky_Test:11"};
	this.sidHashMap["ADC_Blinky_Test:11"] = {rtwname: "<Root>/LED3"};
	this.rtwnameHashMap["<Root>/SDL Video Display"] = {sid: "ADC_Blinky_Test:69"};
	this.sidHashMap["ADC_Blinky_Test:69"] = {rtwname: "<Root>/SDL Video Display"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "ADC_Blinky_Test:18"};
	this.sidHashMap["ADC_Blinky_Test:18"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<Root>/Subsystem1"] = {sid: "ADC_Blinky_Test:23"};
	this.sidHashMap["ADC_Blinky_Test:23"] = {rtwname: "<Root>/Subsystem1"};
	this.rtwnameHashMap["<Root>/V4L2 Video Capture"] = {sid: "ADC_Blinky_Test:70"};
	this.sidHashMap["ADC_Blinky_Test:70"] = {rtwname: "<Root>/V4L2 Video Capture"};
	this.rtwnameHashMap["<S1>/u"] = {sid: "ADC_Blinky_Test:16:1"};
	this.sidHashMap["ADC_Blinky_Test:16:1"] = {rtwname: "<S1>/u"};
	this.rtwnameHashMap["<S1>/Compare"] = {sid: "ADC_Blinky_Test:16:2"};
	this.sidHashMap["ADC_Blinky_Test:16:2"] = {rtwname: "<S1>/Compare"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "ADC_Blinky_Test:16:3"};
	this.sidHashMap["ADC_Blinky_Test:16:3"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/y"] = {sid: "ADC_Blinky_Test:16:4"};
	this.sidHashMap["ADC_Blinky_Test:16:4"] = {rtwname: "<S1>/y"};
	this.rtwnameHashMap["<S2>/u"] = {sid: "ADC_Blinky_Test:22:1"};
	this.sidHashMap["ADC_Blinky_Test:22:1"] = {rtwname: "<S2>/u"};
	this.rtwnameHashMap["<S2>/Compare"] = {sid: "ADC_Blinky_Test:22:2"};
	this.sidHashMap["ADC_Blinky_Test:22:2"] = {rtwname: "<S2>/Compare"};
	this.rtwnameHashMap["<S2>/Constant"] = {sid: "ADC_Blinky_Test:22:3"};
	this.sidHashMap["ADC_Blinky_Test:22:3"] = {rtwname: "<S2>/Constant"};
	this.rtwnameHashMap["<S2>/y"] = {sid: "ADC_Blinky_Test:22:4"};
	this.sidHashMap["ADC_Blinky_Test:22:4"] = {rtwname: "<S2>/y"};
	this.rtwnameHashMap["<S3>/Enable"] = {sid: "ADC_Blinky_Test:20"};
	this.sidHashMap["ADC_Blinky_Test:20"] = {rtwname: "<S3>/Enable"};
	this.rtwnameHashMap["<S3>/Data Type Conversion"] = {sid: "ADC_Blinky_Test:8"};
	this.sidHashMap["ADC_Blinky_Test:8"] = {rtwname: "<S3>/Data Type Conversion"};
	this.rtwnameHashMap["<S3>/Pulse Generator"] = {sid: "ADC_Blinky_Test:17"};
	this.sidHashMap["ADC_Blinky_Test:17"] = {rtwname: "<S3>/Pulse Generator"};
	this.rtwnameHashMap["<S3>/Out1"] = {sid: "ADC_Blinky_Test:19"};
	this.sidHashMap["ADC_Blinky_Test:19"] = {rtwname: "<S3>/Out1"};
	this.rtwnameHashMap["<S4>/Enable"] = {sid: "ADC_Blinky_Test:24"};
	this.sidHashMap["ADC_Blinky_Test:24"] = {rtwname: "<S4>/Enable"};
	this.rtwnameHashMap["<S4>/Data Type Conversion"] = {sid: "ADC_Blinky_Test:25"};
	this.sidHashMap["ADC_Blinky_Test:25"] = {rtwname: "<S4>/Data Type Conversion"};
	this.rtwnameHashMap["<S4>/Pulse Generator"] = {sid: "ADC_Blinky_Test:26"};
	this.sidHashMap["ADC_Blinky_Test:26"] = {rtwname: "<S4>/Pulse Generator"};
	this.rtwnameHashMap["<S4>/Out1"] = {sid: "ADC_Blinky_Test:27"};
	this.sidHashMap["ADC_Blinky_Test:27"] = {rtwname: "<S4>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
