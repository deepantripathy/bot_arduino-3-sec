require "serialport"

port_file="/dev/ttyACM0"
baud_rate= 9600

data_bits= 8
stop_bits= 1
parity= SerialPort::NONE

obj= SerialPort.new(port_file, baud_rate, data_bits, stop_bits, parity)
wait_time=5;

loop do
	puts "enter input:"
	input= gets
	obj.write "#{input}"
	
end
