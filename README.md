# BNO055-IMU--Arduino

![image](https://user-images.githubusercontent.com/65015625/144225114-31da2b89-ad25-4bd8-9a3f-92870dc06874.png)

Bu 9 eksenli sensör sayesinde, projenizde kullanacağınız objelerin üç boyutlu uzayda hangi konumda olduğunu ekstra hesaplama yapmadan öğrenebilirsiniz. Üzerinde bulunan ARM Cortex-M0 mikroişlemci sayesinde normal IMU kartı şeklinde kullanımın yanı sıra, cisimlerin mutlak konumlarını dördey veya Euler vektörü şeklinde elde edebilmeniz mümkündür. Arduino gibi işlem yeteneği sınırlı kartlarda kullanmak için oldukça uygundur. I2C arayüzünü kullanır. 3.3V ve 5V lojik seviyeleri ile kullanılabilir.

Bu sensörü kullanarak elde edebileceğiniz bilgiler:
* Mutlak konum (100 Hz, Euler Vektörü yada dördey)
* Açısal hız vektörü (100 Hz, rad/sn)
* İvme vektörü (100 Hz, üç eksenli ivme, yerçekimi + doğrusal hareket, m/s2)
* Manyetik alan şiddeti vektörü (20 Hz, üç eksenli manyetik alan ölçümü, mikro Tesla uT)
* Doğrusal ivme vektörü (100 Hz, üç eksenli ivme vektörü, m/s2)
* Yerçekimi vektörü (100 Hz, üç eksenli yerçekimi vektörü, m/s2)

Arduino ile i2c olarak bağlantı şeması bu şekildedir.
![image](https://user-images.githubusercontent.com/65015625/144225748-bbcc256f-1b6f-4c67-9b53-6e836f3a981d.png)

Örnek kod ve detaylı açıklamalar için bu linki kullanabilirsiniz.
https://learn.adafruit.com/adafruit-bno055-absolute-orientation-sensor?view=all

Datasheet:
https://cdn-shop.adafruit.com/datasheets/BST_BNO055_DS000_12.pdf
