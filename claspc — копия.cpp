class Computer {
public:
    Computer(CPU* cpu, RAM* ram, Storage* storage, GPU* gpu, Motherboard* motherboard, PowerSupply* powerSupply, Display* display, InputDevices* inputDevices, OS* os)
        : cpu(cpu), ram(ram), storage(storage), gpu(gpu), motherboard(motherboard), powerSupply(powerSupply), display(display), inputDevices(inputDevices), os(os) {}

    void print() const {}

private:
    CPU* cpu;
    RAM* ram;
    Storage* storage;
    GPU* gpu;
    Motherboard* motherboard;
    PowerSupply* powerSupply;
    Display* display;
    InputDevices* inputDevices;
    OS* os;
};
