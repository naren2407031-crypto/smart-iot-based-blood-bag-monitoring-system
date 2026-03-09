sensors.requestTemperatures();
float temperature = sensors.getTempCByIndex(0);
float weight      = scale.get_units(5);
int   turbidity   = analogRead(TURBIDITY_PIN);
```
```
git add read_sensors.ino
git commit -m "feat: add sensor read logic for temp, weight and turbidity"
