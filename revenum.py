N =int(input())
R = 0
while(N>0):
	Reminder = N %10
	R = (R *10) + Reminder
	N = N //10
print(R)
