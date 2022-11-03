class Hora:
    def iniHora(self):
        self.hora = 0
        self.min = 0
        self.seg = 0

    def setHora(self,h):
        if self.hora > 0 and self.hora < 24:
            self.hora = h
            return True

    def setMin(self,m):
        if self.min > 0 and self.min <= 60:
            self.min = m
            return True

    def setSeg(self,s):
        if self.seg > 0 and self.seg <= 60:
            self.seg = s
            return True

    def getHora(self):
        return self.hora

    def getMin(self):
        return self.min

    def getSeg(self):
        return self.seg

    def hEstandar(self):
        if self.hora == 12 or self.hora == 0:
            print(str(self.getHora()),end)
#main
h = Hora()

h.iniHora()

print("La hora inicial estandar es: ")
