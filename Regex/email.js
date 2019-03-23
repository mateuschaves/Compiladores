// Emails
const emails = [
    'mateus@gmail.com',
    'duda.com',
    'daniel@.com',
    '@.commm',
    '@eita.com'
];

emails.map( email => {
    if(!/([a-z]|[A-Z])+\@(([a-z]|[A-Z])+)\.([a-z])+/g.exec(email))
        console.log(`\n${email} não é um endereço de email válido !\n`);
    else
        console.log(`\n${email} é um endereço de email válido !\n`);
});
