# Anotações
## transformação afim
> conserva o paralelismo entre linhas.
- translação
- escalamento
- rotação
- espelhamento
- cisalhamento

{TALVEZ elementos gráficos que vemos na tela seja graficos de funções}

## matriz identidade
- usada para atualizar a posicao e enquadramento de uma cena, assim, nao "perdendo o desenho" caso seja alterada a pocisao da janela.

## funções
- glTranslate()
```bash
glTranslate(x, y, z);
```
altera o valor das coordenadas posteriores à chamada da função, somando ou subtraindo o valor de cada um de acordo com o valor passado.

- glSkalef()
```bash
glSkale(x, y, z);
```
altera as propriedades de largura, altura e profundidade, reajustando as coordenadas posteriores à chamada da função.

- glRotate()
```bash
glRotate(deg, x, y, z)
```
rotaciona o elemento de acordo com os seguintes argumentos: angulo, eixo x, eixo y, eixo z. Para os três últimos algumentos, define 1.0f para SIM e o.0f para NÃO
