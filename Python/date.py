class Date:
    def iniDate(self):
        self.day = 0
        self.month = 0
        self.year = 0

    def leapYear(self):
        if self.year % 4 == 0 and self.year % 100 != 0 or self.year % 400 == 0:
            return True


    def setDay(self, d):
        if self.month == 1 or self.month == 3 or self.month == 5 or self.month == 7 or self.month == 8 or self.month == 10 or self.month == 12:
            if d < 1 or d > 31:
                return False
        if self.month == 2:
            if self.leapYear():
                if d < 1 or d > 29:
                    return False
            else:
                if d < 1 or d > 28:
                    return False
        if self.month == 4 or self.month == 6 or self.month == 9 or self.month == 11:
            if d < 1 or d > 30:
                return False
        self.day = d
        return True

    def setMonth(self, m):
        if m >= 1 and m <= 12:
            self.month = m
            return True
        else: return False


    def setYear(self,y):
        if y >= 1900 and y <= 2100:
            self.year = y
            return True
        else: return False

    def getDay(self):
        return self.day

    def getMonth(self):
        return self.month

    def getYear(self):
        return self.year

    def nextDay(self):
        aux = self.day + 1

        if not self.setDay(aux) and not self.setMonth(aux) and not self.setYear(aux):
            self.day = 1
            self.month = self.month + 1
            if not self.setDay(aux) and not self.setMonth(aux) and not self.setYear(aux):
                self.month = 1
                self.year = self.year + 1;

#main

date = Date()

date.iniDate()

print("La fecha inicial es: " + str(date.getDay()) + "/" + str(date.getMonth()) + "/" + str(date.getYear()))

date.setDay(3)
date.setMonth(11)
date.setYear(2020)

print("La fecha actual es: " + str(date.getDay()) + "/" + str(date.getMonth()) + "/" + str(date.getYear()))

date.nextDay()
print("La fecha del dia siguiente es: " + str(date.getDay()) + "/" + str(date.getMonth()) + "/" + str(date.getYear()))
