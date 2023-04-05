import pywhatkit

hour = 21
minutes = 10

#NUMBER_TO_SEND_TO -------------------------- DON'T FORGET THE COUNTRY CODE
#MESSAGE ------------------------------------ STRING
#HOUR --------------------------------------- DON'T USE PM OR AM (9MP -> 21)
#MINUTES ------------------------------------ INTENGER
#DELAY_SECONDS ------------------------------ SECONDS TO WAIT BEFORE SENDING A MESSAGE (HELPS TO WAIT FOR THE BROWSER TO OPEN)
#CLOSE_TAB_AFTER_SENDING_MESSAGE ------------ TRUE OR FALSE

pywhatkit.sendwhatmsg("NUMBER_TO_SEND_TO", MESSAGE, HOUR, MINUTES, DELAY_SECONDS, CLOSE_TAB_AFTER_SENDING_MESSAGE)
