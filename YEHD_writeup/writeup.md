#Writeup　Please tell me the title. (Crypt 150pt)  
##＜手順＞  
1.Base64でひたすらdecode  
use_synth :piano  
in_thread do  
  R=0  
  2.times do  
    ar-.. --- .-. .- -- .- ... - --- -. .   
    play 74  
    sleep 0.125  
    play 72  
    sleep 0.125  
    3.times do  
      play 71  
      sleep 0.125  
      play 72  
      sleep 0.125  
    end  
  
    br=.- .-. --- -- .- - . -. -.. ...   
    play 81  
    sleep 0.125  
    play 79  
    sleep 0.125  
    3.times do  
      play 78  
      sleep 0.125  
      play 79  
      sleep 0.125  
    end  
  
    cr=0  
    8.times do  
      play ( [80, 81, 84, 83, 86, 84, 83, 81][cr])  
      sleep 0.125  
      cr=cr+1  
    end  
  
    dr=0  
    drm=88  
    play 81  
    sleep 0.125  
    play 79  
    sleep 0.125  
    6.times do  
      play drm  
      sleep 0.125  
      if(dr==2)  
        drm=drm-1  
      else  
        drm=drm-2  
      end  
      dr=dr+1  
    end  
  
    er=0  
    erm=86  
    play 79  
    sleep 0.125  
    play 77  
    sleep 0.125  
    6.times do  
      play erm  
      sleep 0.125  
      if(er==1)  
        erm=erm-1  
      else  
        erm=erm-2  
      end  
      er=er+1  
    end  
  
    fr=0  
    frm=84  
    play 77  
    sleep 0.125  
    play 76  
    sleep 0.125  
    6.times do  
      play frm  
      sleep 0.125  
      if(fr==0 or fr==4)  
        frm=frm-1  
      else  
        frm=frm-2  
      end  
      fr=fr+1  
    end  
  
    gr=0  
    5.times do  
      play ( [74,81,79,71,72][gr])  
      if(gr==4)  
        sleep 1  
      else  
        sleep 0.25  
        gr=gr+1  
      end  
    end  
  end  
  
  1.times do  
    hr=0  
    4.times do  
      if(hr==0 or hr==3)  
        play 81  
        sleep 0.125  
      else  
        play 78  
        sleep 0.125  
      end  
      play 79  
      sleep 0.125  
      hr=hr+1  
    end  
  
    ir=0  
    4.times do  
      if(ir==0 or ir==3)  
        play 79  
        sleep 0.125  
      else  
        play 76  
        sleep 0.125  
      end  
      play 77  
      sleep 0.125  
      ir=ir+1  
    end  
  
    jr=0  
    4.times do  
      if(jr==0 or jr==3)  
        play 77  
        sleep 0.125  
      else  
        play 75  
        sleep 0.125  
      end  
      play 76  
      sleep 0.125  
      jr=jr+1  
    end  
  
    kr=0  
    4.times do  
      if(kr==0 or kr==3)  
        play 76  
        sleep 0.125  
      else  
        play 73  
        sleep 0.125  
      end  
      play 74  
      sleep 0.125  
      kr=kr+1  
    end  
  
    lr=0  
    lrm=88  
    6.times do  
      if(lr<2)  
        if(lr==0)  
          play 81  
          sleep 0.125  
        else  
          play 78  
          sleep 0.125  
        end  
        play 79  
        sleep 0.125  
      else  
        play lrm  
        sleep 0.125  
        if(lr==3)  
          lrm=lrm-3  
        else  
          if(lr==4)  
            lrm=lrm-2  
          else  
            lrm=lrm-4  
          end  
        end  
      end  
      lr=lr+1  
    end  
  
    mr=0  
    mrm=86  
    6.times do  
      if(mr<2)  
        if(mr==0)  
          play 79  
          sleep 0.125  
        else  
          play 76  
          sleep 0.125  
        end  
        play 77  
        sleep 0.125  
      else  
        play mrm  
        sleep 0.125  
        if(mr==3)  
          mrm=mrm-4  
        else  
          if(mr==4)  
            mrm=mrm-2  
          else  
            mrm=mrm-3  
          end  
        end  
      end  
      mr=mr+1  
    end  
  
    nr=0  
    nrm=84  
    6.times do  
      if(nr<2)  
        if(nr==0)  
          play 77  
          sleep 0.125  
        else  
          play 75  
          sleep 0.125  
        end  
        play 76  
        sleep 0.125  
      else  
        play nrm  
        sleep 0.125  
        if(nr==3)  
          nrm=nrm-2  
        else  
          if(nr==4)  
            nrm=nrm-1  
          else  
            nrm=nrm-5  
          end  
        end  
      end  
      nr=nr+1  
    end  
  
    o=.-. .- -. -.. --- -- . .- ... -   
    play 79  
    sleep 0.375  
    play 76  
    sleep 0.125  
    play 74  
    sleep 0.5  
  
    pr=.-. .- -. -.. --- -- ... . .- -   
    play 74  
    sleep 0.125  
    play 72  
    sleep 0.125  
    3.times do  
      play 71  
      sleep 0.125  
      play 72  
      sleep 0.125  
    end  
  
    qr=.-. .- -. -.. --- -- - . .- ...   
    play 81  
    sleep 0.125  
    play 79  
    sleep 0.125  
    3.times do  
      play 78  
      sleep 0.125  
      play 79  
      sleep 0.125  
    end  
  
    rr=0  
    8.times do  
      play ( [80,81,84,83,86,84,83,81][rr])  
      sleep 0.125  
      rr=rr+1  
    end  
  
    sr=0  
    srm=88  
    play 81  
    sleep 0.125  
    play 79  
    sleep 0.125  
    6.times do  
      play srm  
      sleep 0.125  
      if(sr==2)  
        srm=srm-1  
      else  
        srm=srm-2  
      end  
      sr=sr+1  
    end  
  
    tr=0  
    trm=86  
    play 79  
    sleep 0.125  
    play 77  
    sleep 0.125  
    6.times do  
      play trm  
      sleep 0.125  
      if(tr==1)  
        trm=trm-1  
      else  
        trm=trm-2  
      end  
      tr=tr+1  
    end  
  
    ur=0  
    urm=84  
    play 77  
    sleep 0.125  
    play 76  
    sleep 0.125  
    6.times do  
      play urm  
      sleep 0.125  
      if(ur==0 or ur==4)  
        urm=urm-1  
      else  
        urm=urm-2  
      end  
      ur=ur+1  
    end  
  
    vr=-- .- -.. .- -- --.. . .-. --- - --- -.  
    play 74  
    sleep 0.25  
    play 81  
    sleep 0.25  
    play 79  
    sleep 0.25  
    play 71  
    sleep 0.25  
    play 72  
    sleep 1  
  end  
