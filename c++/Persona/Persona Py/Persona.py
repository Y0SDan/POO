#Aqui va a ir la lista de jerarquias de persona sjsjsjsjsjsjsj s;v

class Persona:
    def __init__(self, nombre, edad, sexo):
        self.nombre = nombre
        self.edad = edad
        self.sexo = sexo
    def setNombre(self, nombre):
        self.nobmre = nombre
    def getNombre(self):
        return self.nombre
    def setEdad(self, edad):
        self.edad = edad
    def getEdad(self):
        return self.edad
    def setSexo(self, sexo):
        self.sexo = sexo
    def getSexo(self):
        return self.sexo

class Estudiante(Persona):
    def __init__(self, nombre, edad, sexo, matricula, grado, carrera):
        super().__init__(nombre, edad, sexo)
        self.matricula = matricula
        self.grado = grado
        self.carrera = carrera
    
    def setMatricula(self, matricula):
        self.matricula = matricula

    def getMatricula(self):
        return self.matricula

    