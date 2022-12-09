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

    def setGRado(self, grado):
        self.grado = grado
    
    def getGrado(self):
        return self.grado
    
    def setCarrera(self, carrera):
        self.carrera = carrera

    def getCarrera(self):
        return self.carrera

class Profesor(Persona):
    def __init__(self, nombre, edad, sexo, materia, instituto, cubo):
        super().__init__(nombre, edad, sexo)
        self.setMateria(materia)
        self.setIstituto(instituto)
        self.setCubo(cubo)

    def setMateria(self, mateira):
        self.materia = mateira
    
    def getMateria(this):
        return this.materia
    
    def setInstituto(this, instituto):
        this.instituto = instituto
    
    def getInstituto(this):
        return this.instituto
    
    def setCubo(this, cubo):
        this.cubo = cubo

    def getCubo(this):
        return this.cubo

class Administrativo(Persona):
    def __init__(self, nombre, edad, sexo, departamento, funcion, sueldo):
        super().__init__(nombre, edad, sexo)
        self.setDepartamento(departamento)
        self.setFuncion(funcion)
        self.setSueldo(sueldo)

    def setSueldo(this, sueldo):
        this.sueldo = sueldo

    def getSueldo(this):
        return this.sueldo
    
    def setFuncion(this, funcion):
        this.funcion = funcion
    
    def getFuncion(this):
        return this.fuincion

    def setDepartamento(this, departamento):
        this.departamento = departamento
    
    def getDepartamento(this):
        return this.departamento

