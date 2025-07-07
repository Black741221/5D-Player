class PacketSlot:
    def __init__(self, index, enabled=True, value=0):
        self.index = index
        self.enabled = enabled
        self.value = value

def init_slots(count=5):
    slots = []
    for i in range(count):
        slot = PacketSlot(index=i + 3)
        slots.append(slot)
    return slots

def serialize_slots(slots):
    packet = bytearray()
    for slot in slots:
        packet += slot.index.to_bytes(4, 'little')
        packet += int(slot.enabled).to_bytes(4, 'little')
        packet += slot.value.to_bytes(4, 'little')
    return packet

def generate_packet(param2):
    slots = init_slots()
    slots[0].value = param2
    return serialize_slots(slots)
