name = input("What's your name?\n")
lab_grade = input("Enter the " + name + "'s lab grade\n")
midterm_grade = input("Enter the " + name + "'s midterm grade\n")
final_grade = input("Enter the " + name + "'s final grade\n")

result = (int(lab_grade) * 0.25) + (int(midterm_grade) * 0.35) + (int(final_grade) * 0.40)

print("Name: " + name + "\n")
print("Lab: " + lab_grade + "\n")
print("Midterm: " + midterm_grade + "\n")
print("Final: " + final_grade + "\n")
print("Last Score: " + str(result) + "\n")