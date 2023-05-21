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

    fmt.Println(a_car.gas_pedel)
    fmt.Println("car going at",a_car.method_name(), "kilo meters per hour")
    fmt.Println("car going at",a_car.mph(), "miles per hour")

    a_car.new_top_speed(500)

    fmt.Println("car going at",a_car.method_name(), "kilo meters per hour")
    fmt.Println("car going at",a_car.mph(), "miles per hour")

    // Same thing with function output
    //a_car = newer_top_speed(a_car, 500)
}

const usixteenbitmax float64 = 65535
const kmh_multiple float64 = 1.60934

// In go, there are 2 types of methods, value receivers and pointer receivers
// Value receivers are methods that are just gonna do calculations on a values.
// if u want to modify or change the value in struct, u then need a pointer receiver

func (c car) method_name() float64 {
    return float64(c.gas_pedel) * (c.top_speed_kmh/usixteenbitmax)
}

func (c car) mph() float64 {
    return float64(c.gas_pedel) * (c.top_speed_kmh/usixteenbitmax/kmh_multiple)
}

func (c *car) new_top_speed(newSpeed float64) {
    c.top_speed_kmh = newSpeed
}

// Function which can do the exact samething
func newer_top_speed(c car, speed float64) car {
    c.top_speed_kmh = speed
    return c
}
