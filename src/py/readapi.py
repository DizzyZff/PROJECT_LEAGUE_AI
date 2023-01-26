import requests


# read api
def readapi():
    # read api
    url = "https://127.0.0.1:2999/liveclientdata/allgamedata"
    response = requests.get(url, verify=False)
    if response.status_code != 200:
        print("Error: " + str(response.status_code))
        return
    dest = "../../data/allgamedata.json"
    with open(dest, "w") as f:
        f.write(response.text)
        f.close()

    # read api


if __name__ == "__main__":
    readapi()
