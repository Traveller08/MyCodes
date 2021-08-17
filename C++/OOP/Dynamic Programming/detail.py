class details:
    def __init__(self,Name,Class,A_Marks,B_Marks,C_Marks):
        self.Name=Name
        self.Class=Class
        self.A_Marks=A_Marks
        self.B_Marks=B_Marks
        self.C_Marks=C_Marks
    def percentage(self):
        total_marks=self.A_Marks+self.B_Marks+self.C_Marks
        percent=total_marks/3
        print(percent)


p1= details("Ramesh", 12,78,56,80)

print(p1.percentage())


