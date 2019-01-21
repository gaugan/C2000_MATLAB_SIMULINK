function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["ADC_LED_CAN.c:42c60"]=1;
    this.traceFlag["ADC_LED_CAN.c:53c62"]=1;
    this.traceFlag["ADC_LED_CAN.c:64c71"]=1;
    this.traceFlag["ADC_LED_CAN.c:90c73"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["ADC_LED_CAN.c:42"]=1;
    this.lineTraceFlag["ADC_LED_CAN.c:43"]=1;
    this.lineTraceFlag["ADC_LED_CAN.c:53"]=1;
    this.lineTraceFlag["ADC_LED_CAN.c:54"]=1;
    this.lineTraceFlag["ADC_LED_CAN.c:64"]=1;
    this.lineTraceFlag["ADC_LED_CAN.c:65"]=1;
    this.lineTraceFlag["ADC_LED_CAN.c:90"]=1;
    this.lineTraceFlag["ADC_LED_CAN.c:91"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
