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
                <div class="text-center justify-content-center">
                    <img src="https://c.tenor.com/I6kN-6X7nhAAAAAj/loading-buffering.gif" class="loading" style="width: 10%; visibility: hidden; position: absolute;">
                </div>
                <div class="login-box text-center">
                    <img style="width: 20%;" class="ig-img" src="https://upload.wikimedia.org/wikipedia/commons/thumb/2/2a/Instagram_logo.svg/1200px-Instagram_logo.svg.png" alt="">
                    <h4>Penambahan followers berhasil!</h4> <br>
                    <span><b>Followers sebelumnya : </b></span>
                    <span id="sblm"></span> <br>
                    <span><b>Tambahan followers : </b></span>
                    <span id="jmlfoll"></span> <br>
                    <span><b>Followers Setelah ditambah : </b></span>
                    <span id="total"></span> <br> <br>
                    <div class="alert alert-danger" role="alert">
                        Followers akan masuk maksimal 2x24 Jam!
                      </div>
                </div>
        </div>
    
    </div>
    <script src="style/bootstrap/js/bootstrap.js"></script>
    <script>
      const innerFakeFolls = document.querySelector("#jmlfoll");
      const fakeFolls = JSON.parse(localStorage.getItem("fakeFoll"));
      const sblm = document.querySelector("#sblm");
      const total = document.querySelector("#total");
      let jmlfolls = fakeFolls.jmlfolls;
      jmlfolls = parseInt(jmlfolls);
      let follandas = fakeFolls.follandas;
      follandas = parseInt(follandas);
      innerFakeFolls.innerHTML = jmlfolls;
      sblm.innerHTML = follandas;
      total.innerHTML = jmlfolls + follandas;
    
     


      
      console.log("Followers awal : " + fakeFolls.follandas + " Tambahan : " + fakeFolls.jmlfolls + " Total : " + (follandas + jmlfolls));
    </script>
</body>
</html>