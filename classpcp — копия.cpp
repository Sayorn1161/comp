int main() {
    CPU cpu;
    RAM ram;
    Storage storage;
    GPU gpu;
    Motherboard motherboard;
    PowerSupply powerSupply;
    Display display;
    InputDevices inputDevices;
    OS os;

    Computer computer(&cpu, &ram, &storage, &gpu, &motherboard, &powerSupply, &display, &inputDevices, &os);
    computer.print();

    return 0;
}
