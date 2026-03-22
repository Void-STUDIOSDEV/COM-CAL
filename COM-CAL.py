import time

print("COMMUNITY CALCULATOR 01.00.00")
print("COPYRIGHT VOID STUDIOS, VOID STUDIOS SOURCE PROGRAMS 2025-2026")
print("Utilizing the GNU General Public License 2.")
print("Reconstruction of Py-Calculator.")
#The introduction to the program.


while True:
	print("ADDITION [+], MULTIPLICATIONS [X], DIVISION [/], SUBTRACTION [-]. POWER [^], REMAINDER [*], PERCENT OF [%], PERCENT OF [>], EXIT [E]")
	c = input("[INPUT] ").upper()
	#Allows input & knowing possible selections

	if c == "E":
		print("THANK YOU FOR USING THE COMMUNITY-CALCULATOR!")
		print("3 SECONDS UNTIL EXIT. COMMAND CANNOT BE REVERTED")
		time.sleep(1); print("2 SECONDS")
		time.sleep(1); print("1 SECONDS")
		time.sleep(0); print("GOODBYE!")
		break

	if c == "+":
		a = float(input("\nENTER NUMBER: "))
		b = float(input("ENTER SECOND: "))
		total = a + b
		print(f"TOTAL: {total}")

	if c == "X":
		a = float(input("\nENTER NUMBER: "))
		b = float(input("ENTER SECOND: "))
		total = a * b
		print(f"TOTAL: {total}")

	if c == "/":
		a = float(input("\nENTER NUMBER: "))
		b = float(input("ENTER SECOND: "))
		total = a / b
		print(f"TOTAL: {total}")

	if c == "-":
		a = float(input("\nENTER NUMBER: "))
		b = float(input("ENTER SECOND: "))
		total = a - b
		print(f"TOTAL: {total}")

	if c == "^":
		base = float(input("\nENTER NUMBER: "))
		exponent = float(input("ENTER SECOND: "))
		total = base ** exponent
		print(f"TOTAL: {total}")

	if c == "*":
		a = float(input("\nENTER NUMBER: "))
		b = float(input("ENTER SECOND: "))
		total = a % b
		print(f"TOTAL: {total}")

	if c == "%":
		percent = float(input"\nENTER NUMBER: "))
		num = float(input("ENTER SECOND: "))
		total = (percent / 100) * num
		print(f"TOTAL: {total}")

	if c == ">":
		num = float(input("\nENTER PART: "))
		total = float(input("ENTER TOTAL: "))
		percent = (num / total) * 100
		print(f"{num} is {percent}% of {total}")

	if c not in ["+", "X", "/", "-", "^", "*", "%", ">"]:
		print("\nINVALID INPUT...")


#Use this to find words:
#!!SEARCH-FUNCTION DOES NOT WORK IN TERMINAL!!
