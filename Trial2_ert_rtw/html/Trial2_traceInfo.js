function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Constant */
	this.urlHashMap["Trial2:83"] = "Trial2.c:41,166&Trial2.h:82&Trial2_data.c:34";
	/* <Root>/Subsystem */
	this.urlHashMap["Trial2:81"] = "Trial2.c:38,167,189,613,615,620";
	/* <S1>/Enable */
	this.urlHashMap["Trial2:82"] = "Trial2.c:39";
	/* <S1>/ADCINA3 - Vout F//B */
	this.urlHashMap["Trial2:24"] = "Trial2.c:43,191&Trial2.h:59";
	/* <S1>/ADCINB3 - Vin F//B */
	this.urlHashMap["Trial2:25"] = "Trial2.c:127,402&Trial2.h:60";
	/* <S1>/Analog Gain */
	this.urlHashMap["Trial2:43"] = "Trial2.c:52&Trial2.h:76&Trial2_data.c:28";
	/* <S1>/Control Loop */
	this.urlHashMap["Trial2:233"] = "Trial2.c:57,100,616&Trial2.h:61,67";
	/* <S1>/Duty control for Active Load  */
	this.urlHashMap["Trial2:2"] = "Trial2.c:407";
	/* <S1>/High-Low Side Driver Signal */
	this.urlHashMap["Trial2:229"] = "Trial2.c:102,196";
	/* <S1>/Sum */
	this.urlHashMap["Trial2:68"] = "Trial2.c:50";
	/* <S1>/Vin_Gain */
	this.urlHashMap["Trial2:39"] = "Trial2.c:134,145&Trial2.h:62,79&Trial2_data.c:31";
	/* <S1>/Vin_eCAN_XMIT */
	this.urlHashMap["Trial2:27"] = "Trial2.c:147";
	/* <S1>/Vout_Gain */
	this.urlHashMap["Trial2:38"] = "msg=rtwMsg_SimulationReducedBlock&block=Trial2:38";
	/* <S1>/Vout_Ref */
	this.urlHashMap["Trial2:69"] = "Trial2.c:51&Trial2.h:73&Trial2_data.c:25";
	/* <S1>/Vout_eCAN_XMIT */
	this.urlHashMap["Trial2:26"] = "Trial2.c:109";
	/* <S1>/eCAN Receive */
	this.urlHashMap["Trial2:232"] = "msg=rtwMsg_notTraceable&block=Trial2:232";
	/* <S2>:1 */
	this.urlHashMap["Trial2:233:1"] = "Trial2.c:58";
	/* <S2>:1:4 */
	this.urlHashMap["Trial2:233:1:4"] = "Trial2.c:59";
	/* <S2>:1:7 */
	this.urlHashMap["Trial2:233:1:7"] = "Trial2.c:60";
	/* <S2>:1:10 */
	this.urlHashMap["Trial2:233:1:10"] = "Trial2.c:61";
	/* <S2>:1:11 */
	this.urlHashMap["Trial2:233:1:11"] = "Trial2.c:62";
	/* <S2>:1:12 */
	this.urlHashMap["Trial2:233:1:12"] = "Trial2.c:64";
	/* <S2>:1:14 */
	this.urlHashMap["Trial2:233:1:14"] = "Trial2.c:73";
	/* <S2>:1:15 */
	this.urlHashMap["Trial2:233:1:15"] = "Trial2.c:74";
	/* <S2>:1:18 */
	this.urlHashMap["Trial2:233:1:18"] = "Trial2.c:84";
	/* <S2>:1:19 */
	this.urlHashMap["Trial2:233:1:19"] = "Trial2.c:86";
	/* <S2>:1:21 */
	this.urlHashMap["Trial2:233:1:21"] = "Trial2.c:90";
	/* <S2>:1:22 */
	this.urlHashMap["Trial2:233:1:22"] = "Trial2.c:91";
	/* <S2>:1:24 */
	this.urlHashMap["Trial2:233:1:24"] = "Trial2.c:96";
	/* <S2>:1:26 */
	this.urlHashMap["Trial2:233:1:26"] = "Trial2.c:97";
	/* <S2>:1:5 */
	this.urlHashMap["Trial2:233:1:5"] = "Trial2.c:617";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Trial2"};
	this.sidHashMap["Trial2"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Trial2:81"};
	this.sidHashMap["Trial2:81"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "Trial2:233"};
	this.sidHashMap["Trial2:233"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "Trial2:83"};
	this.sidHashMap["Trial2:83"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "Trial2:81"};
	this.sidHashMap["Trial2:81"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<S1>/Enable"] = {sid: "Trial2:82"};
	this.sidHashMap["Trial2:82"] = {rtwname: "<S1>/Enable"};
	this.rtwnameHashMap["<S1>/ADCINA3 - Vout F//B"] = {sid: "Trial2:24"};
	this.sidHashMap["Trial2:24"] = {rtwname: "<S1>/ADCINA3 - Vout F//B"};
	this.rtwnameHashMap["<S1>/ADCINB3 - Vin F//B"] = {sid: "Trial2:25"};
	this.sidHashMap["Trial2:25"] = {rtwname: "<S1>/ADCINB3 - Vin F//B"};
	this.rtwnameHashMap["<S1>/Analog Gain"] = {sid: "Trial2:43"};
	this.sidHashMap["Trial2:43"] = {rtwname: "<S1>/Analog Gain"};
	this.rtwnameHashMap["<S1>/Control Loop"] = {sid: "Trial2:233"};
	this.sidHashMap["Trial2:233"] = {rtwname: "<S1>/Control Loop"};
	this.rtwnameHashMap["<S1>/Duty control for Active Load "] = {sid: "Trial2:2"};
	this.sidHashMap["Trial2:2"] = {rtwname: "<S1>/Duty control for Active Load "};
	this.rtwnameHashMap["<S1>/High-Low Side Driver Signal"] = {sid: "Trial2:229"};
	this.sidHashMap["Trial2:229"] = {rtwname: "<S1>/High-Low Side Driver Signal"};
	this.rtwnameHashMap["<S1>/Sum"] = {sid: "Trial2:68"};
	this.sidHashMap["Trial2:68"] = {rtwname: "<S1>/Sum"};
	this.rtwnameHashMap["<S1>/Vin_Gain"] = {sid: "Trial2:39"};
	this.sidHashMap["Trial2:39"] = {rtwname: "<S1>/Vin_Gain"};
	this.rtwnameHashMap["<S1>/Vin_eCAN_XMIT"] = {sid: "Trial2:27"};
	this.sidHashMap["Trial2:27"] = {rtwname: "<S1>/Vin_eCAN_XMIT"};
	this.rtwnameHashMap["<S1>/Vout_Gain"] = {sid: "Trial2:38"};
	this.sidHashMap["Trial2:38"] = {rtwname: "<S1>/Vout_Gain"};
	this.rtwnameHashMap["<S1>/Vout_Ref"] = {sid: "Trial2:69"};
	this.sidHashMap["Trial2:69"] = {rtwname: "<S1>/Vout_Ref"};
	this.rtwnameHashMap["<S1>/Vout_eCAN_XMIT"] = {sid: "Trial2:26"};
	this.sidHashMap["Trial2:26"] = {rtwname: "<S1>/Vout_eCAN_XMIT"};
	this.rtwnameHashMap["<S1>/eCAN Receive"] = {sid: "Trial2:232"};
	this.sidHashMap["Trial2:232"] = {rtwname: "<S1>/eCAN Receive"};
	this.rtwnameHashMap["<S2>:1"] = {sid: "Trial2:233:1"};
	this.sidHashMap["Trial2:233:1"] = {rtwname: "<S2>:1"};
	this.rtwnameHashMap["<S2>:1:4"] = {sid: "Trial2:233:1:4"};
	this.sidHashMap["Trial2:233:1:4"] = {rtwname: "<S2>:1:4"};
	this.rtwnameHashMap["<S2>:1:7"] = {sid: "Trial2:233:1:7"};
	this.sidHashMap["Trial2:233:1:7"] = {rtwname: "<S2>:1:7"};
	this.rtwnameHashMap["<S2>:1:10"] = {sid: "Trial2:233:1:10"};
	this.sidHashMap["Trial2:233:1:10"] = {rtwname: "<S2>:1:10"};
	this.rtwnameHashMap["<S2>:1:11"] = {sid: "Trial2:233:1:11"};
	this.sidHashMap["Trial2:233:1:11"] = {rtwname: "<S2>:1:11"};
	this.rtwnameHashMap["<S2>:1:12"] = {sid: "Trial2:233:1:12"};
	this.sidHashMap["Trial2:233:1:12"] = {rtwname: "<S2>:1:12"};
	this.rtwnameHashMap["<S2>:1:14"] = {sid: "Trial2:233:1:14"};
	this.sidHashMap["Trial2:233:1:14"] = {rtwname: "<S2>:1:14"};
	this.rtwnameHashMap["<S2>:1:15"] = {sid: "Trial2:233:1:15"};
	this.sidHashMap["Trial2:233:1:15"] = {rtwname: "<S2>:1:15"};
	this.rtwnameHashMap["<S2>:1:18"] = {sid: "Trial2:233:1:18"};
	this.sidHashMap["Trial2:233:1:18"] = {rtwname: "<S2>:1:18"};
	this.rtwnameHashMap["<S2>:1:19"] = {sid: "Trial2:233:1:19"};
	this.sidHashMap["Trial2:233:1:19"] = {rtwname: "<S2>:1:19"};
	this.rtwnameHashMap["<S2>:1:21"] = {sid: "Trial2:233:1:21"};
	this.sidHashMap["Trial2:233:1:21"] = {rtwname: "<S2>:1:21"};
	this.rtwnameHashMap["<S2>:1:22"] = {sid: "Trial2:233:1:22"};
	this.sidHashMap["Trial2:233:1:22"] = {rtwname: "<S2>:1:22"};
	this.rtwnameHashMap["<S2>:1:24"] = {sid: "Trial2:233:1:24"};
	this.sidHashMap["Trial2:233:1:24"] = {rtwname: "<S2>:1:24"};
	this.rtwnameHashMap["<S2>:1:26"] = {sid: "Trial2:233:1:26"};
	this.sidHashMap["Trial2:233:1:26"] = {rtwname: "<S2>:1:26"};
	this.rtwnameHashMap["<S2>:1:5"] = {sid: "Trial2:233:1:5"};
	this.sidHashMap["Trial2:233:1:5"] = {rtwname: "<S2>:1:5"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
