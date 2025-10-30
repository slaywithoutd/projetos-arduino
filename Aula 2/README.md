
# IoT - Módulo 4 - Segunda Aula

## Sobre o Projeto

Nesta aula, estudamos o comportamento de um circuito RC (resistor-capacitor) durante os processos de carga e descarga. O objetivo foi compreender, na prática, como a tensão varia no resistor e no capacitor ao longo do tempo, utilizando tanto simulação quanto montagem física e análise de dados experimentais.

## Demonstrações e Código do Circuito RC

### 1. Simulação no Tinkercad
O circuito RC foi simulado na plataforma Tinkercad para facilitar a visualização e testes virtuais. Para visualizar o código utilizado [clique aqui.](/Aula%202/circuitorc.ino)

<div align="center">
    <sup>Vídeo demonstração: </sup>

  <video src="/Aula 2/tinkercad.mp4" controls width="480">
    Seu navegador não suporta a tag de vídeo. Você pode assistir ao vídeo diretamente <a href="/Aula 2/tinkercad.mp4">aqui</a>.
  </video>

  <sub>Caso o vídeo não apareça acima, você pode acessá-lo diretamente [aqui](https://youtu.be/P3mWybIVkJU)</sub>
</div>


### 2. Versão Física no Arduino
O circuito também foi montado fisicamente utilizando um Arduino real. Abaixo, insira fotos, vídeos ou links para demonstrações da montagem e funcionamento:

<div align="center">
    <sup>Vídeo demonstração: </sup>

  <video src="/Aula 2/circuito.mp4" controls width="480">
    Seu navegador não suporta a tag de vídeo. Você pode assistir ao vídeo diretamente <a href="/Aula 2/circuito.mp4">aqui</a>.
  </video>

  <sub>Caso o vídeo não apareça acima, você pode acessá-lo diretamente [aqui]( https://youtu.be/Y09bOK-XDfA)</sub>
</div>


## Resultados e Análise dos Dados

Após a montagem e coleta dos dados (tempo, tensão no resistor e no capacitor), utilizamos Python e Matplotlib para gerar gráficos que ilustram o comportamento do circuito RC.

O código-fonte utilizado para plotar os gráficos está disponível [aqui](Aula%202/grafico.ipynb).

Você também pode abrir e executar o notebook diretamente no Google Colab:

[![Abrir no Colab](https://colab.research.google.com/assets/colab-badge.svg)](https://colab.research.google.com/drive/1VH8lpRsJTbgxL38r_Uj6CdCA5xrcAZBU?usp=sharing)


### Gráfico 1: Tensão no Capacitor (Vc)
Mostra a curva de carga do capacitor ao longo do tempo, evidenciando o crescimento exponencial da tensão até atingir o valor máximo.

<div align="center">
    <sup>Gráfico: Curva de Carga do Capacitor</sup>
  <img src="/Aula 2/grafico_capacitor.png">
  <sub>Caso o gráfico não apareça acima, você pode acessá-lo diretamente [aqui](Aula 2/grafico_capacitor.png)</sub>
</div>

### Gráfico 2: Tensão no Resistor (Vr)
Apresenta a curva de descarga no resistor, mostrando a queda da tensão ao longo do tempo, característica do circuito RC.

<div align="center">
    <sup>Gráfico: Curva de Descarga no Resistor</sup>
  <img src="/Aula 2/grafico_resistor.png">
  <sub>Caso o gráfico não apareça acima, você pode acessá-lo diretamente [aqui](Aula 2/grafico_resistor.png)</sub>
</div>

### Gráfico 3: Curvas Combinadas
As curvas de Vr e Vc são apresentadas juntas, facilitando a comparação entre os processos de carga e descarga no circuito RC.

<div align="center">
    <sup>Gráfico: Comportamento de Carga e Descarga</sup>
  <img src="/Aula 2/grafico.png">
  <sub>Caso o gráfico não apareça acima, você pode acessá-lo diretamente [aqui](Aula 2/grafico.png)</sub>
</div>


