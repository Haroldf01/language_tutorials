package main

import "fmt"

type car struct {
    gas_pedel uint16
    brake_padel uint16
    steering_wheel int16
    top_speed_kmh float64
}
func main() {
    a_car := car{gas_pedel:22341,
                brake_padel:0,
                steering_wheel:12356,
                top_speed_kmh:225.0}
    fmt.Println(a_car.gas_pedel, a_car.top_speed_kmh)
}
