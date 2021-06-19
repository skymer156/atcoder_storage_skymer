from enum import Enum, auto

class Device(Enum):
    #Pythonのenumは非常にめんどくさいというか、番号いちいち振らないといけないのがだるい
    #が、auto関数によってそれが多少解消されている。
    #Flagを使って、論理計算的な列挙も可能なのが面白い。
    iPhone6 = auto()
    iPhone7 = auto()
    iPhone8 = auto()
    iPhoneX = auto()
    Nexus5 = auto()
    Nexus6 = auto()
    Nexus7 = auto()
    Device_number = auto()


## enumを使用して、入力された内容のデバイスの中に指定のモノが存在するかどうかの探索。->多いと検索量が増えるので注意。
## idをベースとして、ハッシュで検索を行えば計算量少で住むかもしれない。->結局enumは使用しなそうか...
def main():
    print("{0}".format(Device.iPhone8))
    print(Device.iPhone8.value)
    print("What is your device??")
    deviceList = [x for x in input().split()]
    for deviceName in deviceList:
        if deviceName in [e.name for e in Device]:
            tag, id = Device[deviceName].name, Device[deviceName].value 
            print("your device exists here : the device name is {0}, id is {1} ".format(tag, id))

if __name__ == '__main__':
    main()