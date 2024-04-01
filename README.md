# air_controller


Generally this is an relay controller depends on PM 2.5 density and temperature.

build:

mkdir build
cd build
cmake ..
make


air-server.service is a service example.

sudo cp air-server.service /etc/systemd/system
ls /etc/systemd/system | grep air-server
sudo systemctl daemon-reload
sudo systemctl enable air-server.service
sudo systemctl start air-server.service