# 🚢 Proyecto MARES – Sistema de Gestión Marítima con Django

## 📌 Descripción

Este proyecto corresponde al desarrollo de una aplicación web utilizando el framework Django, orientada a la gestión de información marítima dentro del sistema MARES.

Se implementa una arquitectura modular, separando los modelos en múltiples archivos, permitiendo escalabilidad, mantenibilidad y buenas prácticas de desarrollo.

---

## 🎯 Objetivos

* Implementar un proyecto Django desde cero
* Configurar entorno virtual y dependencias
* Diseñar e implementar modelos de base de datos
* Aplicar relaciones entre entidades (ForeignKey)
* Gestionar base de datos mediante migraciones
* Utilizar el panel administrativo para operaciones CRUD

---

## ⚙️ Tecnologías utilizadas

* Python 3.x
* Django
* SQLite3
* Git Bash / PowerShell

---

## 📂 Estructura del Proyecto

```
MyDjangoProject/
│   manage.py
│   db.sqlite3
│   .gitignore
│
├── MyDjangoProject/
│   │   settings.py
│   │   urls.py
│   │   asgi.py
│   │   wsgi.py
│
└── MyWebApps/
    └── MyFirstApplication/
        │   admin.py
        │   apps.py
        │   views.py
        │   tests.py
        │
        ├── models/
        │   ├── Embarcacion.py
        │   ├── Posicion.py
        │   ├── Zona.py
        │   ├── Alerta.py
        │   ├── IncidenteSAR.py
        │   └── __init__.py
        │
        └── migrations/
            └── 0001_initial.py
```

---

## 🗄️ Diseño de Base de Datos

El sistema está compuesto por las siguientes entidades:

### 🚢 Embarcacion

Representa las embarcaciones registradas en el sistema.

* nombre
* tipo
* bandera
* estado
* fecha de creación

### 📍 Posicion

Registra la ubicación geográfica de una embarcación.

* relación con Embarcacion
* latitud
* longitud
* velocidad
* rumbo
* timestamp

### 🌊 Zona

Define áreas marítimas.

* nombre
* tipo
* descripción

### ⚠️ Alerta

Gestiona alertas asociadas a embarcaciones.

* relación con Embarcacion
* tipo
* descripción
* fecha
* estado

### 🚨 IncidenteSAR

Registra incidentes de búsqueda y rescate.

* relación con Embarcacion
* ubicación (latitud/longitud)
* estado
* fecha

---

## 🔗 Relaciones

* Embarcacion → Posicion (1:N)
* Embarcacion → Alerta (1:N)
* Embarcacion → IncidenteSAR (1:N)
* Zona (independiente)

---

## 🧪 Migraciones

Se utilizaron migraciones automáticas de Django para la creación de tablas:

```bash
python manage.py makemigrations
python manage.py migrate
```

---

## 👤 Usuario Administrador

Se creó un superusuario para acceder al panel de administración:

```bash
python manage.py createsuperuser
```

---

## 🖥️ Ejecución del Proyecto

```bash
python manage.py runserver
```

Acceso al sistema:

```
http://127.0.0.1:8000/admin/
```

---
## 🧪 Procedimiento de Desarrollo del Proyecto

### 1. Creación del directorio de trabajo

```bash
mkdir -p ~/iw/lab04
cd ~/iw/lab04
```

---

### 2. Creación de estructura inicial

```bash
mkdir exercises
mkdir my_env
```

---

### 3. Creación de entorno virtual

```bash
cd my_env
python -m venv .
```

---

### 4. Activación del entorno virtual

En Git Bash:

```bash
source Scripts/activate
```

---

### 5. Instalación de Django

```bash
pip install django
```

---

### 6. Generación de archivo de dependencias

```bash
pip freeze > requirements.txt
```

---

### 7. Creación del proyecto Django

```bash
django-admin startproject MyDjangoProject
```

---

### 8. Creación de la aplicación

```bash
cd MyDjangoProject
mkdir MyWebApps
cd MyWebApps
django-admin startapp MyFirstApplication
```

---

### 9. Estructuración de modelos (arquitectura modular)

Se eliminó el archivo tradicional:

```bash
models.py
```

Y se creó una estructura modular:

```bash
mkdir models
touch models/__init__.py
```

---

### 10. Creación de modelos del sistema MARES

Se implementaron los siguientes modelos:

* Embarcacion
* Posicion
* Zona
* Alerta
* IncidenteSAR

Cada uno definido en archivos independientes dentro de la carpeta `models/`.

---

### 11. Registro de modelos en el administrador

Archivo: `admin.py`

Se registraron todas las entidades para gestión CRUD desde el panel de administración.

---

### 12. Configuración de la aplicación en Django

Archivo: `settings.py`

```python
INSTALLED_APPS = [
    ...
    'MyWebApps.MyFirstApplication',
]
```

---

### 13. Configuración regional

```python
LANGUAGE_CODE = 'es-pe'
TIME_ZONE = 'America/Lima'
```

---

### 14. Migraciones de base de datos

```bash
python manage.py makemigrations
python manage.py migrate
```

---

### 15. Creación de superusuario

```bash
python manage.py createsuperuser
```

---

### 16. Ejecución del servidor

```bash
python manage.py runserver
```

---

### 17. Acceso al sistema

```text
http://127.0.0.1:8000/admin/
```

---

### 18. Verificación del sistema

Se validó el correcto funcionamiento del sistema mediante:

* Creación de registros
* Edición de datos
* Eliminación de registros
* Visualización de relaciones entre entidades

---

### 19. Estructura final del proyecto

```bash
tree /F /A
```

---

## 🗃️ Base de Datos

El proyecto utiliza SQLite como motor de base de datos.

Archivo incluido:

```
db.sqlite3
```

Este archivo contiene todas las tablas generadas y datos de prueba para validación.

---

## 📦 Dependencias

Archivo generado:

```
requirements.txt
```

Instalación:

```bash
pip install -r requirements.txt
```

---

## 🚫 Archivos Ignorados

Configuración en `.gitignore`:

```
my_env/
__pycache__/
*.pyc
```

---

## 🧠 Conclusiones

* Se implementó correctamente un sistema Django modular
* Se aplicaron buenas prácticas en organización del código
* Se logró la integración completa entre modelos, migraciones y administración
* El sistema permite operaciones CRUD completas desde el panel admin
