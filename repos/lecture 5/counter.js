if (!localStorage.getitem(counter))
{
    localStorage.setitem(counter, 0);
}
          
function count() {
    let counter=localStorage.getitem(counter);

 counter++;
 document.querySelector ('h1').innerHTML=counter;
 localStorage.setitem('counter', counter);

 
}
document.addEventListener('DOMContentLoaded', function(){
    document.querySelector('h1').innerHTML= localStorage.getitem(counter);
 document.querySelector('button').onclick=count;


}
);