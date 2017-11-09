## Teste sensor BMP 280 - SENSOR TEMPERATURA, PRESSÃO E ALTITUDE 

Para a altitude é necessario introduzir no codigo a pressão diaria ao nivel do mar dado em hPa, (assim obtendo a altitude precisa utlizando a pressão, claro pode possuir erros mas caso queira uma altitude perfeita set valores que batam dando o resultado da altitude exata da região onde voce se encontra),  pode obter essa informação em https://www.wunderground.com/weather/br/cornelio-procopio/-23.1875531%2C-50.6534481 ou https://www.climatempo.com.br/ através da localidade onde se encontra o sensor. O valor setado na imagem abaixo é referente a preção hidro Pascal (hPa) na hora e na data referida.

![](https://github.com/VisionSat-UTFPR/tutorial-teste-BMP280/blob/master/img/BAGULHO%20PRA%20SETAR%20A%20ALTITUDE%20CERTO.png)


## Bibliotecas utilizadas: 

* Adafruit_SENSOR:  Deve-se ter a biblioteca adafruit instalada na IDE para que funcione. Para obter a biblioteca acesse o link https://github.com/adafruit/Adafruit_Sensor realize o download, após o download extraia e coloque o conteudo no caminho \Arduino\libraries 

* Adafruit_BMP280: Deve-se ter a bliblioteca adafruit-bmp280 instalada na IDE para que funcione  o sensor. Para isso acesse o link https://learn.adafruit.com/adafruit-bmp280-barometric-pressure-plus-temperature-sensor-breakout/wiring-and-test para se obter o download da bilblioteca. Extraia os arquivos para a pasta:  \Arduino\libraries  e altere o nome da pasta pra Adafruit_BMP280 

### Outro metodo de obtenção das Bibliotecas caso não esteja funcionando esses links:

Para encontrar a biblioteca necessaria caso não funcione os links, (se forem bibliotecas de sensores muito comuns vão encontrar quase todos usando esse metodo caso contrario for algo meio fora do normal  joga no google que voces encontram la pra download ),  voces teram que entrar na opção sketch e ir em INCLUDE LIBRARY  e depois clicar em MANAGER LIBRARY 

![](https://github.com/VisionSat-UTFPR/tutorial-teste-BMP280/blob/master/img/ONDE%20IR%20PRA%20BAIXAR%20OS%20ROLES%20de%20biblioteca.png)

Depois que clicar la vai aparecer uma aba onde voce pode digitar o nome da biblioteca e caso encotre ela selecione e clique em instalar, (a opção de instalar so aparece quando seleciona a biblioteca). 

![](https://github.com/VisionSat-UTFPR/tutorial-teste-BMP280/blob/master/img/ONDE%20IR%20PRA%20BAIXAR%20OS%20ROLES%20de%20biblioteca2222.png)


As outras bibliotecas que aparecem no codigo são bibliotecas padroes do arduino, caso de erro de não encontralas utilizar o metodo a cima pra instalar elas.


## Materias a utilizar:
* Arduino (caso não pegue tenta usar o modelo  UNO, (iremos testar em outros modelos e em outros dispositivos e quando isso ocorrer esse arquivo será atualizado))

* Protoboard

* Sensor barometrico BMP280 (Datasheet sensor: https://cdn-shop.adafruit.com/datasheets/BST-BMP280-DS001-11.pdf)
* Cabo usb 

* Jumpers
	
## Esquematico do Circuito:

![](https://github.com/VisionSat-UTFPR/tutorial-teste-BMP280/blob/master/img/esquematico%20sensor%20bmp280.png)

### Codigo do Arduino pra fazer a bagaça funcionar:

Está disponivel junto com esse manual no formato necessario para rodar no arduino que no caso é o formato .ino

## OQUE TEM QUE APARECER QUANDO RODAR O ROLE:

![](https://github.com/VisionSat-UTFPR/tutorial-teste-BMP280/blob/master/img/Print%20of%20test%20result.png)

Caso não aparecer isso verificar se está com o serial em 9600  e se está no terminal serial correto(COM seila oque,  testa todos mas normalmente é os numeros mais altos COM3 COM4 COM5 ....)

## Informações uteis sobre o codigo:
AS COISAS DO CODIGO TÃO COMENTADAS NO CODIGO ENTÃO SÓ LER LA QUE VOCES VÃO ENTENDER.

* Temperatura: É calculada em graus Celsius mas voce pode convertela em Fahrenheit (F) colocando a seguinte equação no codigo F = C * 9/5 + 32 

* Pressão: Ela esta sendo calculada em Pa (Pascal) e  100 Pascals = 1 hPa = 1 millibar. Ele pode ser retornado ou em milibar ou em polegadas de mercurio para isso utilizamos  1 pascal = 0.000295333727 polegadas de mercurio ou então 1 mmHg  = 133,322 Pascal (SÓ FAZER REGRA DE 3 PLZ ISSO TEM TUTORIAL NO YT)

* Altitude: A altitude é a mais "diferentona" porque voce vai ter que pegar a pressão hidrostatica do ambiente no dia hPa, vista nos sites citados la no inicio e substituir la no codigo pra obter o resultado certo da sua altitude.

Bom é isso o tutorial pra fazer o sensor rodar qualquer duvida entar em contato com a equipe do VisionSat, temos pagina no face então só botar la e pesquisar que voce acha vlw flwwwwwwwww  ^^^^^^. 