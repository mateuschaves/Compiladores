// Horas
const horas = [
    '00:00:00',
    '12:59:10',
    '60:60:60',
    '61:00:45'
];

horas.map( hora => {
    if(!/[0-2][0-9]:[0-6][0-9]:[0-6][0-9]/g.exec(hora))
        console.log(`${hora} é uma hora inválida !`);
    else
        console.log(`${hora} é uma hora válida !`);
});