function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Constant */
	this.urlHashMap["Blinky_on_serial:29"] = "Blinky_on_serial.c:50&Blinky_on_serial.h:87&Blinky_on_serial_data.c:52";
	/* <Root>/Constant1 */
	this.urlHashMap["Blinky_on_serial:48"] = "Blinky_on_serial.c:51&Blinky_on_serial.h:84&Blinky_on_serial_data.c:49";
	/* <Root>/Constant2 */
	this.urlHashMap["Blinky_on_serial:53"] = "Blinky_on_serial.c:52&Blinky_on_serial.h:81&Blinky_on_serial_data.c:46";
	/* <Root>/Constant3 */
	this.urlHashMap["Blinky_on_serial:58"] = "Blinky_on_serial.c:53&Blinky_on_serial.h:78&Blinky_on_serial_data.c:43";
	/* <Root>/Constant4 */
	this.urlHashMap["Blinky_on_serial:63"] = "Blinky_on_serial.c:54&Blinky_on_serial.h:75&Blinky_on_serial_data.c:40";
	/* <Root>/Constant5 */
	this.urlHashMap["Blinky_on_serial:109"] = "msg=&block=Blinky_on_serial:109";
	/* <Root>/Constant6 */
	this.urlHashMap["Blinky_on_serial:110"] = "msg=&block=Blinky_on_serial:110";
	/* <Root>/If */
	this.urlHashMap["Blinky_on_serial:28"] = "Blinky_on_serial.c:49,98";
	/* <Root>/If Action
Subsystem */
	this.urlHashMap["Blinky_on_serial:44"] = "Blinky_on_serial.c:62,67,232,236";
	/* <Root>/If Action
Subsystem1 */
	this.urlHashMap["Blinky_on_serial:49"] = "Blinky_on_serial.c:69,74,238,242";
	/* <Root>/If Action
Subsystem2 */
	this.urlHashMap["Blinky_on_serial:54"] = "Blinky_on_serial.c:76,81,244,248";
	/* <Root>/If Action
Subsystem3 */
	this.urlHashMap["Blinky_on_serial:59"] = "Blinky_on_serial.c:83,88,250,254";
	/* <Root>/If Action
Subsystem4 */
	this.urlHashMap["Blinky_on_serial:64"] = "Blinky_on_serial.c:90,95,256,260";
	/* <Root>/If Action
Subsystem5 */
	this.urlHashMap["Blinky_on_serial:101"] = "msg=&block=Blinky_on_serial:101";
	/* <Root>/If Action
Subsystem6 */
	this.urlHashMap["Blinky_on_serial:105"] = "msg=&block=Blinky_on_serial:105";
	/* <Root>/If1 */
	this.urlHashMap["Blinky_on_serial:90"] = "msg=&block=Blinky_on_serial:90";
	/* <Root>/LED1 */
	this.urlHashMap["Blinky_on_serial:1"] = "Blinky_on_serial.c:100,184";
	/* <Root>/LED2 */
	this.urlHashMap["Blinky_on_serial:2"] = "Blinky_on_serial.c:108,190";
	/* <Root>/LED3 */
	this.urlHashMap["Blinky_on_serial:3"] = "Blinky_on_serial.c:116,196";
	/* <Root>/LED4 */
	this.urlHashMap["Blinky_on_serial:4"] = "Blinky_on_serial.c:124,202";
	/* <Root>/LED5 */
	this.urlHashMap["Blinky_on_serial:68"] = "Blinky_on_serial.c:132,208";
	/* <Root>/LED6 */
	this.urlHashMap["Blinky_on_serial:69"] = "Blinky_on_serial.c:140,214";
	/* <Root>/LED7 */
	this.urlHashMap["Blinky_on_serial:70"] = "Blinky_on_serial.c:148,220";
	/* <Root>/LED8 */
	this.urlHashMap["Blinky_on_serial:71"] = "Blinky_on_serial.c:156,226";
	/* <Root>/SCI Receive */
	this.urlHashMap["Blinky_on_serial:15"] = "Blinky_on_serial.c:32,177&Blinky_on_serial.h:49";
	/* <Root>/SCI Receive1 */
	this.urlHashMap["Blinky_on_serial:89"] = "msg=&block=Blinky_on_serial:89";
	/* <Root>/SCI Transmit */
	this.urlHashMap["Blinky_on_serial:78"] = "msg=rtwMsg_notTraceable&block=Blinky_on_serial:78";
	/* <Root>/Subsystem */
	this.urlHashMap["Blinky_on_serial:87"] = "msg=&block=Blinky_on_serial:87";
	/* <Root>/Subsystem1 */
	this.urlHashMap["Blinky_on_serial:91"] = "msg=&block=Blinky_on_serial:91";
	/* <S1>/In1 */
	this.urlHashMap["Blinky_on_serial:45"] = "Blinky_on_serial.c:55&Blinky_on_serial.h:54";
	/* <S1>/Action Port */
	this.urlHashMap["Blinky_on_serial:46"] = "Blinky_on_serial.c:63";
	/* <S1>/Out1 */
	this.urlHashMap["Blinky_on_serial:47"] = "Blinky_on_serial.c:233&Blinky_on_serial.h:60&Blinky_on_serial_data.c:25";
	/* <S2>/In1 */
	this.urlHashMap["Blinky_on_serial:50"] = "Blinky_on_serial.c:56&Blinky_on_serial.h:53";
	/* <S2>/Action Port */
	this.urlHashMap["Blinky_on_serial:51"] = "Blinky_on_serial.c:70";
	/* <S2>/Out1 */
	this.urlHashMap["Blinky_on_serial:52"] = "Blinky_on_serial.c:239&Blinky_on_serial.h:63&Blinky_on_serial_data.c:28";
	/* <S3>/In1 */
	this.urlHashMap["Blinky_on_serial:55"] = "Blinky_on_serial.c:57&Blinky_on_serial.h:52";
	/* <S3>/Action Port */
	this.urlHashMap["Blinky_on_serial:56"] = "Blinky_on_serial.c:77";
	/* <S3>/Out1 */
	this.urlHashMap["Blinky_on_serial:57"] = "Blinky_on_serial.c:245&Blinky_on_serial.h:66&Blinky_on_serial_data.c:31";
	/* <S4>/In1 */
	this.urlHashMap["Blinky_on_serial:60"] = "Blinky_on_serial.c:58&Blinky_on_serial.h:51";
	/* <S4>/Action Port */
	this.urlHashMap["Blinky_on_serial:61"] = "Blinky_on_serial.c:84";
	/* <S4>/Out1 */
	this.urlHashMap["Blinky_on_serial:62"] = "Blinky_on_serial.c:251&Blinky_on_serial.h:69&Blinky_on_serial_data.c:34";
	/* <S5>/In1 */
	this.urlHashMap["Blinky_on_serial:65"] = "Blinky_on_serial.c:59&Blinky_on_serial.h:50";
	/* <S5>/Action Port */
	this.urlHashMap["Blinky_on_serial:66"] = "Blinky_on_serial.c:91";
	/* <S5>/Out1 */
	this.urlHashMap["Blinky_on_serial:67"] = "Blinky_on_serial.c:257&Blinky_on_serial.h:72&Blinky_on_serial_data.c:37";
	/* <S6>/In1 */
	this.urlHashMap["Blinky_on_serial:102"] = "msg=&block=Blinky_on_serial:102";
	/* <S6>/Action Port */
	this.urlHashMap["Blinky_on_serial:103"] = "msg=&block=Blinky_on_serial:103";
	/* <S6>/Out1 */
	this.urlHashMap["Blinky_on_serial:104"] = "msg=&block=Blinky_on_serial:104";
	/* <S7>/In1 */
	this.urlHashMap["Blinky_on_serial:106"] = "msg=&block=Blinky_on_serial:106";
	/* <S7>/Action Port */
	this.urlHashMap["Blinky_on_serial:107"] = "msg=&block=Blinky_on_serial:107";
	/* <S7>/Out1 */
	this.urlHashMap["Blinky_on_serial:108"] = "msg=&block=Blinky_on_serial:108";
	/* <S8>/Enable */
	this.urlHashMap["Blinky_on_serial:88"] = "msg=&block=Blinky_on_serial:88";
	/* <S8>/Constant5 */
	this.urlHashMap["Blinky_on_serial:113"] = "msg=&block=Blinky_on_serial:113";
	/* <S8>/Constant6 */
	this.urlHashMap["Blinky_on_serial:114"] = "msg=&block=Blinky_on_serial:114";
	/* <S8>/Constant7 */
	this.urlHashMap["Blinky_on_serial:115"] = "msg=&block=Blinky_on_serial:115";
	/* <S8>/Constant8 */
	this.urlHashMap["Blinky_on_serial:120"] = "msg=&block=Blinky_on_serial:120";
	/* <S8>/LED10 */
	this.urlHashMap["Blinky_on_serial:117"] = "msg=&block=Blinky_on_serial:117";
	/* <S8>/LED11 */
	this.urlHashMap["Blinky_on_serial:118"] = "msg=&block=Blinky_on_serial:118";
	/* <S8>/LED12 */
	this.urlHashMap["Blinky_on_serial:119"] = "msg=&block=Blinky_on_serial:119";
	/* <S8>/LED9 */
	this.urlHashMap["Blinky_on_serial:116"] = "msg=&block=Blinky_on_serial:116";
	/* <S9>/Enable */
	this.urlHashMap["Blinky_on_serial:92"] = "msg=&block=Blinky_on_serial:92";
	/* <S9>/Constant5 */
	this.urlHashMap["Blinky_on_serial:93"] = "msg=&block=Blinky_on_serial:93";
	/* <S9>/Constant6 */
	this.urlHashMap["Blinky_on_serial:94"] = "msg=&block=Blinky_on_serial:94";
	/* <S9>/Constant7 */
	this.urlHashMap["Blinky_on_serial:95"] = "msg=&block=Blinky_on_serial:95";
	/* <S9>/Constant8 */
	this.urlHashMap["Blinky_on_serial:96"] = "msg=&block=Blinky_on_serial:96";
	/* <S9>/LED10 */
	this.urlHashMap["Blinky_on_serial:97"] = "msg=&block=Blinky_on_serial:97";
	/* <S9>/LED11 */
	this.urlHashMap["Blinky_on_serial:98"] = "msg=&block=Blinky_on_serial:98";
	/* <S9>/LED12 */
	this.urlHashMap["Blinky_on_serial:99"] = "msg=&block=Blinky_on_serial:99";
	/* <S9>/LED9 */
	this.urlHashMap["Blinky_on_serial:100"] = "msg=&block=Blinky_on_serial:100";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Blinky_on_serial"};
	this.sidHashMap["Blinky_on_serial"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Blinky_on_serial:44"};
	this.sidHashMap["Blinky_on_serial:44"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "Blinky_on_serial:49"};
	this.sidHashMap["Blinky_on_serial:49"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "Blinky_on_serial:54"};
	this.sidHashMap["Blinky_on_serial:54"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "Blinky_on_serial:59"};
	this.sidHashMap["Blinky_on_serial:59"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<S5>"] = {sid: "Blinky_on_serial:64"};
	this.sidHashMap["Blinky_on_serial:64"] = {rtwname: "<S5>"};
	this.rtwnameHashMap["<S6>"] = {sid: "Blinky_on_serial:101"};
	this.sidHashMap["Blinky_on_serial:101"] = {rtwname: "<S6>"};
	this.rtwnameHashMap["<S7>"] = {sid: "Blinky_on_serial:105"};
	this.sidHashMap["Blinky_on_serial:105"] = {rtwname: "<S7>"};
	this.rtwnameHashMap["<S8>"] = {sid: "Blinky_on_serial:87"};
	this.sidHashMap["Blinky_on_serial:87"] = {rtwname: "<S8>"};
	this.rtwnameHashMap["<S9>"] = {sid: "Blinky_on_serial:91"};
	this.sidHashMap["Blinky_on_serial:91"] = {rtwname: "<S9>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "Blinky_on_serial:29"};
	this.sidHashMap["Blinky_on_serial:29"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "Blinky_on_serial:48"};
	this.sidHashMap["Blinky_on_serial:48"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/Constant2"] = {sid: "Blinky_on_serial:53"};
	this.sidHashMap["Blinky_on_serial:53"] = {rtwname: "<Root>/Constant2"};
	this.rtwnameHashMap["<Root>/Constant3"] = {sid: "Blinky_on_serial:58"};
	this.sidHashMap["Blinky_on_serial:58"] = {rtwname: "<Root>/Constant3"};
	this.rtwnameHashMap["<Root>/Constant4"] = {sid: "Blinky_on_serial:63"};
	this.sidHashMap["Blinky_on_serial:63"] = {rtwname: "<Root>/Constant4"};
	this.rtwnameHashMap["<Root>/Constant5"] = {sid: "Blinky_on_serial:109"};
	this.sidHashMap["Blinky_on_serial:109"] = {rtwname: "<Root>/Constant5"};
	this.rtwnameHashMap["<Root>/Constant6"] = {sid: "Blinky_on_serial:110"};
	this.sidHashMap["Blinky_on_serial:110"] = {rtwname: "<Root>/Constant6"};
	this.rtwnameHashMap["<Root>/If"] = {sid: "Blinky_on_serial:28"};
	this.sidHashMap["Blinky_on_serial:28"] = {rtwname: "<Root>/If"};
	this.rtwnameHashMap["<Root>/If Action Subsystem"] = {sid: "Blinky_on_serial:44"};
	this.sidHashMap["Blinky_on_serial:44"] = {rtwname: "<Root>/If Action Subsystem"};
	this.rtwnameHashMap["<Root>/If Action Subsystem1"] = {sid: "Blinky_on_serial:49"};
	this.sidHashMap["Blinky_on_serial:49"] = {rtwname: "<Root>/If Action Subsystem1"};
	this.rtwnameHashMap["<Root>/If Action Subsystem2"] = {sid: "Blinky_on_serial:54"};
	this.sidHashMap["Blinky_on_serial:54"] = {rtwname: "<Root>/If Action Subsystem2"};
	this.rtwnameHashMap["<Root>/If Action Subsystem3"] = {sid: "Blinky_on_serial:59"};
	this.sidHashMap["Blinky_on_serial:59"] = {rtwname: "<Root>/If Action Subsystem3"};
	this.rtwnameHashMap["<Root>/If Action Subsystem4"] = {sid: "Blinky_on_serial:64"};
	this.sidHashMap["Blinky_on_serial:64"] = {rtwname: "<Root>/If Action Subsystem4"};
	this.rtwnameHashMap["<Root>/If Action Subsystem5"] = {sid: "Blinky_on_serial:101"};
	this.sidHashMap["Blinky_on_serial:101"] = {rtwname: "<Root>/If Action Subsystem5"};
	this.rtwnameHashMap["<Root>/If Action Subsystem6"] = {sid: "Blinky_on_serial:105"};
	this.sidHashMap["Blinky_on_serial:105"] = {rtwname: "<Root>/If Action Subsystem6"};
	this.rtwnameHashMap["<Root>/If1"] = {sid: "Blinky_on_serial:90"};
	this.sidHashMap["Blinky_on_serial:90"] = {rtwname: "<Root>/If1"};
	this.rtwnameHashMap["<Root>/LED1"] = {sid: "Blinky_on_serial:1"};
	this.sidHashMap["Blinky_on_serial:1"] = {rtwname: "<Root>/LED1"};
	this.rtwnameHashMap["<Root>/LED2"] = {sid: "Blinky_on_serial:2"};
	this.sidHashMap["Blinky_on_serial:2"] = {rtwname: "<Root>/LED2"};
	this.rtwnameHashMap["<Root>/LED3"] = {sid: "Blinky_on_serial:3"};
	this.sidHashMap["Blinky_on_serial:3"] = {rtwname: "<Root>/LED3"};
	this.rtwnameHashMap["<Root>/LED4"] = {sid: "Blinky_on_serial:4"};
	this.sidHashMap["Blinky_on_serial:4"] = {rtwname: "<Root>/LED4"};
	this.rtwnameHashMap["<Root>/LED5"] = {sid: "Blinky_on_serial:68"};
	this.sidHashMap["Blinky_on_serial:68"] = {rtwname: "<Root>/LED5"};
	this.rtwnameHashMap["<Root>/LED6"] = {sid: "Blinky_on_serial:69"};
	this.sidHashMap["Blinky_on_serial:69"] = {rtwname: "<Root>/LED6"};
	this.rtwnameHashMap["<Root>/LED7"] = {sid: "Blinky_on_serial:70"};
	this.sidHashMap["Blinky_on_serial:70"] = {rtwname: "<Root>/LED7"};
	this.rtwnameHashMap["<Root>/LED8"] = {sid: "Blinky_on_serial:71"};
	this.sidHashMap["Blinky_on_serial:71"] = {rtwname: "<Root>/LED8"};
	this.rtwnameHashMap["<Root>/SCI Receive"] = {sid: "Blinky_on_serial:15"};
	this.sidHashMap["Blinky_on_serial:15"] = {rtwname: "<Root>/SCI Receive"};
	this.rtwnameHashMap["<Root>/SCI Receive1"] = {sid: "Blinky_on_serial:89"};
	this.sidHashMap["Blinky_on_serial:89"] = {rtwname: "<Root>/SCI Receive1"};
	this.rtwnameHashMap["<Root>/SCI Transmit"] = {sid: "Blinky_on_serial:78"};
	this.sidHashMap["Blinky_on_serial:78"] = {rtwname: "<Root>/SCI Transmit"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "Blinky_on_serial:87"};
	this.sidHashMap["Blinky_on_serial:87"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<Root>/Subsystem1"] = {sid: "Blinky_on_serial:91"};
	this.sidHashMap["Blinky_on_serial:91"] = {rtwname: "<Root>/Subsystem1"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "Blinky_on_serial:45"};
	this.sidHashMap["Blinky_on_serial:45"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Action Port"] = {sid: "Blinky_on_serial:46"};
	this.sidHashMap["Blinky_on_serial:46"] = {rtwname: "<S1>/Action Port"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "Blinky_on_serial:47"};
	this.sidHashMap["Blinky_on_serial:47"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "Blinky_on_serial:50"};
	this.sidHashMap["Blinky_on_serial:50"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Action Port"] = {sid: "Blinky_on_serial:51"};
	this.sidHashMap["Blinky_on_serial:51"] = {rtwname: "<S2>/Action Port"};
	this.rtwnameHashMap["<S2>/Out1"] = {sid: "Blinky_on_serial:52"};
	this.sidHashMap["Blinky_on_serial:52"] = {rtwname: "<S2>/Out1"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "Blinky_on_serial:55"};
	this.sidHashMap["Blinky_on_serial:55"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/Action Port"] = {sid: "Blinky_on_serial:56"};
	this.sidHashMap["Blinky_on_serial:56"] = {rtwname: "<S3>/Action Port"};
	this.rtwnameHashMap["<S3>/Out1"] = {sid: "Blinky_on_serial:57"};
	this.sidHashMap["Blinky_on_serial:57"] = {rtwname: "<S3>/Out1"};
	this.rtwnameHashMap["<S4>/In1"] = {sid: "Blinky_on_serial:60"};
	this.sidHashMap["Blinky_on_serial:60"] = {rtwname: "<S4>/In1"};
	this.rtwnameHashMap["<S4>/Action Port"] = {sid: "Blinky_on_serial:61"};
	this.sidHashMap["Blinky_on_serial:61"] = {rtwname: "<S4>/Action Port"};
	this.rtwnameHashMap["<S4>/Out1"] = {sid: "Blinky_on_serial:62"};
	this.sidHashMap["Blinky_on_serial:62"] = {rtwname: "<S4>/Out1"};
	this.rtwnameHashMap["<S5>/In1"] = {sid: "Blinky_on_serial:65"};
	this.sidHashMap["Blinky_on_serial:65"] = {rtwname: "<S5>/In1"};
	this.rtwnameHashMap["<S5>/Action Port"] = {sid: "Blinky_on_serial:66"};
	this.sidHashMap["Blinky_on_serial:66"] = {rtwname: "<S5>/Action Port"};
	this.rtwnameHashMap["<S5>/Out1"] = {sid: "Blinky_on_serial:67"};
	this.sidHashMap["Blinky_on_serial:67"] = {rtwname: "<S5>/Out1"};
	this.rtwnameHashMap["<S6>/In1"] = {sid: "Blinky_on_serial:102"};
	this.sidHashMap["Blinky_on_serial:102"] = {rtwname: "<S6>/In1"};
	this.rtwnameHashMap["<S6>/Action Port"] = {sid: "Blinky_on_serial:103"};
	this.sidHashMap["Blinky_on_serial:103"] = {rtwname: "<S6>/Action Port"};
	this.rtwnameHashMap["<S6>/Out1"] = {sid: "Blinky_on_serial:104"};
	this.sidHashMap["Blinky_on_serial:104"] = {rtwname: "<S6>/Out1"};
	this.rtwnameHashMap["<S7>/In1"] = {sid: "Blinky_on_serial:106"};
	this.sidHashMap["Blinky_on_serial:106"] = {rtwname: "<S7>/In1"};
	this.rtwnameHashMap["<S7>/Action Port"] = {sid: "Blinky_on_serial:107"};
	this.sidHashMap["Blinky_on_serial:107"] = {rtwname: "<S7>/Action Port"};
	this.rtwnameHashMap["<S7>/Out1"] = {sid: "Blinky_on_serial:108"};
	this.sidHashMap["Blinky_on_serial:108"] = {rtwname: "<S7>/Out1"};
	this.rtwnameHashMap["<S8>/Enable"] = {sid: "Blinky_on_serial:88"};
	this.sidHashMap["Blinky_on_serial:88"] = {rtwname: "<S8>/Enable"};
	this.rtwnameHashMap["<S8>/Constant5"] = {sid: "Blinky_on_serial:113"};
	this.sidHashMap["Blinky_on_serial:113"] = {rtwname: "<S8>/Constant5"};
	this.rtwnameHashMap["<S8>/Constant6"] = {sid: "Blinky_on_serial:114"};
	this.sidHashMap["Blinky_on_serial:114"] = {rtwname: "<S8>/Constant6"};
	this.rtwnameHashMap["<S8>/Constant7"] = {sid: "Blinky_on_serial:115"};
	this.sidHashMap["Blinky_on_serial:115"] = {rtwname: "<S8>/Constant7"};
	this.rtwnameHashMap["<S8>/Constant8"] = {sid: "Blinky_on_serial:120"};
	this.sidHashMap["Blinky_on_serial:120"] = {rtwname: "<S8>/Constant8"};
	this.rtwnameHashMap["<S8>/LED10"] = {sid: "Blinky_on_serial:117"};
	this.sidHashMap["Blinky_on_serial:117"] = {rtwname: "<S8>/LED10"};
	this.rtwnameHashMap["<S8>/LED11"] = {sid: "Blinky_on_serial:118"};
	this.sidHashMap["Blinky_on_serial:118"] = {rtwname: "<S8>/LED11"};
	this.rtwnameHashMap["<S8>/LED12"] = {sid: "Blinky_on_serial:119"};
	this.sidHashMap["Blinky_on_serial:119"] = {rtwname: "<S8>/LED12"};
	this.rtwnameHashMap["<S8>/LED9"] = {sid: "Blinky_on_serial:116"};
	this.sidHashMap["Blinky_on_serial:116"] = {rtwname: "<S8>/LED9"};
	this.rtwnameHashMap["<S9>/Enable"] = {sid: "Blinky_on_serial:92"};
	this.sidHashMap["Blinky_on_serial:92"] = {rtwname: "<S9>/Enable"};
	this.rtwnameHashMap["<S9>/Constant5"] = {sid: "Blinky_on_serial:93"};
	this.sidHashMap["Blinky_on_serial:93"] = {rtwname: "<S9>/Constant5"};
	this.rtwnameHashMap["<S9>/Constant6"] = {sid: "Blinky_on_serial:94"};
	this.sidHashMap["Blinky_on_serial:94"] = {rtwname: "<S9>/Constant6"};
	this.rtwnameHashMap["<S9>/Constant7"] = {sid: "Blinky_on_serial:95"};
	this.sidHashMap["Blinky_on_serial:95"] = {rtwname: "<S9>/Constant7"};
	this.rtwnameHashMap["<S9>/Constant8"] = {sid: "Blinky_on_serial:96"};
	this.sidHashMap["Blinky_on_serial:96"] = {rtwname: "<S9>/Constant8"};
	this.rtwnameHashMap["<S9>/LED10"] = {sid: "Blinky_on_serial:97"};
	this.sidHashMap["Blinky_on_serial:97"] = {rtwname: "<S9>/LED10"};
	this.rtwnameHashMap["<S9>/LED11"] = {sid: "Blinky_on_serial:98"};
	this.sidHashMap["Blinky_on_serial:98"] = {rtwname: "<S9>/LED11"};
	this.rtwnameHashMap["<S9>/LED12"] = {sid: "Blinky_on_serial:99"};
	this.sidHashMap["Blinky_on_serial:99"] = {rtwname: "<S9>/LED12"};
	this.rtwnameHashMap["<S9>/LED9"] = {sid: "Blinky_on_serial:100"};
	this.sidHashMap["Blinky_on_serial:100"] = {rtwname: "<S9>/LED9"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
