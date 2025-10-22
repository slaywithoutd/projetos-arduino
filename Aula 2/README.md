
# IoT - Módulo 1 - Segunda Aula

## Sobre o Projeto

Nesta aula, estudamos o comportamento de um circuito RC (resistor-capacitor) durante os processos de carga e descarga. O objetivo foi compreender, na prática, como a tensão varia no resistor e no capacitor ao longo do tempo, utilizando tanto simulação quanto montagem física e análise de dados experimentais.

---

## Demonstrações e Código do Circuito RC

### 1. Simulação no Tinkercad
O circuito RC foi simulado na plataforma Tinkercad para facilitar a visualização e testes virtuais.

- [Código Arduino: circuitorc.ino](Aula 2/circuitorc.ino)

<div align="center">
    <sup>Vídeo demonstração: </sup>

  <video src="Aula 2/tinkercad.mp4" controls width="480">
    Seu navegador não suporta a tag de vídeo. Você pode assistir ao vídeo diretamente <a href="Aula 2/tinkercad.mp4">aqui</a>.
  </video>

  <sub>Caso o vídeo não apareça acima, você pode acessá-lo diretamente [aqui](Aula 2/tinkercad.mp4)</sub>
</div>


### 2. Versão Física no Arduino
O circuito também foi montado fisicamente utilizando um Arduino real. Abaixo, insira fotos, vídeos ou links para demonstrações da montagem e funcionamento:

<div align="center">
    <sup>Vídeo demonstração: </sup>

  <video src="Aula 2/circuito.mp4" controls width="480">
    Seu navegador não suporta a tag de vídeo. Você pode assistir ao vídeo diretamente <a href="Aula 2/circuito.mp4">aqui</a>.
  </video>

  <sub>Caso o vídeo não apareça acima, você pode acessá-lo diretamente [aqui](Aula 2/circuito.mp4)</sub>
</div>


## Resultados e Análise dos Dados

Após a montagem e coleta dos dados (tempo, tensão no resistor e no capacitor), utilizamos Python e Matplotlib para gerar gráficos que ilustram o comportamento do circuito RC.

O código-fonte utilizado para plotar os gráficos está disponível [aqui](Aula 2/grafico.ipynb).

### Gráfico 1: Tensão no Capacitor (Vc)
Mostra a curva de carga do capacitor ao longo do tempo, evidenciando o crescimento exponencial da tensão até atingir o valor máximo.

<div align="center">
    <sup>Gráfico: Curva de Carga do Capacitor</sup>
  <img src="Aula 2/grafico_capacito.png">
  <sub>Caso o gráfico não apareça acima, você pode acessá-lo diretamente [aqui](Aula 2/grafico_capacitor.png)</sub>
</div>

### Gráfico 2: Tensão no Resistor (Vr)
Apresenta a curva de descarga no resistor, mostrando a queda da tensão ao longo do tempo, característica do circuito RC.

<div align="center">
    <sup>Gráfico: Curva de Descarga no Resistor</sup>
  <img src="Aula 2/grafico_resistor.png">
  <sub>Caso o gráfico não apareça acima, você pode acessá-lo diretamente [aqui](Aula 2/grafico_resistor.png)</sub>
</div>

### Gráfico 3: Curvas Combinadas
As curvas de Vr e Vc são apresentadas juntas, facilitando a comparação entre os processos de carga e descarga no circuito RC.

<div align="center">
    <sup>Gráfico: Comportamento de Carga e Descarga</sup>
  <img src="Aula 2/grafico.png">
  <sub>Caso o gráfico não apareça acima, você pode acessá-lo diretamente [aqui](Aula 2/grafico.png)</sub>
</div>

#### Código Python para Geração dos Gráficos
```python
# Veja o arquivo grafico.ipynb para o código completo
import matplotlib.pyplot as plt

# ...dados e código de plotagem...
```

---

Para mais detalhes sobre o experimento, análise dos dados e dicas extras, consulte o tutorial oficial: [link para tutorial]

<!-- Espaço para vídeo de demonstração ou outros arquivos -->

---

> **Observação:**
> - O arquivo `grafico.ipynb` contém todo o código e comentários explicativos para reprodução dos gráficos.
> - Substitua os links e imagens acima pelos arquivos reais assim que estiverem disponíveis.
