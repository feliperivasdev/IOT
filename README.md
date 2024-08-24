# IOT
# IOT Labs

## Tabla de Contenido
- [Lab 1 Arduino LED Controller](#lab-1-arduino-led-controller)
  - [🛠️ Funcionalidad](#-funcionalidad)
  - [📋 Requisitos](#-requisitos)
  - [🔌 Conexiones](#-conexiones)
  - [🚀 Uso](#-uso)
  - [🖥️ Emulación en Tinkercad](#-emulación-en-tinkercad)
  - [📦 Materiales Requeridos](#-materiales-requeridos)
- [Lab 2 Simulación de Semáforo](#lab-2-simulación-de-semáforo)
  - [🛠️ Funcionalidad](#-funcionalidad-1)
  - [📋 Requisitos](#-requisitos-1)
  - [🔌 Conexiones](#-conexiones-1)
  - [🚀 Uso](#-uso-1)
  - [🖥️ Emulación en Tinkercad](#-emulación-en-tinkercad-1)
  - [📦 Materiales Requeridos](#-materiales-requeridos-1)

## Lab 1 Arduino LED Controller

Este código de Arduino permite controlar el encendido y apagado de luces RGB a través del monitor serial.

### 🛠️ Funcionalidad

El programa permite realizar las siguientes acciones:

- Encender y apagar el LED rojo 🔴
- Encender y apagar el LED verde 🟢
- Encender y apagar el LED azul 🔵
- Encender todas las luces ⚪
- Apagar todas las luces ⚫
- Hacer parpadear todas las luces ✨

Para controlar las luces, se utiliza el monitor serial del IDE de Arduino. Cada acción se activa presionando un número del `1` al `9` en el monitor serial.

### 📋 Requisitos

- Placa de Arduino
- 3 LEDs de colores (rojo, verde y azul)
- Resistencias para los LEDs (valor recomendado: 220 Ω)
- Cables de conexión
- Placa de pruebas (breadboard) para una conexión más sencilla

### 🔌 Conexiones

| Componente | Pin de Arduino |
|------------|----------------|
| LED rojo   | 11             |
| LED verde  | 12             |
| LED azul   | 13             |

- Sigue este diagrama esquemático para realizar las conexiones 

![image](https://github.com/user-attachments/assets/662b400b-dd2e-43fc-85b1-b8eea8799a77)

### 🚀 Uso

1. Carga el código en tu placa de Arduino.
2. Abre el monitor serial en el IDE de Arduino.
3. Ingresa los siguientes números para realizar las acciones:

| Opción | Acción                         |
|--------|--------------------------------|
| 1      | Encender LED rojo 🔴           |
| 2      | Apagar LED rojo 🔴             |
| 3      | Encender LED verde 🟢          |
| 4      | Apagar LED verde 🟢            |
| 5      | Encender LED azul 🔵           |
| 6      | Apagar LED azul 🔵             |
| 7      | Encender todas las luces ⚪     |
| 8      | Apagar todas las luces ⚫       |
| 9      | Hacer parpadear todas las luces ✨ |
| 0      | Detener el parpadeo            |

¡Disfruta de la iluminación controlada por tu Arduino! 💡

### 🖥️ Emulación en Tinkercad

Puedes emular este proyecto en Tinkercad para probar el código sin necesidad de hardware físico. Sigue estos pasos:

1. **Accede a Tinkercad:**
   - Ve a [Tinkercad](https://www.tinkercad.com) y crea una cuenta o inicia sesión.

2. **Crea un nuevo proyecto:**
   - Haz clic en "Circuits" (Circuitos) y luego en "Create new Circuit" (Crear nuevo circuito).

3. **Añade los componentes:**
   - Arrastra y coloca una placa de Arduino Uno en el área de trabajo.
   - Añade 3 LEDs (rojo, verde y azul) y conéctalos a los pines correspondientes (11, 12 y 13).
   - Añade resistencias de 220 Ω a cada LED.
   - Conecta los LEDs y resistencias de acuerdo a las conexiones descritas en la sección **🔌 Conexiones**.
   - Guíate de esta imagen para las conexiones

    ![Conexiones](https://github.com/user-attachments/assets/d575a196-3892-4015-98ac-ee232785bbfe)

4. **Carga el código:**
   - Haz clic en "Code" (Código) y selecciona "Blocks + Text" (Bloques + Texto) o "Text" (Texto).
   - Copia y pega el código proporcionado en el editor de código.

5. **Simula el circuito:**
   - Haz clic en "Start Simulation" (Iniciar simulación) para probar el funcionamiento del código y ver cómo se controlan los LEDs.

### 📦 Materiales Requeridos

- Arduino Uno
- 3 LEDs (rojo, verde, azul)
- 3 resistencias de 220 Ω
- Cables de conexión
- Placa de pruebas (breadboard) para una conexión más sencilla

Con estos pasos podrás emular y probar el controlador de LEDs RGB en Tinkercad antes de realizar el montaje físico. ¡Diviértete experimentando con tu proyecto de Arduino! 🚀

---

## Lab 2 Simulación de Semáforo

Este proyecto de Arduino simula el comportamiento de un semáforo utilizando tres LEDs (Rojo, Amarillo y Verde). El código sigue la secuencia típica de un semáforo: Rojo → Amarillo → Verde → Amarillo → Rojo, y se repite en un ciclo continuo.

### 🛠️ Funcionalidad

El programa controla los LEDs para simular un semáforo con las siguientes etapas:

- **Luz Roja:** Indica que los vehículos deben detenerse.
- **Luz Amarilla (Transición de Rojo a Verde):** Indica que se aproxima un cambio a la luz verde.
- **Luz Verde:** Indica que los vehículos pueden avanzar.
- **Luz Amarilla (Transición de Verde a Rojo):** Indica que se aproxima un cambio a la luz roja.

### 📋 Requisitos

- Placa de Arduino
- 3 LEDs de colores (rojo, amarillo y verde)
- Resistencias para los LEDs (valor recomendado: 220 Ω)
- Cables de conexión
- Placa de pruebas (breadboard) para una conexión más sencilla

### 🔌 Conexiones

| Componente | Pin de Arduino |
|------------|----------------|
| LED rojo   | 11             |
| LED amarillo | 13           |
| LED verde  | 12             |

Conecta cada LED a su respectivo pin en la placa Arduino, asegurándote de incluir una resistencia en serie para cada LED.

### 🚀 Uso

1. Carga el código en tu placa de Arduino.
2. Observa cómo el semáforo simula la secuencia correcta de luces en un ciclo continuo:
   - Luz Roja → Luz Amarilla → Luz Verde → Luz Amarilla → Luz Roja.
3. Ajusta los tiempos de duración para cada luz si es necesario, modificando las constantes definidas en el código.

### 🖥️ Emulación en Tinkercad

También puedes emular este proyecto en Tinkercad siguiendo estos pasos:

1. **Accede a Tinkercad:**
   - Ve a [Tinkercad](https://www.tinkercad.com) y crea una cuenta o inicia sesión.

2. **Crea un nuevo proyecto:**
   - Haz clic en "Circuits" (Circuitos) y luego en "Create new Circuit" (Crear nuevo circuito).

3. **Añade los componentes:**
   - Arrastra una placa de Arduino Uno al área de trabajo.
   - Añade 3 LEDs (rojo, amarillo y verde) y conéctalos a los pines correspondientes (11, 13 y 12).
   - Añade resistencias de 220 Ω a cada LED.
   - Conecta los LEDs y resistencias de acuerdo a las conexiones descritas en la sección **🔌 Conexiones**.

4. **Carga el código:**
   - Haz clic en "Code" (Código) y selecciona "Blocks + Text" (Bloques + Texto) o "Text" (Texto).
   - Copia y pega el código del semáforo en el editor de código.

5. **Simula el circuito:**
   - Haz clic en "Start Simulation" (Iniciar simulación) para ver cómo el semáforo simula la secuencia de luces.

### 📦 Materiales Requeridos

- Arduino Uno
- 3 LEDs (rojo, amarillo, verde)
- 3 resistencias de 220 Ω
- Cables de conexión
- Placa de pruebas (breadboard) para una conexión más sencilla

Con este proyecto podrás simular el funcionamiento de un semáforo real utilizando tu Arduino. ¡Diviértete construyendo y aprendiendo! 🚦