end  
  
in_thread do  
  L=0  
  2.times do  
    al=0  
    3.times do  
      if(al==0)  
        play 48  
        sleep 0.5  
      else  
        if(al==1)  
          play 64  
          sleep 0.5  
        else  
          play 65  
          sleep 0.5  
        end  
      end  
      play 60  
      sleep 0.5  
      al=al+1  
    end  
  
    bl=0  
    blm1=64  
    blm2=61  
    3.times do  
      if(bl==0)  
        play 60  
        play blm1  
      else  
        play blm1  
      end  
      sleep 0.875  
      play blm2  
      sleep 0.125  
      blm1=blm1-2  
      if(bl==2)  
        blm2=blm2-4  
      else  
        blm2=blm2-2  
      end  
      bl=bl+1  
    end  
  
    cl=-.. --- .-. .- -- .- - . -. --.. --- --- --  
    play 53  
    sleep 0.5  
    play 55  
    sleep 0.5  
  
    dl=0  
    if(L==0)  
      2.times do  
        if(dl==0)  
          play 60  
          sleep 0.25  
        else  
          play 52  
          sleep 0.25  
        end  
        play 55  
        sleep 0.25  
        dl=dl+1  
      end  
    else  
      play 60  
      sleep 0.5  
      play 48  
      sleep 0.5  
    end  
    L=L+1  
  end  
  
  1.times do  
    el=0  
    elm=64  
    4.times do  
      play elm  
      sleep 0.5  
      play 55  
      sleep 0.5  
      if(el==2)  
        elm=elm+5  
      else  
        elm=elm-2  
      end  
      el=el+1  
    end  
  
    fl=... - .- .-.. -.- . .-. - .-- .. -.  
    flm=64  
    2.times do  
      play flm  
      play 55  
      sleep 1  
      flm=flm-2  
    end  
  
    gl=-.. --- .-. .- -- .- -. . - --.. --- --- --   
    play 60  
    play 55  
    sleep 0.875  
    play 60  
    sleep 0.125  
  
    hl=.- .-. - - . ... - .. .-.. .-..   
    in_thread do  
      play 64  
      sleep 0.375  
      play 60  
      sleep 0.125  
      play 59  
      sleep 0.5  
    end  
    play 55  
    sleep 1  
  
    il=0  
    ilm=48  
    3.times do  
      play ilm  
      sleep 0.5  
      play 60  
      sleep 0.5  
      if(il==0)  
        ilm=ilm+16  
      else  
        ilm=ilm+1  
      end  
      il=il+1  
    end  
  
    jl=0  
    jlm1=64  
    jlm2=61  
    3.times do  
      play jlm1  
      if(jl==0)  
        play 60  
      end  
      sleep 0.875  
      play jlm2  
      sleep 0.125  
      jlm1=jlm1-2  
      jlm2=jlm2-2  
      jl=jl+1  
    end  
  
    kl=- .- .-.. -.- . .-. - .-- .. -.   
    play 53  
    sleep 0.5  
    play 55  
    sleep 0.5  
    play 60  
    sleep 0.5  
    play 48  
    sleep 0.5  
  end  
end  
  
2.エラーを消して曲を聞いて曲名をあてるorエラーの部分のMorseCodeをdecodeする  
ar:DORAMASTONE  
br:AROMATENDS  
o:RANDOMEAST  
pr:RANDOMSEAT  
qr:RANDOMTEAS  
vr:MADAMZEROTON  
cl:DORAMATENZOOM  
fl:STALKERTWIN  
gl:DORAMANETZOOM  
hl:ARTTESTILL  
kl:TALKERTWIN  
  
3.出てきた文字列を並び替えるて出てきたものがキーワード…ほんとにすみませんでした。死んできます。  
ar:NODAME STAR ?O?  
br:NODAME STAR  
o:NODAME STAR  
pr:NODAME STAR  
qr:NODAME STAR  
vr:MOZART NODAME  
cl:MOZART NODAME ?O?  
fl:TWINKLE STAR  
gl:MOZART NODAME  
hl:LITTLE STAR  
kl:TWINKLE STAR ?S?  

4.YEHD{Ah, vous dirai-je, maman}  

##＜謝罪＞  
不備ありすぎでした。すみません。  
arのあと本来「=」入るはずなのに抜けちゃっててすみませんでした。  
最後の並び替えのとこ何にもヒントなくてすみませんでした。  
並び替えのとこ文字増えてたり減ってたりすみませんでした。  
くそ問でした。本当にすみませんでした。  
